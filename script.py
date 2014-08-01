import xml.etree.ElementTree as ET

w = open('DCD_commands.c', 'w');

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

w = open('iomux', 'w');
[w.write('Name: %16s, Net: %16s, Mode: %s @ %s\n' % (names[i], nets[i], alts[i], addresses[i])) for i in range(0, len(addresses))];
w.close();