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


def main(input_file):
    """
    Get information from IoMux XML file
    """

    root = parse_iomux(input_file)

    pad_dict = dict()

    signals = root.findall(".//SignalDesign[@IsChecked='true']")
    for signal in signals:
        for register in signal.findall(".//Register"):
            sig_routing = signal.find(".//Routing")
            if 'SW_PAD_CTL_PAD' in register.get('Name') and 'ALT' in sig_routing.get('mode'):
                address = register.get('Address')[6:]
                name = signal.get('Name')
                net = sig_routing.get('padNet')[7:]
                mode = sig_routing.get('mode')[-1:]
                instance = signal.get('Instance')

                try:
                    pad_dict[instance][address] = [name, net, mode]
                except KeyError:
                    pad_dict[instance] = dict()
                    pad_dict[instance][address] = [name, net, mode]

    dump_iomux(pad_dict)

    chip_type = root.find(".//Chip").text
    if 'DL' in chip_type:
        pins_filename = 'headers/mx6dl_pins.h'
    elif 'SL' in chip_type:
        pins_filename = 'headers/mx6sl_pins.h'
    else:
        pins_filename = 'headers/mx6_pins.h'

    # Create nested dictionary from header file.
    pins = open(pins_filename).readlines()
    pin_dict = dict()

    for i in range(0, len(pins)):
        if pins[i].startswith('#define MX6DL_PAD'):
            name = pins[i][8:].split()[0]
            addr = pins[i + 1].strip()[12:].split(',')[0]
            mode = int(pins[i + 1].strip()[12:].split(',')[2].strip().split('|')[0].strip())

            try:
                pin_dict[addr][mode] = name
            except KeyError:
                pin_dict[addr] = dict()
                pin_dict[addr][mode] = name

    dump_pin_dict(pin_dict)

    # Write pad setup and comment to file
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


if __name__ == "__main__":
    main('samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml')
