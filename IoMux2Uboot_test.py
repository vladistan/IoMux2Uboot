# coding=utf-8
"""
Unit tests for conversion script
"""

__author__ = 'vlad'

from unittest import TestCase
from mock import patch, call, Mock
from mock import mock_open

import IoMux2Uboot


class PadDictTest(TestCase):
    """
    Tests For pad dictionary methods
    """

    def setUp(self):
        """
        Setup the test fixtures
        """
        self.test_pad = {'bob': {1: [1, 2, 4]}}

    def test_append_pad_to_existing_instance(self):
        """
        Test whether appending pad to existing instance works
        """

        IoMux2Uboot.append_pad(self.test_pad, 'bob', 3, 9, 7, 3)

        self.assertDictEqual(self.test_pad, {'bob': {3: [9, 7, 3], 1: [1, 2, 4]}})

    def test_append_pad_to_new_instance(self):
        """
        Test whether appending pad to non-existing instance creates the instance as well
        """

        pad_dict = {'bob': {1: [1, 2, 4]}}
        IoMux2Uboot.append_pad(pad_dict, 'bill', 3, 9, 7, 3)

        self.assertDictEqual(pad_dict, {'bill': {3: [9, 7, 3]}, 'bob': {1: [1, 2, 4]}})


class PinDictTest(TestCase):
    """
    Tests for Pin dictionary
    """

    def test_append_pad_to_existing_instance(self):
        """
        Test that we can append pad to the existing instance
        """

        pin_dict = {1: {'bob': 4}}
        IoMux2Uboot.append_pin(pin_dict, 1, 'sam', 7)

        self.assertDictEqual(pin_dict, {1: {'bob': 4, 'sam': 7}})

    def test_append_pad_to_new_instance(self):
        """
        Test that we can append pad to the new instance
        And the new instnace is created
        """

        pin_dict = {1: {'bob': 4}}
        IoMux2Uboot.append_pin(pin_dict, 3, 'sam', 7)

        self.assertDictEqual(pin_dict, {3: {"sam": 7}, 1: {'bob': 4}})


class ParsePinLineTest(TestCase):
    """
    Tests for parsers of Pin lines
    """

    def test_parsing_of_two_line_pin(self):
        """
        Test that we can parse two line pin definition
        """
        lines = ["#define MX6DL_PAD_CSI0_DAT13__SDMA_DEBUG_PC_7                                  \\",
                 "        IOMUX_PAD(0x036C, 0x0058, 4, 0x0000, 0, NO_PAD_CTRL)"]

        pin_data = IoMux2Uboot.parse_pin_line(lines, 0)

        self.assertEquals(pin_data, ('036C', 4, "MX6DL_PAD_CSI0_DAT13__SDMA_DEBUG_PC_7"))


class ProcessRegistersTest(TestCase):
    """
    Tests for registers processing
    """

    def setUp(self):
        """
        Setup text fixtures
        """
        self.mock_append = Mock()

    def test_that_only_regs_with_alt_and_ctl_pad_are_processed(self):
        """
        Test that we don't process pads that are not controllable
        """

        register, signal = setup_mocks("SW_PAD_CTL_PAD", "BOB")
        append_pad = Mock()

        with patch('IoMux2Uboot.append_pad', append_pad):
            IoMux2Uboot.process_registers(5, signal, register)

        self.assertFalse(append_pad.called)

    def test_append_pad_is_called_when_alt_ctl_pad_is_there(self):
        """
        Test we appending the pads when SW_PAD_CTL_PAD and ALT mode are present
        """

        register, signal = setup_mocks("SW_PAD_CTL_PAD", "ALT5")

        with patch('IoMux2Uboot.append_pad', self.mock_append):
            IoMux2Uboot.process_registers("PADS", signal, register)

        self.assertTrue(self.mock_append.called)

    @staticmethod
    def test_append_has_correct_args():
        """
        Test we appending pads correctly
        """

        register, signal = setup_mocks("SW_PAD_CTL_PAD", "ALT5")
        append_pad = Mock()

        with patch('IoMux2Uboot.append_pad', append_pad):
            IoMux2Uboot.process_registers("PADS", signal, register)

        calls = [call.append_pad("PADS", "audmux", '03F0', 'AUD5_RXD', 'DISP0_DATA19', '5')]
        append_pad.assert_has_calls(calls)


def setup_mocks(padname, altname):
    """
     Setup parser mocks
    """

    routing = Mock(name="SigRouting")

    def sig_se(*args):
        """
        Mock method for Signal
        """
        if args == ('.//Routing',):
            return routing
        if args == ('Instance',):
            return "audmux"
        if args == ('Name',):
            return 'AUD5_RXD'

        return "Sig:Unknown"

    def reg_se(*args):
        """
        Mock method for registers
        """
        if args == ('Name',):
            return padname
        if args == ('Address',):
            return "0x020E03F0"

        return "Reg:Unknown"

    def route_se(*args):
        """
        Mock method for routing
        """

        if args == ('mode',):
            return altname
        if args == ('padNet',):
            return "padNet.DISP0_DATA19"

    signal = Mock(side_effect=sig_se)
    register = Mock()
    register.get = Mock(side_effect=reg_se)

    routing.get = Mock(side_effect=route_se)
    signal.find = Mock(side_effect=sig_se)
    signal.get = Mock(side_effect=sig_se)

    return register, signal


class MemDumpTest(TestCase):

    def setUp(self):
        """
        Setup mock
        """
        self.open = mock_open()
        self.prnt = Mock()

    def test_int_to_dump_rep(self):

        x = IoMux2Uboot.int_to_dump_rep(0x01020388)

        self.assertEqual("01 02 03 88", x)

    def test_correctOutput(self):
        reg_dict = {
            '020E0070': '01020304',
            '020E0074': '01020304',
            '020E007C': '01020304',
            '020E0080': '01020304',
            '020E0084': '01020304',
            '020E0088': '01020388',

        }

        with patch('IoMux2Uboot.open', self.open, create=True):
                IoMux2Uboot.write_mem_dump("out.dump", reg_dict, 0x020E0070, 28)

        calls = [
            call("020E0070 "),
            call("01 02 03 04"),
            call(" "),
            call("01 02 03 04"),
            call(" "),
            call("XX XX XX XX"),
            call(" "),
            call("01 02 03 04"),
            call("\n"),
            call("020E0080 "),
            call("01 02 03 04"),
            call(" "),
            call("01 02 03 04"),
            call(" "),
            call("01 02 03 88"),
            call(" ")
        ]

        self.open.assert_called_once_with("out.dump", "w")
        handle = self.open()
        handle.write.assert_has_calls(calls)

    def test_CorrectRegRecording(self):
        reg1 = {'Address': '0x200E0070', 'Value': '0x00000001'}
        reg2 = {'Address': '0x200E0384', 'Value': '0x0001B030'}
        reg_dict = dict()

        IoMux2Uboot.record_reg_bin(reg_dict, reg1)
        IoMux2Uboot.record_reg_bin(reg_dict, reg2)

        self.assertDictContainsSubset({'200E0070': '00000001', '200E0384': '0001B030'}, reg_dict)

    def test_MustErrorAboutDuplicateEntitiesWithDiffValues(self):
        reg1 = {'Address': '0x200E0070', 'Value': '0x00000001'}
        reg2 = {'Address': '0x200E0070', 'Value': '0x00000002'}
        reg_dict = dict()

        with patch('IoMux2Uboot.print', self.prnt, create=True):
                IoMux2Uboot.record_reg_bin(reg_dict, reg1)
                IoMux2Uboot.record_reg_bin(reg_dict, reg2)

        self.prnt.assert_called_once_with("ERROR: IOMUX conflict addr 200E0070 Val 00000001 NewVal 00000002")


class OutputTest(TestCase):
    """
    Test for output
    """

    def setUp(self):
        """
        Setup mock
        """
        self.open = mock_open()

    def test_CorrectOutput(self):
        pads = {
            'audmux': {
                '03BC': ['AUD4_TXFS', 'SD2_DATA1', '2'],
                '03C0': ['AUD4_TXC', 'SD2_DATA3', '2']},
            'i2c1': {
                '0398': ['I2C1_SDA', 'CSI0_DATA08', '4'],
                '039C': ['I2C1_SCL', 'CSI0_DATA09', '4']}}

        pins = {'03C0': {2: "MX6DL_PAD_SD2_DAT3__AUDMUX_AUD4_TXC", 3: "BOLL"},
                '03BC': {2: "MX6DL_PAD_SD2_DAT1__AUDMUX_AUD4_TXFS", 314: "PETE"},
                '0398': {4: "MX6DL_PAD_CSI0_DAT8__I2C1_SDA"},
                '039C': {4: "MX6DL_PAD_CSI0_DAT9__I2C1_SCL"}}

        with patch('IoMux2Uboot.open', self.open, create=True):
                IoMux2Uboot.write_pad_dict("out.c", pads, pins)

        calls = [call("void setup_audmux(){\n"),
                 call("\tx_mxc_iomux_v3_setup_pad(MX6DL_PAD_SD2_DAT1__AUDMUX_AUD4_TXFS);"
                      " // AUD4_TXFS -- SD2_DATA1 (0x03BC)\n"),
                 call("\tx_mxc_iomux_v3_setup_pad(MX6DL_PAD_SD2_DAT3__AUDMUX_AUD4_TXC);"
                      " // AUD4_TXC -- SD2_DATA3 (0x03C0)\n"),
                 call("}\n\n"),
                 call("void setup_i2c1(){\n"),
                 call("\tx_mxc_iomux_v3_setup_pad(MX6DL_PAD_CSI0_DAT8__I2C1_SDA);"
                      " // I2C1_SDA -- CSI0_DATA08 (0x0398)\n"),
                 call("\tx_mxc_iomux_v3_setup_pad(MX6DL_PAD_CSI0_DAT9__I2C1_SCL);"
                      " // I2C1_SCL -- CSI0_DATA09 (0x039C)\n"),
                 call("}\n\n")
                 ]

        self.open.assert_called_once_with("out.c", "w")
        handle = self.open()
        handle.write.assert_has_calls(calls)

    def test_OutputInCorrectOrder(self):

        pads = {'audmux': {}, 'i2c1': {}}

        with patch('IoMux2Uboot.open', self.open, create=True):
                IoMux2Uboot.write_pad_dict("out.c", pads, {})

        calls = [call("void setup_audmux(){\n"),
                 call("}\n\n"),
                 call("void setup_i2c1(){\n"),
                 call("}\n\n")
                 ]

        self.open.assert_called_once_with("out.c", "w")
        handle = self.open()
        handle.write.assert_has_calls(calls)


class DebugTest(TestCase):
    """
    Test for debug dumpers
    """

    def setUp(self):
        """
        Setup mock and save debug settings
        """
        self.open = mock_open()
        self.save_debug = IoMux2Uboot

    def tearDown(self):
        """
        Restore debug settings between test cases
        """

        IoMux2Uboot.DEBUG = self.save_debug

    def test_when_debug_is_false_should_not_write_pindict(self):
        """
        Test that we don't write Pindict if debug is off
        """

        IoMux2Uboot.DEBUG = False

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_pin_dict({})

        self.assertFalse(self.open.called)

    def test_pin_dict_write_dict(self):
        """
        Test that we write PIN dict correctly
        """

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_pin_dict({2: {1: "BOB", 2: "BOLL"}, 1: {2: "JANE", 314: "PETE"}})

        self.open.assert_called_once_with("pinDict.dmp", "w")
        handle = self.open()

        calls = [call().write("1: {2: 'JANE', 314: 'PETE'}\n"), call.write("2: {1: 'BOB', 2: 'BOLL'}\n")]
        handle.write.assert_has_calls(calls)

    def test_when_debug_is_false_should_not_write_iomux(self):
        """
        Test that we don't write IOMUX dump if debug is off
        """

        IoMux2Uboot.DEBUG = False

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_iomux({})

        self.assertFalse(self.open.called)

    def test_write_iomux(self):
        """
        Test for writing iomux
        """
        iomux_dict = {'audmux': {
            '03BC': ['AUD6_TXFS', 'DI0_PIN03', '2'],
            '03C0': ['AUD6_RXD', 'DI0_PIN04', '2'],
            '03E4': ['AUD5_TXC', 'DISP0_DATA16', '3'],
            '03F0': ['AUD5_RXD', 'DISP0_DATA19', '3'],
        }}

        with patch('IoMux2Uboot.open', self.open, create=True):
            IoMux2Uboot.dump_iomux(iomux_dict)

        self.open.assert_called_once_with("iomux.dmp", "w")
        handle = self.open()

        calls = [
            call('Instance:   audmux, Address: @ 03E4, Name:             AUD5_TXC, Net:     DISP0_DATA16, Mode: 3\n'),
            call('Instance:   audmux, Address: @ 03BC, Name:            AUD6_TXFS, Net:        DI0_PIN03, Mode: 2\n')
        ]

        handle.write.assert_has_calls(calls)


class PinInfoFromPadTest(TestCase):
    """
    Tests for pin info from pads
    """

    def test_pin_info_from_pad(self):
        """
        See if we get correct pin info from the pad
        """

        pad_dict = {'audmux': {'03B4': ['AUD6_TXC', 'DI0_PIN15', '2']}}

        pin_dict = {
            "03B4":
                {
                    1: 'MX6DL_PAD_DI0_PIN15__LCDIF_ENABLE',
                    2: 'MX6DL_PAD_DI0_PIN15__AUDMUX_AUD6_TXC',
                    3: 'MX6DL_PAD_DI0_PIN15__MIPI_CORE_DPHY_TEST_OUT_29',
                }}

        pin_info = IoMux2Uboot.pin_info_from_pad(pad_dict, pin_dict, "audmux", '03B4')

        self.assertEquals(pin_info, ('AUD6_TXC -- DI0_PIN15', 'MX6DL_PAD_DI0_PIN15__AUDMUX_AUD6_TXC'))


class ArgParseTest(TestCase):

    def setUp(self):
        pass

    def test_with_no_args_just_exit(self):
        self.assertRaises(SystemExit, IoMux2Uboot.get_filenames, [])

    def test_with_help_arg_prints_msg_and_exit(self):
        self.assertRaises(SystemExit, IoMux2Uboot.get_filenames, ['-h'])

    def test_with_correct_args_returns_file_names(self):

        inp, out = IoMux2Uboot.get_filenames(['-i', 'bob', '-o', 'john'])
        self.assertEqual('bob', inp)
        self.assertEqual('john', out)

    def test_with_incorrect_args_exits_with_msg(self):
        self.assertRaises(SystemExit, IoMux2Uboot.get_filenames, ['-j', 'bob'])


class ChipTypeTest(TestCase):
    """
        Tests for chip type selection
    """

    def setUp(self):
        pass

    def test_correct_filename_for_dl(self):
        """
        Test to see if we get correct name for DL type of chips
        """

        fname = IoMux2Uboot.get_header_filename("DL")

        self.assertEquals(fname, "headers/mx6dl_pins.h")

    def test_correct_filename_for_sl(self):
        """
        Test to see if we get correct name for SL type of chips
        """

        fname = IoMux2Uboot.get_header_filename("SL")

        self.assertEquals(fname, "headers/mx6sl_pins.h")


class ComprehensiveInputTest(TestCase):
    """
        Comprehensive tests of readers and parsers
    """

    def test_read_iomux(self):
        """
        Test that we read IOMUX correctly
        """

        chip, pads, regs = IoMux2Uboot.process_iomux('samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml')
        self.assertEquals(chip, "i.MX6SDL")

        enet_regs = {'06B4': ['RGMII_TD2', 'RGMII_TD2', '1'],
                     '06B0': ['RGMII_TD1', 'RGMII_TD1', '1'],
                     '06A8': ['RGMII_RXC', 'RGMII_RXC', '1'],
                     '069C': ['RGMII_RD2', 'RGMII_RD2', '1'],
                     '06C0': ['RGMII_TXC', 'RGMII_TXC', '1'],
                     '06A4': ['RGMII_RX_CTL', 'RGMII_RX_CTL', '1'],
                     '06BC': ['RGMII_TX_CTL', 'RGMII_TX_CTL', '1'],
                     '06B8': ['RGMII_TD3', 'RGMII_TD3', '1'],
                     '06A0': ['RGMII_RD3', 'RGMII_RD3', '1'],
                     '05C0': ['ENET_TX_CLK', 'ENET_REF_CLK', '1'],
                     '0694': ['RGMII_RD0', 'RGMII_RD0', '1'],
                     '0634': ['ENET_MDC', 'KEY_COL2', '4'],
                     '0630': ['ENET_MDIO', 'KEY_COL1', '1'],
                     '0698': ['RGMII_RD1', 'RGMII_RD1', '1'],
                     '06AC': ['RGMII_TD0', 'RGMII_TD0', '1']}

        self.assertDictContainsSubset({'enet': enet_regs}, pads)
        self.assertDictContainsSubset({'020E06B4': '0001B030'}, regs)
        self.assertDictContainsSubset({'020E0874': '00000001'}, regs)

    def test_read_pins(self):
        """
        Test that we read pins correctly
        """

        pins = IoMux2Uboot.process_pins("iMX6DL")

        csi0_dat10 = {"0360": {0: 'MX6DL_PAD_CSI0_DAT10__IPU1_CSI0_D_10',
                               1: 'MX6DL_PAD_CSI0_DAT10__AUDMUX_AUD3_RXC',
                               2: 'MX6DL_PAD_CSI0_DAT10__ECSPI2_MISO',
                               3: 'MX6DL_PAD_CSI0_DAT10__UART1_RXD',
                               4: 'MX6DL_PAD_CSI0_DAT10__SDMA_DEBUG_PC_4',
                               5: 'MX6DL_PAD_CSI0_DAT10__GPIO_5_28',
                               6: 'MX6DL_PAD_CSI0_DAT10__MMDC_MMDC_DEBUG_33',
                               7: 'MX6DL_PAD_CSI0_DAT10__SIMBA_TRACE_7'}}

        self.assertDictContainsSubset(csi0_dat10, pins)


class ParserTest(TestCase):
    """
        Test for parser of IOMUX
        Examine the structure of MX6SDL Eval Board Rev A
    """

    def setUp(self):
        self.root = IoMux2Uboot.parse_iomux("samples/i.MX6SDL_Sabre_AI_RevA.IomuxDesign.xml")
        self.sig_enet_mdio = self.root.findall(".//SignalDesign[@Name='ENET_MDIO']")
        self.all_signals = self.root.findall(".//SignalDesign[@IsChecked='true']")

    def test_must_be_330_checked_signals(self):
        """
            Test file should have 330 checked signals
        """
        checked_signals = self.root.findall(".//SignalDesign[@IsChecked='true']")
        self.assertEqual(len(checked_signals), 330)

    def test_must_be_330_total_signals(self):
        """
            Test file should have 330 signals in total
        """

        self.assertEqual(len(self.all_signals), 330)

    def test_how_many_signals_are_not_sw_ctl_pads(self):
        """
            Check how many RT signals have no SW_PAD_CTL
        """

        routes = self.root.findall("./SignalDesign/Register")

        self.assertEquals(len(routes), 1079)

        no_pad_ctl = [x for x in routes if not 'SW_PAD_CTL_PAD' in x.get('Name')]
        self.assertEquals(len(no_pad_ctl), 813)

        no_mux_ctl = [x for x in no_pad_ctl if not 'SW_MUX_CTL_PAD' in x.get('Name')]
        self.assertEquals(len(no_mux_ctl), 600)

        no_ctl_grp = [x.get('Name') for x in no_mux_ctl if not 'SW_PAD_CTL_GRP' in x.get('Name')]
        self.assertEquals(len(no_ctl_grp), 46)
        #TODO: Find out what to do with missing signals

    def test_how_many_signals_have_alt_routing(self):
        """
            Check how many rt signals have no routing
        """

        routes = self.root.findall("./SignalDesign/Routing")

        self.assertEquals(len(routes), 330)

        # There should be 117 signal w/o routing
        no_alt = [x.get('padNet') for x in routes if not "ALT" in x.get("mode")]
        self.assertEquals(len(no_alt), 117)

        # There should be 111 signal w/o routing that belong to DRAM
        no_alt_wo_dram = [x for x in no_alt if not 'DRAM' in x]
        self.assertEquals(len(no_alt_wo_dram), 6)

        # There should be 6 signal w/o routing that belong to JTAG
        no_alt_wo_jtag = [x for x in no_alt_wo_dram if not 'JTAG' in x]
        self.assertEquals(len(no_alt_wo_jtag), 0)

        # There should be 0 signal w/o routing that belong neither to DRAM nor JTAG

