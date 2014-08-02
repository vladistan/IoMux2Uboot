# coding=utf-8
"""
Unit tests for conversion script
"""

__author__ = 'vlad'

from unittest import TestCase
from mock import Mock

from IoMux2Uboot import *




class DatasetTest(TestCase):

    def setUp(self):
        self.root = parse_iomux("samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml")
        self.sig_enet_mdio = self.root.findall(".//SignalDesign[@Name='ENET_MDIO']")
        self.all_signals =  self.root.findall(".//SignalDesign[@IsChecked='true']")



    def test_must_be_330_checked_signals(self):
        checked_signals =  self.root.findall(".//SignalDesign[@IsChecked='true']")
        self.assertEqual(len(checked_signals),330)

    def test_must_be_330_total_signals(self):

        self.assertEqual(len(self.all_signals),330)


    def test_how_many_signals_have_alt_routing(self):

        rt = self.root.findall("./SignalDesign/Routing")

        self.assertEquals(len(rt),330)

        # There should be 117 signal w/o routing
        no_alt = [x.get('padNet') for x in rt if not "ALT" in x.get("mode")  ]
        self.assertEquals(len(no_alt),117)


        # There should be 111 signal w/o routing that belong to DRAM
        no_alt_wo_dram = [x for x in no_alt if not 'DRAM' in x ]
        self.assertEquals(len(no_alt_wo_dram),6)

        # There should be 6 signal w/o routing that belong to JTAG
        no_alt_wo_jtag = [x for x in no_alt_wo_dram if not 'JTAG' in x ]
        self.assertEquals(len(no_alt_wo_jtag),0)

        # There should be 0 signal w/o routing that belong neither to DRAM nor JTAG





