import xml.etree.ElementTree as ET
w = open('DCD_commands.c', 'w');

tree = ET.parse('sample.xml');
root = tree.getroot();

for signal in root.findall(".//SignalDesign[@Name]"):
	if 'I2C' in signal.get('Name'):
		w.write( '// %s Ball: %s\n' % (signal.get('Name'), signal.find(".//Routing").get('ball')) )
		for register in signal.findall(".//Register"):
			w.write( '// %s\n' % (register.get('Name')) )
			w.write( ':write %s,%s\n' % (register.get('Address'), register.get('Value')) )