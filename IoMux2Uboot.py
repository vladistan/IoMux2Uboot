# coding=utf-8
# Not finished. Was attempting to create dictionary from XML file similar to pinDict.
# This is so that the pads can be grouped by instance as in the IOMux.
# The goal was to write smaller functions like setup_eim(), setup_gpio1(), etc.

# Created the dictionary. Just need to change the matching functionality to adapt
# the new data structure. Also need to create the function creation.

import xml.etree.ElementTree as Et

DEBUG = 1


def parse_iomux(input_file):
    """
    Parse IOMux file
    """
    tree = Et.parse(input_file)
    root = tree.getroot()
    return root


def dump_pin_dict(pin_dict):
    """
    Dump contents of Pin Dictionary for debugging purposes
    """

    if not DEBUG:
        return

    w = open('pinDict.dmp', 'w')
    [w.write('%s: %s\n' % (pin, pin_dict[pin])) for pin in pin_dict]
    w.flush()
    w.close()


def dump_iomux(pad_dict):
    """
    Dump contents of IOMUx dictionary for debugging purposes
    """
    if not DEBUG:
        return

    w = open('iomux.dmp', 'w')
    for instance in sorted(pad_dict):
        for address in pad_dict[instance]:
            pad = pad_dict[instance][address]
            w.write('Instance: %8s, Address: @ %s, Name: %20s, Net: %16s, Mode: %1s\n' % (
                instance, address, pad[0], pad[1], pad[2]))
    w.flush()
    w.close()


def get_header_filename(chip_type):
    if 'DL' in chip_type:
        pins_filename = 'headers/mx6dl_pins.h'
    elif 'SL' in chip_type:
        pins_filename = 'headers/mx6sl_pins.h'
    else:
        pins_filename = 'headers/mx6_pins.h'

    return pins_filename


def append_pad(pad_dict, instance, address, name, net, mode):
    try:
        pad_dict[instance][address] = [name, net, mode]
    except KeyError:
        pad_dict[instance] = dict()
        pad_dict[instance][address] = [name, net, mode]


def process_registers(pad_dict, signal, register):
    sig_routing = signal.find(".//Routing")
    signal_mode = sig_routing.get('mode')
    if 'SW_PAD_CTL_PAD' in register.get('Name') and 'ALT' in signal_mode:
        address = register.get('Address')[6:]
        name = signal.get('Name')
        net = sig_routing.get('padNet')[7:]
        mode = signal_mode[-1:]
        instance = signal.get('Instance')
        append_pad(pad_dict, instance, address, name, net, mode)



def write_pad_dict(pad_dict, pin_dict):
    w = open('DCD_commands.c', 'w')
    for instance in pad_dict:
        w.write('void setup_%s(){\n' % instance)
        for address in pad_dict[instance]:
            mode = int(pad_dict[instance][address][2])
            pin = pin_dict[address][mode]
            comment = pad_dict[instance][address][0] + " -- " + pad_dict[instance][address][1]
            w.write('\tmxc_iomux_v3_setup_pad(%s) // %s\n' % (pin, comment))
        w.write('}\n\n')
    w.close()


def append_pin(pin_dict, addr, mode, name):
    try:
        pin_dict[addr][mode] = name
    except KeyError:
        pin_dict[addr] = dict()
        pin_dict[addr][mode] = name


def process_pins(chip_type):
    pins_filename = get_header_filename(chip_type)
    pins = open(pins_filename).readlines()
    pin_dict = dict()
    for i in range(0, len(pins)):
        if pins[i].startswith('#define MX6DL_PAD'):
            name = pins[i][8:].split()[0]
            addr = pins[i + 1].strip()[12:].split(',')[0]
            mode = int(pins[i + 1].strip()[12:].split(',')[2].strip().split('|')[0].strip())

            append_pin(pin_dict, addr, mode, name)

    return pin_dict


def process_iomux(input_file):
    root = parse_iomux(input_file)
    pad_dict = dict()
    signals = root.findall(".//SignalDesign[@IsChecked='true']")
    for signal in signals:
        for register in signal.findall(".//Register"):
            process_registers(pad_dict, signal, register)
    chip_type = root.find(".//Chip").text
    return chip_type, pad_dict


def main(input_file):
    """
    Get information from IoMux XML file
    """

    chip_type, pad_dict = process_iomux(input_file)
    dump_iomux(pad_dict)


    # Create nested dictionary from header file.
    pin_dict = process_pins(chip_type)
    dump_pin_dict(pin_dict)

    # Write pad setup and comment to file
    write_pad_dict(pad_dict, pin_dict)


if __name__ == "__main__":
    main('samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml')
