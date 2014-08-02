# coding=utf-8
"""
Unit tests for conversion script
"""

__author__ = 'vlad'

from unittest import TestCase
from unittest.mock import Mock

from IoMux2Uboot import *




class DatasetTest(TestCase):

    def setUp(self):
        self.root = parse_iomux("samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml")
        self.sig_enet_mdio = self.root.findall(".//SignalDesign[@Name='ENET_MDIO']")


    def test_must_be_330_checked_signals(self):
        checked_signals =  self.root.findall(".//SignalDesign[@IsChecked='true']")
        self.assertEqual(len(checked_signals),330)

    def test_must_be_330_total_signals(self):

        all_signals =  self.root.findall(".//SignalDesign[@IsChecked='true']")
        self.assertEqual(len(all_signals),330)



