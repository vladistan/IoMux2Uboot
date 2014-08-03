# coding=utf-8
"""
Unit tests for conversion script
"""

__author__ = 'vlad'

from unittest import TestCase
from mock import patch, call, Mock, ANY
from mock import mock_open

import IoMux2Uboot



class PadDictTest(TestCase):
    """
    Tests For pad dictionary methods
    """

    def setUp(self):
        pass

    def test_append_pad_to_existing_instance(self):

        pad_dict = {'bob': {1: [1, 2, 4]}}
        IoMux2Uboot.append_pad(pad_dict, 'bob', 3,  9, 7, 3)

        self.assertDictEqual(pad_dict, {'bob': {3: [9, 7, 3], 1: [1, 2, 4]}})

    def test_append_pad_to_new_instance(self):

        pad_dict = {'bob': {1: [1, 2, 4]}}
        IoMux2Uboot.append_pad(pad_dict, 'bill', 3,  9, 7, 3)

        self.assertDictEqual(pad_dict, {'bill': {3: [9, 7, 3]}, 'bob': {1: [1, 2, 4]}})


class ProcessRegistersTest(TestCase):

    def setUp(self):
        pass

    def setup_mocks(self, padname, altname):

        routing = Mock(name="SigRouting")

        def sig_se(*args):
            if args == ('.//Routing',):
                return routing
            if args == ('Instance',):
                return "audmux"
            if args == ('Name',):
                return 'AUD5_RXD'

            return "Sig:Unknown"


        def reg_se(*args):
            if args == ('Name',):
                return padname
            if args == ('Address',):
                return "0x020E03F0"

            return "Reg:Unknown"

        def route_se(*args):

            if args == ('mode',):
                return altname
            if args == ('padNet',):
                return "padNet.DISP0_DATA19"

        signal = Mock(side_effect=sig_se)
        register = Mock()
        register.get = Mock(side_effect=reg_se)

        routing.get = Mock(side_effect=route_se)
        signal.find = Mock(side_effect=sig_se)
        signal.get  = Mock(side_effect=sig_se)


        return register, signal

    def test_that_only_regs_with_alt_and_ctl_pad_are_processed(self):

        register, signal = self.setup_mocks("SW_PAD_CTL_PAD", "BOB")
        append_pad = Mock()

        with patch('IoMux2Uboot.append_pad', append_pad):
            IoMux2Uboot.process_registers(5, signal, register)

        self.assertFalse(append_pad.called)

    def test_append_pad_is_called_when_correct_alt_ctl_pad_are_present(self):

        register, signal = self.setup_mocks("SW_PAD_CTL_PAD", "ALT5")
        append_pad = Mock()

        with patch('IoMux2Uboot.append_pad', append_pad):
            IoMux2Uboot.process_registers("PADS", signal, register)

        self.assertTrue(append_pad.called)

    def test_append_has_correct_args(self):

        register, signal = self.setup_mocks("SW_PAD_CTL_PAD", "ALT5")
        append_pad = Mock()

        with patch('IoMux2Uboot.append_pad', append_pad):
            IoMux2Uboot.process_registers("PADS", signal, register)

        calls = [call.append_pad("PADS", "audmux", '03F0', 'AUD5_RXD', 'DISP0_DATA19', '5')]
        append_pad.assert_has_calls(calls)


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


class ChipTypeTest(TestCase):

    def setUp(self):
        pass

    def test_correct_filename_for_dl(self):

        fname = IoMux2Uboot.get_header_filename("DL")

        self.assertEquals(fname, "headers/mx6dl_pins.h")

    def test_correct_filename_for_sl(self):

        fname = IoMux2Uboot.get_header_filename("SL")

        self.assertEquals(fname, "headers/mx6sl_pins.h")


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

    def test_how_many_signals_are_not_sw_ctl_pads(self):

        rt = self.root.findall("./SignalDesign/Register")

        self.assertEquals(len(rt), 1079)

        no_pad_ctl = [x for x in rt if not 'SW_PAD_CTL_PAD' in x.get('Name')  ]
        self.assertEquals(len(no_pad_ctl), 813)

        no_mux_ctl = [x for x in no_pad_ctl if not 'SW_MUX_CTL_PAD' in x.get('Name')  ]
        self.assertEquals(len(no_mux_ctl), 600)

        no_ctl_grp = [x.get('Name') for x in no_mux_ctl if not 'SW_PAD_CTL_GRP' in x.get('Name')  ]
        self.assertEquals(len(no_ctl_grp), 46)
        #TODO: Find out what to do with missing signals



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