import xml.etree.ElementTree as ET

DEBUG = 0;

# Get information from IoMux XML file 
tree = ET.parse('samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml');
root = tree.getroot();
addresses = []; names = []; nets = []; alts = [];

for signal in root.findall(".//SignalDesign[@IsChecked='true']"):
	for register in signal.findall(".//Register"):
		if 'SW_PAD_CTL_PAD' in register.get('Name') and 'ALT' in signal.find(".//Routing").get('mode'):
			addresses.append(register.get('Address')[6:])
			names.append(signal.get('Name'))
			nets.append(signal.find(".//Routing").get('padNet')[7:])
			alts.append(signal.find(".//Routing").get('mode')[-1:])

if DEBUG:
	w = open('iomux', 'w');
	[w.write('Name: %16s, Net: %16s, Mode: %s @ %s\n' % (names[i], nets[i], alts[i], addresses[i])) for i in range(0, len(addresses))];
	w.close();

# Create nested dictionary from header file.
pins = open('headers/mx6dl_pins.h').readlines();
pinDict = dict();

for i in range(0, len(pins)):
	if pins[i].startswith('#define MX6DL_PAD'):
		name = pins[i][8:].split()[0]
		addr = pins[i+1].strip()[12:].split(',')[0]
		mode = int(pins[i+1].strip()[12:].split(',')[2].strip().split('|')[0].strip())

		try:
			pinDict[addr][mode] = name
		except KeyError:
			pinDict[addr] = dict();
			pinDict[addr][mode] = name

if DEBUG:
	w = open('pinDict', 'w');
	[w.write('%s: %s\n' % (pin, pinDict[pin])) for pin in pinDict];
	w.close();

# Write pad setup and comment to file
w = open('results', 'w');

for i in range(0, len(addresses)):
	pins = pinDict[addresses[i]];
	mode = int(alts[i])
	comment = names[i] + "--" + nets[i]
	w.write('mxc_iomux_v3_setup_pad(%s) // %s\n' % (pins[mode], comment));

w.close();