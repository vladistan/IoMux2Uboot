# coding=utf-8
"""
Script for converting IOMUX xml file created by Freescale IoMux tool into
UBoot's IoMux program code

"""

import xml.etree.ElementTree as Et
import sys, getopt

DEBUG = 1


def parse_iomux(input_file):
    """
    Parse IOMux file
    """
    try:
        tree = Et.parse(input_file)
    except IOError:
        sys.exit('File "%s" not found' % input_file)
    root = tree.getroot()
    return root


def dump_pin_dict(pin_dict):
    """
    Dump contents of Pin Dictionary for debugging purposes
    """

    if not DEBUG:
        return

    out = open('pinDict.dmp', 'w')
    for pin in pin_dict:
        out.write('%s: %s\n' % (pin, pin_dict[pin]))
    out.flush()
    out.close()


def dump_iomux(pad_dict):
    """
    Dump contents of IOMUx dictionary for debugging purposes
    """
    if not DEBUG:
        return

    out = open('iomux.dmp', 'w')
    for instance in sorted(pad_dict):
        for address in pad_dict[instance]:
            pad = pad_dict[instance][address]
            out.write('Instance: %8s, Address: @ %s, Name: %20s, Net: %16s, Mode: %1s\n' % (
                instance, address, pad[0], pad[1], pad[2]))
    out.flush()
    out.close()


def get_header_filename(chip_type):
    """
        Determine the file name for the header based on the chip type
    """
    if 'DL' in chip_type:
        pins_filename = 'headers/mx6dl_pins.h'
    elif 'SL' in chip_type:
        pins_filename = 'headers/mx6sl_pins.h'
    else:
        pins_filename = 'headers/mx6_pins.h'

    return pins_filename


def append_pad(pad_dict, instance, address, name, net, mode):
    """
    Append the pad definition to the dictionary.  If necessary create sub dictionary
    """
    try:
        pad_dict[instance][address] = [name, net, mode]
    except KeyError:
        pad_dict[instance] = dict()
        pad_dict[instance][address] = [name, net, mode]


def process_registers(pad_dict, signal, register):
    """
        Process register definition from XML file
    """
    sig_routing = signal.find(".//Routing")
    signal_mode = sig_routing.get('mode')
    if 'SW_PAD_CTL_PAD' in register.get('Name') and 'ALT' in signal_mode:
        address = register.get('Address')[6:]
        name = signal.get('Name')
        net = sig_routing.get('padNet')[7:]
        mode = signal_mode[-1:]
        instance = signal.get('Instance')
        append_pad(pad_dict, instance, address, name, net, mode)


def pin_info_from_pad(pad_dict, pin_dict, instance, address):
    """
    Extract pin information given the pad
    """
    mode = int(pad_dict[instance][address][2])
    pin = pin_dict[address][mode]
    comment = pad_dict[instance][address][0] + " -- " + pad_dict[instance][address][1]
    return comment, pin


def write_pad_dict(output_file, pad_dict, pin_dict):
    """
    Write IOMux definition to the UBoot C file
    """

    try:
        out = open(output_file, 'w')
    except IOError:
        sys.exit('File "%s" not found' % output_file)

    for instance in pad_dict:
        out.write('void setup_%s(){\n' % instance)
        for address in pad_dict[instance]:
            comment, pin = pin_info_from_pad(pad_dict, pin_dict, instance, address)
            out.write('\tmxc_iomux_v3_setup_pad(%s) // %s\n' % (pin, comment))
        out.write('}\n\n')
    out.close()


def append_pin(pin_dict, addr, mode, name):
    """
    Append pin difinition to the dictionary giving the instance addr if necessary
    """
    try:
        pin_dict[addr][mode] = name
    except KeyError:
        pin_dict[addr] = dict()
        pin_dict[addr][mode] = name


def parse_pin_line(pins, i):
    """
    Parse pin infromation from the UBoot header file
    """
    name = pins[i][8:].split()[0]
    addr = pins[i + 1].strip()[12:].split(',')[0]
    mode = int(pins[i + 1].strip()[12:].split(',')[2].strip().split('|')[0].strip())
    return addr, mode, name


def process_pins(chip_type):
    """
    Process UBoot header file to extract PIN information
    """
    pins_filename = get_header_filename(chip_type)
    pins = open(pins_filename).readlines()
    pin_dict = dict()
    for i in range(0, len(pins)):
        if pins[i].startswith('#define MX6DL_PAD'):
            addr, mode, name = parse_pin_line(pins, i)

            append_pin(pin_dict, addr, mode, name)

    return pin_dict


def process_iomux(input_file):
    """
    Process IOMux information from IOMUX XMl file
    """
    root = parse_iomux(input_file)
    pad_dict = dict()
    signals = root.findall(".//SignalDesign[@IsChecked='true']")
    for signal in signals:
        for register in signal.findall(".//Register"):
            process_registers(pad_dict, signal, register)
    chip_type = root.find(".//Chip").text
    return chip_type, pad_dict

def get_filenames(argv):
    """
    Extract filenames from command-line arguremts.
    """

    input_file = ''
    output_file = ''

    if not (len(argv) > 0):
        sys.exit('IoMux2Uboot.py -i <input_file> -o <output_file>')

    try:
        opts, args = getopt.getopt(argv, "hi:o:", ["ifile=","ofile="])
    except getopt.GetoptError:
        sys.exit('IoMux2Uboot.py -i <input_file> -o <output_file>')
    for opt, arg in opts:
        if opt == '-h':
            sys.exit('IoMux2Uboot.py -i <input_file> -o <output_file>')
        elif opt in ("-i", "--ifile"):
            input_file = arg
        elif opt in ("-o", "--ofile"):
            output_file = arg
        else:
            sys.exit('IoMux2Uboot.py -i <input_file> -o <output_file>')

    return input_file, output_file

def main(argv):
    """
    Main method
    """

    input_file, output_file = get_filenames(argv)

    chip_type, pad_dict = process_iomux(input_file)
    dump_iomux(pad_dict)


    # Create nested dictionary from header file.
    pin_dict = process_pins(chip_type)
    dump_pin_dict(pin_dict)

    # Write pad setup and comment to file
    write_pad_dict(output_file, pad_dict, pin_dict)


if __name__ == "__main__":
    main(sys.argv[1:])
