# Not finished. Was attempting to create dictionary from XML file similar to pinDict.
# This is so that the pads can be grouped by instance as in the IOMux.
# The goal was to write smaller functions like setup_eim(), setup_gpio1(), etc.

# Created the dictionary. Just need to change the matching functionality to adapt
# the new data structure. Also need to create the function creation.

import xml.etree.ElementTree as Et

DEBUG = 1


def main():
    # Get information from IoMux XML file
    tree = Et.parse('samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml')
    root = tree.getroot()
    pad_dict = dict()

    for signal in root.findall(".//SignalDesign[@IsChecked='true']"):
        for register in signal.findall(".//Register"):
            if 'SW_PAD_CTL_PAD' in register.get('Name') and 'ALT' in signal.find(".//Routing").get('mode'):
                address = register.get('Address')[6:]
                name = signal.get('Name')
                net = signal.find(".//Routing").get('padNet')[7:]
                mode = signal.find(".//Routing").get('mode')[-1:]
                instance = signal.get('Instance')

                try:
                    pad_dict[instance][address] = [name, net, mode]
                except KeyError:
                    pad_dict[instance] = dict()
                    pad_dict[instance][address] = [name, net, mode]

    if DEBUG:
        w = open('iomux', 'w')
        for instance in pad_dict:
            for address in pad_dict[instance]:
                pad = pad_dict[instance][address]
                w.write('Instance: %8s, Address: @ %s, Name: %20s, Net: %16s, Mode: %1s\n' % (
                    instance, address, pad[0], pad[1], pad[2]))
        w.close()

    # Create nested dictionary from header file.
    pins = open('headers/mx6dl_pins.h').readlines()
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

    if DEBUG:
        w = open('pinDict', 'w')
        [w.write('%s: %s\n' % (pin, pin_dict[pin])) for pin in pin_dict]
        w.close()

    # Write pad setup and comment to file
    w = open('results', 'w')

    #for i in range(0, len(addresses)):
    #	pins = pinDict[addresses[i]];
    #	mode = int(alts[i])
    #	comment = names[i] + "--" + nets[i]
    #	w.write('mxc_iomux_v3_setup_pad(%s) // %s\n' % (pins[mode], comment));

    w.close()


if __name__ == "__main__":
    main()