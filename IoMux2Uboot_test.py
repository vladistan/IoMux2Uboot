# coding=utf-8
"""
Unit tests for conversion script
"""

__author__ = 'vlad'

from unittest import TestCase
from mock import patch, call
from mock import mock_open

import IoMux2Uboot


class DebugTest(TestCase):

    def setUp(self):
        self.open = mock_open()
        self.save_debug = IoMux2Uboot

    def tearDown(self):

        IoMux2Uboot.DEBUG = self.save_debug

    def test_when_debug_is_false_should_not_write_pindict(self):

        IoMux2Uboot.DEBUG = False

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_pin_dict({})

        self.assertFalse(self.open.called)

    def test_pin_dict_write_dict(self):

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_pin_dict({1: {1: "BOB", 2: "BOLL"}, 2: {2: "JANE", 314: "PETE"}})

        self.open.assert_called_once_with("pinDict.dmp", "w")
        h = self.open()

        calls = [call.write("1: {1: 'BOB', 2: 'BOLL'}\n"), call().write("2: {2: 'JANE', 314: 'PETE'}\n")]
        h.write.assert_has_calls(calls)

    def test_when_debug_is_false_should_not_write_iomux(self):

        IoMux2Uboot.DEBUG = False

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_iomux({})

        self.assertFalse(self.open.called)

    def test_write_iomux(self):

        iomux_dict = {'audmux':
                       {
                           '03BC': ['AUD6_TXFS', 'DI0_PIN03', '2'],
                           '03C0': ['AUD6_RXD', 'DI0_PIN04', '2'],
                           '03E4': ['AUD5_TXC', 'DISP0_DATA16', '3'],
                           '03F0': ['AUD5_RXD', 'DISP0_DATA19', '3'],
                       }}

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_iomux(iomux_dict)

        self.open.assert_called_once_with("iomux.dmp", "w")
        h = self.open()

        calls = [
            call('Instance:   audmux, Address: @ 03E4, Name:             AUD5_TXC, Net:     DISP0_DATA16, Mode: 3\n'),
            call('Instance:   audmux, Address: @ 03BC, Name:            AUD6_TXFS, Net:        DI0_PIN03, Mode: 2\n')
        ]

        h.write.assert_has_calls(calls)


class ParserTest(TestCase):

    def setUp(self):
        self.root = IoMux2Uboot.parse_iomux("samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml")
        self.sig_enet_mdio = self.root.findall(".//SignalDesign[@Name='ENET_MDIO']")
        self.all_signals = self.root.findall(".//SignalDesign[@IsChecked='true']")

    def test_must_be_330_checked_signals(self):
        checked_signals = self.root.findall(".//SignalDesign[@IsChecked='true']")
        self.assertEqual(len(checked_signals), 330)

    def test_must_be_330_total_signals(self):

        self.assertEqual(len(self.all_signals), 330)

    def test_how_many_signals_have_alt_routing(self):

        rt = self.root.findall("./SignalDesign/Routing")

        self.assertEquals(len(rt), 330)

        # There should be 117 signal w/o routing
        no_alt = [x.get('padNet') for x in rt if not "ALT" in x.get("mode")]
        self.assertEquals(len(no_alt), 117)

        # There should be 111 signal w/o routing that belong to DRAM
        no_alt_wo_dram = [x for x in no_alt if not 'DRAM' in x]
        self.assertEquals(len(no_alt_wo_dram), 6)

        # There should be 6 signal w/o routing that belong to JTAG
        no_alt_wo_jtag = [x for x in no_alt_wo_dram if not 'JTAG' in x]
        self.assertEquals(len(no_alt_wo_jtag), 0)

        # There should be 0 signal w/o routing that belong neither to DRAM nor JTAG