/*
 * Copyright (C) 2012 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Auto Generate file, please don't edit it
 *
 */

#ifndef __MACH_IOMUX_MX6DL_H__
#define __MACH_IOMUX_MX6DL_H__

#include <asm/arch/iomux-v3.h>

#define MX6DL_HIGH_DRV		PAD_CTL_DSE_120ohm
#define MX6DL_DISP_PAD_CLT	MX6DL_HIGH_DRV

#define MX6DL_CCM_CLK0_PAD_CTRL (PAD_CTL_PKE | PAD_CTL_PUE |		\
		PAD_CTL_PUS_47K_UP  | PAD_CTL_SPEED_LOW |		\
		PAD_CTL_DSE_80ohm   | PAD_CTL_SRE_FAST  | PAD_CTL_HYS)

#define MX6DL_MLB150_PAD_CTRL (PAD_CTL_SPEED_LOW |			\
		PAD_CTL_DSE_40ohm   | PAD_CTL_SRE_FAST)			\

#define MX6DL_UART_PAD_CTRL (PAD_CTL_PKE | PAD_CTL_PUE  |		\
		PAD_CTL_PUS_100K_UP | PAD_CTL_SPEED_MED |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_SRE_FAST  | PAD_CTL_HYS)

#define MX6DL_USDHC_PAD_CTRL (PAD_CTL_PKE | PAD_CTL_PUE |		\
		PAD_CTL_PUS_47K_UP  | PAD_CTL_SPEED_LOW |		\
		PAD_CTL_DSE_80ohm   | PAD_CTL_SRE_FAST  | PAD_CTL_HYS)

#define MX6DL_USDHC_PAD_CTRL_100MHZ (PAD_CTL_PKE | PAD_CTL_PUE |	\
		PAD_CTL_PUS_47K_UP  | PAD_CTL_SPEED_MED |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_SRE_FAST  | PAD_CTL_HYS)

#define MX6DL_USDHC_PAD_CTRL_200MHZ (PAD_CTL_PKE | PAD_CTL_PUE |	\
		PAD_CTL_PUS_47K_UP  | PAD_CTL_SPEED_HIGH |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_SRE_FAST   | PAD_CTL_HYS)

#define MX6DL_ENET_PAD_CTRL (PAD_CTL_PKE | PAD_CTL_PUE  |		\
		PAD_CTL_PUS_100K_UP | PAD_CTL_SPEED_MED |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_HYS)


#define MX6DL_I2C_PAD_CTRL (PAD_CTL_PKE | PAD_CTL_PUE   |		\
		PAD_CTL_PUS_100K_UP | PAD_CTL_SPEED_MED |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_SRE_FAST  |		\
		PAD_CTL_HYS         | PAD_CTL_ODE)

#define MX6DL_ESAI_PAD_CTRL (PAD_CTL_PKE | PAD_CTL_PUE  |		\
		PAD_CTL_PUS_100K_UP | PAD_CTL_DSE_40ohm | PAD_CTL_HYS)

#define MX6DL_USB_HSIC_PAD_CTRL	(PAD_CTL_PKE | PAD_CTL_PUE |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_HYS)

#define MX6DL_ECSPI_PAD_CTRL (PAD_CTL_SRE_FAST | PAD_CTL_SPEED_MED |	\
		PAD_CTL_DSE_40ohm   | PAD_CTL_HYS)

#define MX6DL_GPMI_PAD_CTRL0 (PAD_CTL_PKE | PAD_CTL_PUE | PAD_CTL_PUS_100K_UP)
#define MX6DL_GPMI_PAD_CTRL1 (PAD_CTL_DSE_40ohm | PAD_CTL_SPEED_MED | PAD_CTL_SRE_FAST)
#define MX6DL_GPMI_PAD_CTRL2 (MX6DL_GPMI_PAD_CTRL0 | MX6DL_GPMI_PAD_CTRL1)
#define MX6DL_SPDIF_OUT_PAD_CTRL (PAD_CTL_DSE_120ohm | PAD_CTL_SRE_FAST)

#define MX6DL_PAD_CSI0_DAT10__IPU1_CSI0_D_10                                   \
		IOMUX_PAD(0x0360, 0x004C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__AUDMUX_AUD3_RXC                                  \
		IOMUX_PAD(0x0360, 0x004C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__ECSPI2_MISO                                      \
		IOMUX_PAD(0x0360, 0x004C, 2, 0x07F8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__UART1_TXD                                        \
		IOMUX_PAD(0x0360, 0x004C, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__UART1_RXD                                        \
		IOMUX_PAD(0x0360, 0x004C, 3, 0x08FC, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__SDMA_DEBUG_PC_4                                  \
		IOMUX_PAD(0x0360, 0x004C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__GPIO_5_28                                        \
		IOMUX_PAD(0x0360, 0x004C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__MMDC_MMDC_DEBUG_33                               \
		IOMUX_PAD(0x0360, 0x004C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT10__SIMBA_TRACE_7                                    \
		IOMUX_PAD(0x0360, 0x004C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT11__IPU1_CSI0_D_11                                   \
		IOMUX_PAD(0x0364, 0x0050, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__AUDMUX_AUD3_RXFS                                 \
		IOMUX_PAD(0x0364, 0x0050, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__ECSPI2_SS0                                       \
		IOMUX_PAD(0x0364, 0x0050, 2, 0x0800, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__UART1_TXD                                        \
		IOMUX_PAD(0x0364, 0x0050, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__UART1_RXD                                        \
		IOMUX_PAD(0x0364, 0x0050, 3, 0x08FC, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__SDMA_DEBUG_PC_5                                  \
		IOMUX_PAD(0x0364, 0x0050, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__GPIO_5_29                                        \
		IOMUX_PAD(0x0364, 0x0050, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__MMDC_MMDC_DEBUG_34                               \
		IOMUX_PAD(0x0364, 0x0050, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT11__SIMBA_TRACE_8                                    \
		IOMUX_PAD(0x0364, 0x0050, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT12__IPU1_CSI0_D_12                                   \
		IOMUX_PAD(0x0368, 0x0054, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__WEIM_WEIM_D_8                                    \
		IOMUX_PAD(0x0368, 0x0054, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__PCIE_CTRL_DIAG_STATUS_BUS_MUX_16                 \
		IOMUX_PAD(0x0368, 0x0054, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__UART4_TXD                                        \
		IOMUX_PAD(0x0368, 0x0054, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__UART4_RXD                                        \
		IOMUX_PAD(0x0368, 0x0054, 3, 0x0914, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__SDMA_DEBUG_PC_6                                  \
		IOMUX_PAD(0x0368, 0x0054, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__GPIO_5_30                                        \
		IOMUX_PAD(0x0368, 0x0054, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__MMDC_MMDC_DEBUG_35                               \
		IOMUX_PAD(0x0368, 0x0054, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT12__SIMBA_TRACE_9                                    \
		IOMUX_PAD(0x0368, 0x0054, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT13__IPU1_CSI0_D_13                                   \
		IOMUX_PAD(0x036C, 0x0058, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__WEIM_WEIM_D_9                                    \
		IOMUX_PAD(0x036C, 0x0058, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__PCIE_CTRL_DIAG_STATUS_BUS_MUX_17                 \
		IOMUX_PAD(0x036C, 0x0058, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__UART4_TXD                                        \
		IOMUX_PAD(0x036C, 0x0058, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__UART4_RXD                                        \
		IOMUX_PAD(0x036C, 0x0058, 3, 0x0914, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__SDMA_DEBUG_PC_7                                  \
		IOMUX_PAD(0x036C, 0x0058, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__GPIO_5_31                                        \
		IOMUX_PAD(0x036C, 0x0058, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__MMDC_MMDC_DEBUG_36                               \
		IOMUX_PAD(0x036C, 0x0058, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT13__SIMBA_TRACE_10                                   \
		IOMUX_PAD(0x036C, 0x0058, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT14__IPU1_CSI0_D_14                                   \
		IOMUX_PAD(0x0370, 0x005C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__WEIM_WEIM_D_10                                   \
		IOMUX_PAD(0x0370, 0x005C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__PCIE_CTRL_DIAG_STATUS_BUS_MUX_18                 \
		IOMUX_PAD(0x0370, 0x005C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__UART5_TXD                                        \
		IOMUX_PAD(0x0370, 0x005C, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__UART5_RXD                                        \
		IOMUX_PAD(0x0370, 0x005C, 3, 0x091C, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__SDMA_DEBUG_PC_8                                  \
		IOMUX_PAD(0x0370, 0x005C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__GPIO_6_0                                         \
		IOMUX_PAD(0x0370, 0x005C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__MMDC_MMDC_DEBUG_37                               \
		IOMUX_PAD(0x0370, 0x005C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT14__SIMBA_TRACE_11                                   \
		IOMUX_PAD(0x0370, 0x005C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT15__IPU1_CSI0_D_15                                   \
		IOMUX_PAD(0x0374, 0x0060, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__WEIM_WEIM_D_11                                   \
		IOMUX_PAD(0x0374, 0x0060, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__PCIE_CTRL_DIAG_STATUS_BUS_MUX_19                 \
		IOMUX_PAD(0x0374, 0x0060, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__UART5_TXD                                        \
		IOMUX_PAD(0x0374, 0x0060, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__UART5_RXD                                        \
		IOMUX_PAD(0x0374, 0x0060, 3, 0x091C, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__SDMA_DEBUG_PC_9                                  \
		IOMUX_PAD(0x0374, 0x0060, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__GPIO_6_1                                         \
		IOMUX_PAD(0x0374, 0x0060, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__MMDC_MMDC_DEBUG_38                               \
		IOMUX_PAD(0x0374, 0x0060, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT15__SIMBA_TRACE_12                                   \
		IOMUX_PAD(0x0374, 0x0060, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT16__IPU1_CSI0_D_16                                   \
		IOMUX_PAD(0x0378, 0x0064, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__WEIM_WEIM_D_12                                   \
		IOMUX_PAD(0x0378, 0x0064, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__PCIE_CTRL_DIAG_STATUS_BUS_MUX_20                 \
		IOMUX_PAD(0x0378, 0x0064, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__UART4_CTS                                        \
		IOMUX_PAD(0x0378, 0x0064, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__UART4_RTS                                        \
		IOMUX_PAD(0x0378, 0x0064, 3, 0x0910, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__SDMA_DEBUG_PC_10                                 \
		IOMUX_PAD(0x0378, 0x0064, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__GPIO_6_2                                         \
		IOMUX_PAD(0x0378, 0x0064, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__MMDC_MMDC_DEBUG_39                               \
		IOMUX_PAD(0x0378, 0x0064, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT16__SIMBA_TRACE_13                                   \
		IOMUX_PAD(0x0378, 0x0064, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT17__IPU1_CSI0_D_17                                   \
		IOMUX_PAD(0x037C, 0x0068, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__WEIM_WEIM_D_13                                   \
		IOMUX_PAD(0x037C, 0x0068, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__PCIE_CTRL_DIAG_STATUS_BUS_MUX_21                 \
		IOMUX_PAD(0x037C, 0x0068, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__UART4_CTS                                        \
		IOMUX_PAD(0x037C, 0x0068, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__UART4_RTS                                       \
		IOMUX_PAD(0x037C, 0x0068, 3, 0x0910, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__SDMA_DEBUG_PC_11                                 \
		IOMUX_PAD(0x037C, 0x0068, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__GPIO_6_3                                         \
		IOMUX_PAD(0x037C, 0x0068, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__MMDC_MMDC_DEBUG_40                               \
		IOMUX_PAD(0x037C, 0x0068, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT17__SIMBA_TRACE_14                                   \
		IOMUX_PAD(0x037C, 0x0068, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT18__IPU1_CSI0_D_18                                   \
		IOMUX_PAD(0x0380, 0x006C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__WEIM_WEIM_D_14                                   \
		IOMUX_PAD(0x0380, 0x006C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__PCIE_CTRL_DIAG_STATUS_BUS_MUX_22                 \
		IOMUX_PAD(0x0380, 0x006C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__UART5_CTS                                        \
		IOMUX_PAD(0x0380, 0x006C, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__UART5_RTS                                        \
		IOMUX_PAD(0x0380, 0x006C, 3, 0x0918, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__SDMA_DEBUG_PC_12                                 \
		IOMUX_PAD(0x0380, 0x006C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__GPIO_6_4                                         \
		IOMUX_PAD(0x0380, 0x006C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__MMDC_MMDC_DEBUG_41                               \
		IOMUX_PAD(0x0380, 0x006C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT18__SIMBA_TRACE_15                                   \
		IOMUX_PAD(0x0380, 0x006C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT19__IPU1_CSI0_D_19                                   \
		IOMUX_PAD(0x0384, 0x0070, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__WEIM_WEIM_D_15                                   \
		IOMUX_PAD(0x0384, 0x0070, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__PCIE_CTRL_DIAG_STATUS_BUS_MUX_23                 \
		IOMUX_PAD(0x0384, 0x0070, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__UART5_CTS                                        \
		IOMUX_PAD(0x0384, 0x0070, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__UART5_RTS                                       \
		IOMUX_PAD(0x0384, 0x0070, 3, 0x0918, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__SDMA_DEBUG_PC_13                                 \
		IOMUX_PAD(0x0384, 0x0070, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__GPIO_6_5                                         \
		IOMUX_PAD(0x0384, 0x0070, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__MMDC_MMDC_DEBUG_42                               \
		IOMUX_PAD(0x0384, 0x0070, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT19__ANATOP_ANATOP_TESTO_9                            \
		IOMUX_PAD(0x0384, 0x0070, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT4__IPU1_CSI0_D_4                                     \
		IOMUX_PAD(0x0388, 0x0074, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__WEIM_WEIM_D_2                                     \
		IOMUX_PAD(0x0388, 0x0074, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__ECSPI1_SCLK                                       \
		IOMUX_PAD(0x0388, 0x0074, 2, 0x07D8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__KPP_COL_5                                         \
		IOMUX_PAD(0x0388, 0x0074, 3, 0x08C0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__AUDMUX_AUD3_TXC                                   \
		IOMUX_PAD(0x0388, 0x0074, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__GPIO_5_22                                         \
		IOMUX_PAD(0x0388, 0x0074, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__MMDC_MMDC_DEBUG_43                                \
		IOMUX_PAD(0x0388, 0x0074, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT4__SIMBA_TRACE_1                                     \
		IOMUX_PAD(0x0388, 0x0074, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT5__IPU1_CSI0_D_5                                     \
		IOMUX_PAD(0x038C, 0x0078, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__WEIM_WEIM_D_3                                     \
		IOMUX_PAD(0x038C, 0x0078, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__ECSPI1_MOSI                                       \
		IOMUX_PAD(0x038C, 0x0078, 2, 0x07E0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__KPP_ROW_5                                         \
		IOMUX_PAD(0x038C, 0x0078, 3, 0x08CC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__AUDMUX_AUD3_TXD                                   \
		IOMUX_PAD(0x038C, 0x0078, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__GPIO_5_23                                         \
		IOMUX_PAD(0x038C, 0x0078, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__MMDC_MMDC_DEBUG_44                                \
		IOMUX_PAD(0x038C, 0x0078, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT5__SIMBA_TRACE_2                                     \
		IOMUX_PAD(0x038C, 0x0078, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT6__IPU1_CSI0_D_6                                     \
		IOMUX_PAD(0x0390, 0x007C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__WEIM_WEIM_D_4                                     \
		IOMUX_PAD(0x0390, 0x007C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__ECSPI1_MISO                                       \
		IOMUX_PAD(0x0390, 0x007C, 2, 0x07DC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__KPP_COL_6                                         \
		IOMUX_PAD(0x0390, 0x007C, 3, 0x08C4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__AUDMUX_AUD3_TXFS                                  \
		IOMUX_PAD(0x0390, 0x007C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__GPIO_5_24                                         \
		IOMUX_PAD(0x0390, 0x007C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__MMDC_MMDC_DEBUG_45                                \
		IOMUX_PAD(0x0390, 0x007C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT6__SIMBA_TRACE_3                                     \
		IOMUX_PAD(0x0390, 0x007C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT7__IPU1_CSI0_D_7                                     \
		IOMUX_PAD(0x0394, 0x0080, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__WEIM_WEIM_D_5                                     \
		IOMUX_PAD(0x0394, 0x0080, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__ECSPI1_SS0                                        \
		IOMUX_PAD(0x0394, 0x0080, 2, 0x07E4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__KPP_ROW_6                                         \
		IOMUX_PAD(0x0394, 0x0080, 3, 0x08D0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__AUDMUX_AUD3_RXD                                   \
		IOMUX_PAD(0x0394, 0x0080, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__GPIO_5_25                                         \
		IOMUX_PAD(0x0394, 0x0080, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__MMDC_MMDC_DEBUG_46                                \
		IOMUX_PAD(0x0394, 0x0080, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT7__SIMBA_TRACE_4                                     \
		IOMUX_PAD(0x0394, 0x0080, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT8__IPU1_CSI0_D_8                                     \
		IOMUX_PAD(0x0398, 0x0084, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__WEIM_WEIM_D_6                                     \
		IOMUX_PAD(0x0398, 0x0084, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__ECSPI2_SCLK                                       \
		IOMUX_PAD(0x0398, 0x0084, 2, 0x07F4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__KPP_COL_7                                         \
		IOMUX_PAD(0x0398, 0x0084, 3, 0x08C8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__I2C1_SDA                                          \
		IOMUX_PAD(0x0398, 0x0084, 4 | IOMUX_CONFIG_SION, 0x086C, 0, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__GPIO_5_26                                         \
		IOMUX_PAD(0x0398, 0x0084, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__MMDC_MMDC_DEBUG_47                                \
		IOMUX_PAD(0x0398, 0x0084, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT8__SIMBA_TRACE_5                                     \
		IOMUX_PAD(0x0398, 0x0084, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DAT9__IPU1_CSI0_D_9                                     \
		IOMUX_PAD(0x039C, 0x0088, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__WEIM_WEIM_D_7                                     \
		IOMUX_PAD(0x039C, 0x0088, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__ECSPI2_MOSI                                       \
		IOMUX_PAD(0x039C, 0x0088, 2, 0x07FC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__KPP_ROW_7                                         \
		IOMUX_PAD(0x039C, 0x0088, 3, 0x08D4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__I2C1_SCL                                          \
		IOMUX_PAD(0x039C, 0x0088, 4 | IOMUX_CONFIG_SION, 0x0868, 0, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__GPIO_5_27                                         \
		IOMUX_PAD(0x039C, 0x0088, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__MMDC_MMDC_DEBUG_48                                \
		IOMUX_PAD(0x039C, 0x0088, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DAT9__SIMBA_TRACE_6                                     \
		IOMUX_PAD(0x039C, 0x0088, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_DATA_EN__IPU1_CSI0_DATA_EN                              \
		IOMUX_PAD(0x03A0, 0x008C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DATA_EN__WEIM_WEIM_D_0                                  \
		IOMUX_PAD(0x03A0, 0x008C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DATA_EN__PCIE_CTRL_DIAG_STATUS_BUS_MUX_14               \
		IOMUX_PAD(0x03A0, 0x008C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DATA_EN__SDMA_DEBUG_PC_2                                \
		IOMUX_PAD(0x03A0, 0x008C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DATA_EN__GPIO_5_20                                      \
		IOMUX_PAD(0x03A0, 0x008C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DATA_EN__MMDC_MMDC_DEBUG_31                             \
		IOMUX_PAD(0x03A0, 0x008C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_DATA_EN__SIMBA_TRCLK                                    \
		IOMUX_PAD(0x03A0, 0x008C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_MCLK__IPU1_CSI0_HSYNC                                   \
		IOMUX_PAD(0x03A4, 0x0090, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_MCLK__PCIE_CTRL_DIAG_STATUS_BUS_MUX_13                  \
		IOMUX_PAD(0x03A4, 0x0090, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_MCLK__CCM_CLKO                                          \
		IOMUX_PAD(0x03A4, 0x0090, 3, 0x0000, 0, MX6DL_CCM_CLK0_PAD_CTRL)
#define MX6DL_PAD_CSI0_MCLK__SDMA_DEBUG_PC_1                                   \
		IOMUX_PAD(0x03A4, 0x0090, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_MCLK__GPIO_5_19                                         \
		IOMUX_PAD(0x03A4, 0x0090, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_MCLK__MMDC_MMDC_DEBUG_30                                \
		IOMUX_PAD(0x03A4, 0x0090, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_MCLK__SIMBA_TRCTL                                       \
		IOMUX_PAD(0x03A4, 0x0090, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_PIXCLK__IPU1_CSI0_PIXCLK                                \
		IOMUX_PAD(0x03A8, 0x0094, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_PIXCLK__PCIE_CTRL_DIAG_STATUS_BUS_MUX_12                \
		IOMUX_PAD(0x03A8, 0x0094, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_PIXCLK__SDMA_DEBUG_PC_0                                 \
		IOMUX_PAD(0x03A8, 0x0094, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_PIXCLK__GPIO_5_18                                       \
		IOMUX_PAD(0x03A8, 0x0094, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_PIXCLK__MMDC_MMDC_DEBUG_29                              \
		IOMUX_PAD(0x03A8, 0x0094, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_PIXCLK__SIMBA_EVENTO                                    \
		IOMUX_PAD(0x03A8, 0x0094, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_CSI0_VSYNC__IPU1_CSI0_VSYNC                                  \
		IOMUX_PAD(0x03AC, 0x0098, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_VSYNC__WEIM_WEIM_D_1                                    \
		IOMUX_PAD(0x03AC, 0x0098, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_VSYNC__PCIE_CTRL_DIAG_STATUS_BUS_MUX_15                 \
		IOMUX_PAD(0x03AC, 0x0098, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_VSYNC__SDMA_DEBUG_PC_3                                  \
		IOMUX_PAD(0x03AC, 0x0098, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_VSYNC__GPIO_5_21                                        \
		IOMUX_PAD(0x03AC, 0x0098, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_VSYNC__MMDC_MMDC_DEBUG_32                               \
		IOMUX_PAD(0x03AC, 0x0098, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_CSI0_VSYNC__SIMBA_TRACE_0                                    \
		IOMUX_PAD(0x03AC, 0x0098, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DI0_DISP_CLK__IPU1_DI0_DISP_CLK                              \
		IOMUX_PAD(0x03B0, 0x009C, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DI0_DISP_CLK__LCDIF_CLK                                      \
		IOMUX_PAD(0x03B0, 0x009C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_DISP_CLK__MIPI_CORE_DPHY_TEST_OUT_28                     \
		IOMUX_PAD(0x03B0, 0x009C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_DISP_CLK__SDMA_DEBUG_CORE_STATE_0                        \
		IOMUX_PAD(0x03B0, 0x009C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_DISP_CLK__GPIO_4_16                                      \
		IOMUX_PAD(0x03B0, 0x009C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_DISP_CLK__MMDC_MMDC_DEBUG_0                              \
		IOMUX_PAD(0x03B0, 0x009C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_DISP_CLK__TPSMP_HDATA_DIR                                \
		IOMUX_PAD(0x03B0, 0x009C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_DISP_CLK__LCDIF_WR_RWN                                   \
		IOMUX_PAD(0x03B0, 0x009C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DI0_PIN15__IPU1_DI0_PIN15                                    \
		IOMUX_PAD(0x03B4, 0x00A0, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DI0_PIN15__LCDIF_ENABLE                                      \
		IOMUX_PAD(0x03B4, 0x00A0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__AUDMUX_AUD6_TXC                                   \
		IOMUX_PAD(0x03B4, 0x00A0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__MIPI_CORE_DPHY_TEST_OUT_29                        \
		IOMUX_PAD(0x03B4, 0x00A0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__SDMA_DEBUG_CORE_STATE_1                           \
		IOMUX_PAD(0x03B4, 0x00A0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__GPIO_4_17                                         \
		IOMUX_PAD(0x03B4, 0x00A0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__MMDC_MMDC_DEBUG_1                                 \
		IOMUX_PAD(0x03B4, 0x00A0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__PL301_SIM_MX6DL_PER1_HSIZE_0                      \
		IOMUX_PAD(0x03B4, 0x00A0, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN15__LCDIF_RD_E                                        \
		IOMUX_PAD(0x03B4, 0x00A0, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DI0_PIN2__IPU1_DI0_PIN2                                      \
		IOMUX_PAD(0x03B8, 0x00A4, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DI0_PIN2__LCDIF_HSYNC                                        \
		IOMUX_PAD(0x03B8, 0x00A4, 1, 0x08D8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__AUDMUX_AUD6_TXD                                    \
		IOMUX_PAD(0x03B8, 0x00A4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__MIPI_CORE_DPHY_TEST_OUT_30                         \
		IOMUX_PAD(0x03B8, 0x00A4, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__SDMA_DEBUG_CORE_STATE_2                            \
		IOMUX_PAD(0x03B8, 0x00A4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__GPIO_4_18                                          \
		IOMUX_PAD(0x03B8, 0x00A4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__MMDC_MMDC_DEBUG_2                                  \
		IOMUX_PAD(0x03B8, 0x00A4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__PL301_SIM_MX6DL_PER1_HADDR_9                       \
		IOMUX_PAD(0x03B8, 0x00A4, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN2__LCDIF_RS                                           \
		IOMUX_PAD(0x03B8, 0x00A4, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DI0_PIN3__IPU1_DI0_PIN3                                      \
		IOMUX_PAD(0x03BC, 0x00A8, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DI0_PIN3__LCDIF_VSYNC                                        \
		IOMUX_PAD(0x03BC, 0x00A8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__AUDMUX_AUD6_TXFS                                   \
		IOMUX_PAD(0x03BC, 0x00A8, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__MIPI_CORE_DPHY_TEST_OUT_31                         \
		IOMUX_PAD(0x03BC, 0x00A8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__SDMA_DEBUG_CORE_STATE_3                            \
		IOMUX_PAD(0x03BC, 0x00A8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__GPIO_4_19                                          \
		IOMUX_PAD(0x03BC, 0x00A8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__MMDC_MMDC_DEBUG_3                                  \
		IOMUX_PAD(0x03BC, 0x00A8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__PL301_SIM_MX6DL_PER1_HADDR_10                      \
		IOMUX_PAD(0x03BC, 0x00A8, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN3__LCDIF_CS                                           \
		IOMUX_PAD(0x03BC, 0x00A8, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DI0_PIN4__IPU1_DI0_PIN4                                      \
		IOMUX_PAD(0x03C0, 0x00AC, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DI0_PIN4__LCDIF_BUSY                                         \
		IOMUX_PAD(0x03C0, 0x00AC, 1, 0x08D8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__AUDMUX_AUD6_RXD                                    \
		IOMUX_PAD(0x03C0, 0x00AC, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__USDHC1_WP                                          \
		IOMUX_PAD(0x03C0, 0x00AC, 3, 0x092C, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__SDMA_DEBUG_YIELD                                   \
		IOMUX_PAD(0x03C0, 0x00AC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__GPIO_4_20                                          \
		IOMUX_PAD(0x03C0, 0x00AC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__MMDC_MMDC_DEBUG_4                                  \
		IOMUX_PAD(0x03C0, 0x00AC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__PL301_SIM_MX6DL_PER1_HADDR_11                      \
		IOMUX_PAD(0x03C0, 0x00AC, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DI0_PIN4__LCDIF_RESET                                        \
		IOMUX_PAD(0x03C0, 0x00AC, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT0__IPU1_DISP0_DAT_0                                 \
		IOMUX_PAD(0x03C4, 0x00B0, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT0__LCDIF_DAT_0                                      \
		IOMUX_PAD(0x03C4, 0x00B0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT0__ECSPI3_SCLK                                      \
		IOMUX_PAD(0x03C4, 0x00B0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT0__USDHC1_USDHC_DEBUG_0                             \
		IOMUX_PAD(0x03C4, 0x00B0, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT0__SDMA_DEBUG_CORE_RUN                              \
		IOMUX_PAD(0x03C4, 0x00B0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT0__GPIO_4_21                                        \
		IOMUX_PAD(0x03C4, 0x00B0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT0__MMDC_MMDC_DEBUG_5                                \
		IOMUX_PAD(0x03C4, 0x00B0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT0__PL301_SIM_MX6DL_PER1_HSIZE_1                     \
		IOMUX_PAD(0x03C4, 0x00B0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT1__IPU1_DISP0_DAT_1                                 \
		IOMUX_PAD(0x03C8, 0x00B4, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT1__LCDIF_DAT_1                                      \
		IOMUX_PAD(0x03C8, 0x00B4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT1__ECSPI3_MOSI                                      \
		IOMUX_PAD(0x03C8, 0x00B4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT1__USDHC1_USDHC_DEBUG_1                             \
		IOMUX_PAD(0x03C8, 0x00B4, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT1__SDMA_DEBUG_EVENT_CHANNEL_SEL                     \
		IOMUX_PAD(0x03C8, 0x00B4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT1__GPIO_4_22                                        \
		IOMUX_PAD(0x03C8, 0x00B4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT1__MMDC_MMDC_DEBUG_6                                \
		IOMUX_PAD(0x03C8, 0x00B4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT1__PL301_SIM_MX6DL_PER1_HADDR_12                    \
		IOMUX_PAD(0x03C8, 0x00B4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT10__IPU1_DISP0_DAT_10                               \
		IOMUX_PAD(0x03CC, 0x00B8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT10__LCDIF_DAT_10                                    \
		IOMUX_PAD(0x03CC, 0x00B8, 1, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT10__USDHC1_USDHC_DEBUG_6                            \
		IOMUX_PAD(0x03CC, 0x00B8, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT10__SDMA_DEBUG_EVENT_CHANNEL_3                      \
		IOMUX_PAD(0x03CC, 0x00B8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT10__GPIO_4_31                                       \
		IOMUX_PAD(0x03CC, 0x00B8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT10__MMDC_MMDC_DEBUG_15                              \
		IOMUX_PAD(0x03CC, 0x00B8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT10__PL301_SIM_MX6DL_PER1_HADDR_21                   \
		IOMUX_PAD(0x03CC, 0x00B8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT11__IPU1_DISP0_DAT_11                               \
		IOMUX_PAD(0x03D0, 0x00BC, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT11__LCDIF_DAT_11                                    \
		IOMUX_PAD(0x03D0, 0x00BC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT11__USDHC1_USDHC_DEBUG_7                            \
		IOMUX_PAD(0x03D0, 0x00BC, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT11__SDMA_DEBUG_EVENT_CHANNEL_4                      \
		IOMUX_PAD(0x03D0, 0x00BC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT11__GPIO_5_5                                        \
		IOMUX_PAD(0x03D0, 0x00BC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT11__MMDC_MMDC_DEBUG_16                              \
		IOMUX_PAD(0x03D0, 0x00BC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT11__PL301_SIM_MX6DL_PER1_HADDR_22                   \
		IOMUX_PAD(0x03D0, 0x00BC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT12__IPU1_DISP0_DAT_12                               \
		IOMUX_PAD(0x03D4, 0x00C0, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT12__LCDIF_DAT_12                                    \
		IOMUX_PAD(0x03D4, 0x00C0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT12__SDMA_DEBUG_EVENT_CHANNEL_5                      \
		IOMUX_PAD(0x03D4, 0x00C0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT12__GPIO_5_6                                        \
		IOMUX_PAD(0x03D4, 0x00C0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT12__MMDC_MMDC_DEBUG_17                              \
		IOMUX_PAD(0x03D4, 0x00C0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT12__PL301_SIM_MX6DL_PER1_HADDR_23                   \
		IOMUX_PAD(0x03D4, 0x00C0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT13__IPU1_DISP0_DAT_13                               \
		IOMUX_PAD(0x03D8, 0x00C4, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT13__LCDIF_DAT_13                                    \
		IOMUX_PAD(0x03D8, 0x00C4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT13__AUDMUX_AUD5_RXFS                                \
		IOMUX_PAD(0x03D8, 0x00C4, 3, 0x07BC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT13__SDMA_DEBUG_EVT_CHN_LINES_0                      \
		IOMUX_PAD(0x03D8, 0x00C4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT13__GPIO_5_7                                        \
		IOMUX_PAD(0x03D8, 0x00C4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT13__MMDC_MMDC_DEBUG_18                              \
		IOMUX_PAD(0x03D8, 0x00C4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT13__PL301_SIM_MX6DL_PER1_HADDR_24                   \
		IOMUX_PAD(0x03D8, 0x00C4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT14__IPU1_DISP0_DAT_14                               \
		IOMUX_PAD(0x03DC, 0x00C8, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT14__LCDIF_DAT_14                                    \
		IOMUX_PAD(0x03DC, 0x00C8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT14__AUDMUX_AUD5_RXC                                 \
		IOMUX_PAD(0x03DC, 0x00C8, 3, 0x07B8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT14__SDMA_DEBUG_EVT_CHN_LINES_1                      \
		IOMUX_PAD(0x03DC, 0x00C8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT14__GPIO_5_8                                        \
		IOMUX_PAD(0x03DC, 0x00C8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT14__MMDC_MMDC_DEBUG_19                              \
		IOMUX_PAD(0x03DC, 0x00C8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT14__PL301_SIM_MX6DL_PER1_HSIZE_2                    \
		IOMUX_PAD(0x03DC, 0x00C8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT15__IPU1_DISP0_DAT_15                               \
		IOMUX_PAD(0x03E0, 0x00CC, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT15__LCDIF_DAT_15                                    \
		IOMUX_PAD(0x03E0, 0x00CC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT15__ECSPI1_SS1                                      \
		IOMUX_PAD(0x03E0, 0x00CC, 2, 0x07E8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT15__ECSPI2_SS1                                      \
		IOMUX_PAD(0x03E0, 0x00CC, 3, 0x0804, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT15__SDMA_DEBUG_EVT_CHN_LINES_2                      \
		IOMUX_PAD(0x03E0, 0x00CC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT15__GPIO_5_9                                        \
		IOMUX_PAD(0x03E0, 0x00CC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT15__MMDC_MMDC_DEBUG_20                              \
		IOMUX_PAD(0x03E0, 0x00CC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT15__PL301_SIM_MX6DL_PER1_HADDR_25                   \
		IOMUX_PAD(0x03E0, 0x00CC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT16__IPU1_DISP0_DAT_16                               \
		IOMUX_PAD(0x03E4, 0x00D0, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT16__LCDIF_DAT_16                                    \
		IOMUX_PAD(0x03E4, 0x00D0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT16__ECSPI2_MOSI                                     \
		IOMUX_PAD(0x03E4, 0x00D0, 2, 0x07FC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT16__AUDMUX_AUD5_TXC                                 \
		IOMUX_PAD(0x03E4, 0x00D0, 3, 0x07C0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT16__SDMA_SDMA_EXT_EVENT_0                           \
		IOMUX_PAD(0x03E4, 0x00D0, 4, 0x08E8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT16__GPIO_5_10                                       \
		IOMUX_PAD(0x03E4, 0x00D0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT16__MMDC_MMDC_DEBUG_21                              \
		IOMUX_PAD(0x03E4, 0x00D0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT16__PL301_SIM_MX6DL_PER1_HADDR_26                   \
		IOMUX_PAD(0x03E4, 0x00D0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT17__IPU1_DISP0_DAT_17                               \
		IOMUX_PAD(0x03E8, 0x00D4, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT17__LCDIF_DAT_17                                    \
		IOMUX_PAD(0x03E8, 0x00D4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT17__ECSPI2_MISO                                     \
		IOMUX_PAD(0x03E8, 0x00D4, 2, 0x07F8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT17__AUDMUX_AUD5_TXD                                 \
		IOMUX_PAD(0x03E8, 0x00D4, 3, 0x07B4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT17__SDMA_SDMA_EXT_EVENT_1                           \
		IOMUX_PAD(0x03E8, 0x00D4, 4, 0x08EC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT17__GPIO_5_11                                       \
		IOMUX_PAD(0x03E8, 0x00D4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT17__MMDC_MMDC_DEBUG_22                              \
		IOMUX_PAD(0x03E8, 0x00D4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT17__PL301_SIM_MX6DL_PER1_HADDR_27                   \
		IOMUX_PAD(0x03E8, 0x00D4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT18__IPU1_DISP0_DAT_18                               \
		IOMUX_PAD(0x03EC, 0x00D8, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT18__LCDIF_DAT_18                                    \
		IOMUX_PAD(0x03EC, 0x00D8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT18__ECSPI2_SS0                                      \
		IOMUX_PAD(0x03EC, 0x00D8, 2, 0x0800, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT18__AUDMUX_AUD5_TXFS                                \
		IOMUX_PAD(0x03EC, 0x00D8, 3, 0x07C4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT18__AUDMUX_AUD4_RXFS                                \
		IOMUX_PAD(0x03EC, 0x00D8, 4, 0x07A4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT18__GPIO_5_12                                       \
		IOMUX_PAD(0x03EC, 0x00D8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT18__MMDC_MMDC_DEBUG_23                              \
		IOMUX_PAD(0x03EC, 0x00D8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT18__WEIM_WEIM_CS_2                                  \
		IOMUX_PAD(0x03EC, 0x00D8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT19__IPU1_DISP0_DAT_19                               \
		IOMUX_PAD(0x03F0, 0x00DC, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT19__LCDIF_DAT_19                                    \
		IOMUX_PAD(0x03F0, 0x00DC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT19__ECSPI2_SCLK                                     \
		IOMUX_PAD(0x03F0, 0x00DC, 2, 0x07F4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT19__AUDMUX_AUD5_RXD                                 \
		IOMUX_PAD(0x03F0, 0x00DC, 3, 0x07B0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT19__AUDMUX_AUD4_RXC                                 \
		IOMUX_PAD(0x03F0, 0x00DC, 4, 0x07A0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT19__GPIO_5_13                                       \
		IOMUX_PAD(0x03F0, 0x00DC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT19__MMDC_MMDC_DEBUG_24                              \
		IOMUX_PAD(0x03F0, 0x00DC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT19__WEIM_WEIM_CS_3                                  \
		IOMUX_PAD(0x03F0, 0x00DC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT2__IPU1_DISP0_DAT_2                                 \
		IOMUX_PAD(0x03F4, 0x00E0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__LCDIF_DAT_2                                      \
		IOMUX_PAD(0x03F4, 0x00E0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__ECSPI3_MISO                                      \
		IOMUX_PAD(0x03F4, 0x00E0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__USDHC1_USDHC_DEBUG_2                             \
		IOMUX_PAD(0x03F4, 0x00E0, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__SDMA_DEBUG_MODE                                  \
		IOMUX_PAD(0x03F4, 0x00E0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__GPIO_4_23                                        \
		IOMUX_PAD(0x03F4, 0x00E0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__MMDC_MMDC_DEBUG_7                                \
		IOMUX_PAD(0x03F4, 0x00E0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT2__PL301_SIM_MX6DL_PER1_HADDR_13                    \
		IOMUX_PAD(0x03F4, 0x00E0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT20__IPU1_DISP0_DAT_20                               \
		IOMUX_PAD(0x03F8, 0x00E4, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT20__LCDIF_DAT_20                                    \
		IOMUX_PAD(0x03F8, 0x00E4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT20__ECSPI1_SCLK                                     \
		IOMUX_PAD(0x03F8, 0x00E4, 2, 0x07D8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT20__AUDMUX_AUD4_TXC                                 \
		IOMUX_PAD(0x03F8, 0x00E4, 3, 0x07A8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT20__SDMA_DEBUG_EVT_CHN_LINES_7                      \
		IOMUX_PAD(0x03F8, 0x00E4, 4, 0x0000, 0, NO_PAD_CTRL)



#define MX6DL_PAD_DISP0_DAT20__GPIO_5_14                                       \
		IOMUX_PAD(0x03F8, 0x00E4, 5, 0x0000, 0, NO_PAD_CTRL)


		
#define MX6DL_PAD_DISP0_DAT20__MMDC_MMDC_DEBUG_25                              \
		IOMUX_PAD(0x03F8, 0x00E4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT20__PL301_SIM_MX6DL_PER1_HADDR_28                   \
		IOMUX_PAD(0x03F8, 0x00E4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT21__IPU1_DISP0_DAT_21                               \
		IOMUX_PAD(0x03FC, 0x00E8, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT21__LCDIF_DAT_21                                    \
		IOMUX_PAD(0x03FC, 0x00E8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT21__ECSPI1_MOSI                                     \
		IOMUX_PAD(0x03FC, 0x00E8, 2, 0x07E0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT21__AUDMUX_AUD4_TXD                                 \
		IOMUX_PAD(0x03FC, 0x00E8, 3, 0x079C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT21__SDMA_DEBUG_BUS_DEVICE_0                         \
		IOMUX_PAD(0x03FC, 0x00E8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT21__GPIO_5_15                                       \
		IOMUX_PAD(0x03FC, 0x00E8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT21__MMDC_MMDC_DEBUG_26                              \
		IOMUX_PAD(0x03FC, 0x00E8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT21__PL301_SIM_MX6DL_PER1_HADDR_29                   \
		IOMUX_PAD(0x03FC, 0x00E8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT22__IPU1_DISP0_DAT_22                               \
		IOMUX_PAD(0x0400, 0x00EC, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT22__LCDIF_DAT_22                                    \
		IOMUX_PAD(0x0400, 0x00EC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT22__ECSPI1_MISO                                     \
		IOMUX_PAD(0x0400, 0x00EC, 2, 0x07DC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT22__AUDMUX_AUD4_TXFS                                \
		IOMUX_PAD(0x0400, 0x00EC, 3, 0x07AC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT22__SDMA_DEBUG_BUS_DEVICE_1                         \
		IOMUX_PAD(0x0400, 0x00EC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT22__GPIO_5_16                                       \
		IOMUX_PAD(0x0400, 0x00EC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT22__MMDC_MMDC_DEBUG_27                              \
		IOMUX_PAD(0x0400, 0x00EC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT22__PL301_SIM_MX6DL_PER1_HADDR_30                   \
		IOMUX_PAD(0x0400, 0x00EC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT23__IPU1_DISP0_DAT_23                               \
		IOMUX_PAD(0x0404, 0x00F0, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT23__LCDIF_DAT_23                                    \
		IOMUX_PAD(0x0404, 0x00F0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT23__ECSPI1_SS0                                      \
		IOMUX_PAD(0x0404, 0x00F0, 2, 0x07E4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT23__AUDMUX_AUD4_RXD                                 \
		IOMUX_PAD(0x0404, 0x00F0, 3, 0x0798, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT23__SDMA_DEBUG_BUS_DEVICE_2                         \
		IOMUX_PAD(0x0404, 0x00F0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT23__GPIO_5_17                                       \
		IOMUX_PAD(0x0404, 0x00F0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT23__MMDC_MMDC_DEBUG_28                              \
		IOMUX_PAD(0x0404, 0x00F0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT23__PL301_SIM_MX6DL_PER1_HADDR_31                   \
		IOMUX_PAD(0x0404, 0x00F0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT3__IPU1_DISP0_DAT_3                                 \
		IOMUX_PAD(0x0408, 0x00F4, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT3__LCDIF_DAT_3                                      \
		IOMUX_PAD(0x0408, 0x00F4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT3__ECSPI3_SS0                                       \
		IOMUX_PAD(0x0408, 0x00F4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT3__USDHC1_USDHC_DEBUG_3                             \
		IOMUX_PAD(0x0408, 0x00F4, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT3__SDMA_DEBUG_BUS_ERROR                             \
		IOMUX_PAD(0x0408, 0x00F4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT3__GPIO_4_24                                        \
		IOMUX_PAD(0x0408, 0x00F4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT3__MMDC_MMDC_DEBUG_8                                \
		IOMUX_PAD(0x0408, 0x00F4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT3__PL301_SIM_MX6DL_PER1_HADDR_14                    \
		IOMUX_PAD(0x0408, 0x00F4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT4__IPU1_DISP0_DAT_4                                 \
		IOMUX_PAD(0x040C, 0x00F8, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT4__LCDIF_DAT_4                                      \
		IOMUX_PAD(0x040C, 0x00F8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT4__ECSPI3_SS1                                       \
		IOMUX_PAD(0x040C, 0x00F8, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT4__USDHC1_USDHC_DEBUG_4                             \
		IOMUX_PAD(0x040C, 0x00F8, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT4__SDMA_DEBUG_BUS_RWB                               \
		IOMUX_PAD(0x040C, 0x00F8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT4__GPIO_4_25                                        \
		IOMUX_PAD(0x040C, 0x00F8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT4__MMDC_MMDC_DEBUG_9                                \
		IOMUX_PAD(0x040C, 0x00F8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT4__PL301_SIM_MX6DL_PER1_HADDR_15                    \
		IOMUX_PAD(0x040C, 0x00F8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT5__IPU1_DISP0_DAT_5                                 \
		IOMUX_PAD(0x0410, 0x00FC, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT5__LCDIF_DAT_5                                      \
		IOMUX_PAD(0x0410, 0x00FC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT5__ECSPI3_SS2                                       \
		IOMUX_PAD(0x0410, 0x00FC, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT5__AUDMUX_AUD6_RXFS                                 \
		IOMUX_PAD(0x0410, 0x00FC, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT5__SDMA_DEBUG_MATCHED_DMBUS                         \
		IOMUX_PAD(0x0410, 0x00FC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT5__GPIO_4_26                                        \
		IOMUX_PAD(0x0410, 0x00FC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT5__MMDC_MMDC_DEBUG_10                               \
		IOMUX_PAD(0x0410, 0x00FC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT5__PL301_SIM_MX6DL_PER1_HADDR_16                    \
		IOMUX_PAD(0x0410, 0x00FC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT6__IPU1_DISP0_DAT_6                                 \
		IOMUX_PAD(0x0414, 0x0100, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT6__LCDIF_DAT_6                                      \
		IOMUX_PAD(0x0414, 0x0100, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT6__ECSPI3_SS3                                       \
		IOMUX_PAD(0x0414, 0x0100, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT6__AUDMUX_AUD6_RXC                                  \
		IOMUX_PAD(0x0414, 0x0100, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT6__SDMA_DEBUG_RTBUFFER_WRITE                        \
		IOMUX_PAD(0x0414, 0x0100, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT6__GPIO_4_27                                        \
		IOMUX_PAD(0x0414, 0x0100, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT6__MMDC_MMDC_DEBUG_11                               \
		IOMUX_PAD(0x0414, 0x0100, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT6__PL301_SIM_MX6DL_PER1_HADDR_17                    \
		IOMUX_PAD(0x0414, 0x0100, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT7__IPU1_DISP0_DAT_7                                 \
		IOMUX_PAD(0x0418, 0x0104, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT7__LCDIF_DAT_7                                      \
		IOMUX_PAD(0x0418, 0x0104, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT7__ECSPI3_RDY                                       \
		IOMUX_PAD(0x0418, 0x0104, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT7__USDHC1_USDHC_DEBUG_5                             \
		IOMUX_PAD(0x0418, 0x0104, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT7__SDMA_DEBUG_EVENT_CHANNEL_0                       \
		IOMUX_PAD(0x0418, 0x0104, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT7__GPIO_4_28                                        \
		IOMUX_PAD(0x0418, 0x0104, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT7__MMDC_MMDC_DEBUG_12                               \
		IOMUX_PAD(0x0418, 0x0104, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT7__PL301_SIM_MX6DL_PER1_HADDR_18                    \
		IOMUX_PAD(0x0418, 0x0104, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT8__IPU1_DISP0_DAT_8                                 \
		IOMUX_PAD(0x041C, 0x0108, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT8__LCDIF_DAT_8                                      \
		IOMUX_PAD(0x041C, 0x0108, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT8__PWM1_PWMO                                        \
		IOMUX_PAD(0x041C, 0x0108, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT8__WDOG1_WDOG_B                                     \
		IOMUX_PAD(0x041C, 0x0108, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT8__SDMA_DEBUG_EVENT_CHANNEL_1                       \
		IOMUX_PAD(0x041C, 0x0108, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT8__GPIO_4_29                                        \
		IOMUX_PAD(0x041C, 0x0108, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT8__MMDC_MMDC_DEBUG_13                               \
		IOMUX_PAD(0x041C, 0x0108, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT8__PL301_SIM_MX6DL_PER1_HADDR_19                    \
		IOMUX_PAD(0x041C, 0x0108, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DISP0_DAT9__IPU1_DISP0_DAT_9                                 \
		IOMUX_PAD(0x0420, 0x010C, 0, 0x0000, 0, MX6DL_DISP_PAD_CLT)
#define MX6DL_PAD_DISP0_DAT9__LCDIF_DAT_9                                      \
		IOMUX_PAD(0x0420, 0x010C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT9__PWM2_PWMO                                        \
		IOMUX_PAD(0x0420, 0x010C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT9__WDOG2_WDOG_B                                     \
		IOMUX_PAD(0x0420, 0x010C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT9__SDMA_DEBUG_EVENT_CHANNEL_2                       \
		IOMUX_PAD(0x0420, 0x010C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT9__GPIO_4_30                                        \
		IOMUX_PAD(0x0420, 0x010C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT9__MMDC_MMDC_DEBUG_14                               \
		IOMUX_PAD(0x0420, 0x010C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_DISP0_DAT9__PL301_SIM_MX6DL_PER1_HADDR_20                    \
		IOMUX_PAD(0x0420, 0x010C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A0__MMDC_DRAM_A_0                                       \
		IOMUX_PAD(0x0424, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A1__MMDC_DRAM_A_1                                       \
		IOMUX_PAD(0x0428, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A10__MMDC_DRAM_A_10                                     \
		IOMUX_PAD(0x042C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A11__MMDC_DRAM_A_11                                     \
		IOMUX_PAD(0x0430, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A12__MMDC_DRAM_A_12                                     \
		IOMUX_PAD(0x0434, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A13__MMDC_DRAM_A_13                                     \
		IOMUX_PAD(0x0438, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A14__MMDC_DRAM_A_14                                     \
		IOMUX_PAD(0x043C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A15__MMDC_DRAM_A_15                                     \
		IOMUX_PAD(0x0440, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A2__MMDC_DRAM_A_2                                       \
		IOMUX_PAD(0x0444, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A3__MMDC_DRAM_A_3                                       \
		IOMUX_PAD(0x0448, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A4__MMDC_DRAM_A_4                                       \
		IOMUX_PAD(0x044C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A5__MMDC_DRAM_A_5                                       \
		IOMUX_PAD(0x0450, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A6__MMDC_DRAM_A_6                                       \
		IOMUX_PAD(0x0454, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A7__MMDC_DRAM_A_7                                       \
		IOMUX_PAD(0x0458, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A8__MMDC_DRAM_A_8                                       \
		IOMUX_PAD(0x045C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_A9__MMDC_DRAM_A_9                                       \
		IOMUX_PAD(0x0460, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_CAS__MMDC_DRAM_CAS                                      \
		IOMUX_PAD(0x0464, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_CS0__MMDC_DRAM_CS_0                                     \
		IOMUX_PAD(0x0468, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_CS1__MMDC_DRAM_CS_1                                     \
		IOMUX_PAD(0x046C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D0__MMDC_DRAM_D_0                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D1__MMDC_DRAM_D_1                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D10__MMDC_DRAM_D_10                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D11__MMDC_DRAM_D_11                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D12__MMDC_DRAM_D_12                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D13__MMDC_DRAM_D_13                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D14__MMDC_DRAM_D_14                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D15__MMDC_DRAM_D_15                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D16__MMDC_DRAM_D_16                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D17__MMDC_DRAM_D_17                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D18__MMDC_DRAM_D_18                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D19__MMDC_DRAM_D_19                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D2__MMDC_DRAM_D_2                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D20__MMDC_DRAM_D_20                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D21__MMDC_DRAM_D_21                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D22__MMDC_DRAM_D_22                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D23__MMDC_DRAM_D_23                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D24__MMDC_DRAM_D_24                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D25__MMDC_DRAM_D_25                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D26__MMDC_DRAM_D_26                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D27__MMDC_DRAM_D_27                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D28__MMDC_DRAM_D_28                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D29__MMDC_DRAM_D_29                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D3__MMDC_DRAM_D_3                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D30__MMDC_DRAM_D_30                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D31__MMDC_DRAM_D_31                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D32__MMDC_DRAM_D_32                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D33__MMDC_DRAM_D_33                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D34__MMDC_DRAM_D_34                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D35__MMDC_DRAM_D_35                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D36__MMDC_DRAM_D_36                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D37__MMDC_DRAM_D_37                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D38__MMDC_DRAM_D_38                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D39__MMDC_DRAM_D_39                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D4__MMDC_DRAM_D_4                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D40__MMDC_DRAM_D_40                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D41__MMDC_DRAM_D_41                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D42__MMDC_DRAM_D_42                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D43__MMDC_DRAM_D_43                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D44__MMDC_DRAM_D_44                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D45__MMDC_DRAM_D_45                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D46__MMDC_DRAM_D_46                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D47__MMDC_DRAM_D_47                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D48__MMDC_DRAM_D_48                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D49__MMDC_DRAM_D_49                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D5__MMDC_DRAM_D_5                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D50__MMDC_DRAM_D_50                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D51__MMDC_DRAM_D_51                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D52__MMDC_DRAM_D_52                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D53__MMDC_DRAM_D_53                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D54__MMDC_DRAM_D_54                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D55__MMDC_DRAM_D_55                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D56__MMDC_DRAM_D_56                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D57__MMDC_DRAM_D_57                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D58__MMDC_DRAM_D_58                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D59__MMDC_DRAM_D_59                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D6__MMDC_DRAM_D_6                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D60__MMDC_DRAM_D_60                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D61__MMDC_DRAM_D_61                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D62__MMDC_DRAM_D_62                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D63__MMDC_DRAM_D_63                                     \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D7__MMDC_DRAM_D_7                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D8__MMDC_DRAM_D_8                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_D9__MMDC_DRAM_D_9                                       \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM0__MMDC_DRAM_DQM_0                                   \
		IOMUX_PAD(0x0470, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM1__MMDC_DRAM_DQM_1                                   \
		IOMUX_PAD(0x0474, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM2__MMDC_DRAM_DQM_2                                   \
		IOMUX_PAD(0x0478, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM3__MMDC_DRAM_DQM_3                                   \
		IOMUX_PAD(0x047C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM4__MMDC_DRAM_DQM_4                                   \
		IOMUX_PAD(0x0480, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM5__MMDC_DRAM_DQM_5                                   \
		IOMUX_PAD(0x0484, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM6__MMDC_DRAM_DQM_6                                   \
		IOMUX_PAD(0x0488, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_DQM7__MMDC_DRAM_DQM_7                                   \
		IOMUX_PAD(0x048C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_RAS__MMDC_DRAM_RAS                                      \
		IOMUX_PAD(0x0490, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_RESET__MMDC_DRAM_RESET                                  \
		IOMUX_PAD(0x0494, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDBA0__MMDC_DRAM_SDBA_0                                 \
		IOMUX_PAD(0x0498, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDBA1__MMDC_DRAM_SDBA_1                                 \
		IOMUX_PAD(0x049C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDBA2__MMDC_DRAM_SDBA_2                                 \
		IOMUX_PAD(0x04A0, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDCKE0__MMDC_DRAM_SDCKE_0                               \
		IOMUX_PAD(0x04A4, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDCKE1__MMDC_DRAM_SDCKE_1                               \
		IOMUX_PAD(0x04A8, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDCLK_0__MMDC_DRAM_SDCLK0                               \
		IOMUX_PAD(0x04AC, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDCLK_1__MMDC_DRAM_SDCLK1                               \
		IOMUX_PAD(0x04B0, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDODT0__MMDC_DRAM_ODT_0                                 \
		IOMUX_PAD(0x04B4, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDODT1__MMDC_DRAM_ODT_1                                 \
		IOMUX_PAD(0x04B8, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS0__MMDC_DRAM_SDQS_0                                 \
		IOMUX_PAD(0x04BC, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS1__MMDC_DRAM_SDQS_1                                 \
		IOMUX_PAD(0x04C0, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS2__MMDC_DRAM_SDQS_2                                 \
		IOMUX_PAD(0x04C4, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS3__MMDC_DRAM_SDQS_3                                 \
		IOMUX_PAD(0x04C8, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS4__MMDC_DRAM_SDQS_4                                 \
		IOMUX_PAD(0x04CC, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS5__MMDC_DRAM_SDQS_5                                 \
		IOMUX_PAD(0x04D0, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS6__MMDC_DRAM_SDQS_6                                 \
		IOMUX_PAD(0x04D4, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDQS7__MMDC_DRAM_SDQS_7                                 \
		IOMUX_PAD(0x04D8, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_DRAM_SDWE__MMDC_DRAM_SDWE                                    \
		IOMUX_PAD(0x04DC, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A16__WEIM_WEIM_A_16                                      \
		IOMUX_PAD(0x04E0, 0x0110, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__IPU1_DI1_DISP_CLK                                   \
		IOMUX_PAD(0x04E0, 0x0110, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__IPU1_CSI1_PIXCLK                                    \
		IOMUX_PAD(0x04E0, 0x0110, 2, 0x08B8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__MIPI_CORE_DPHY_TEST_OUT_23                          \
		IOMUX_PAD(0x04E0, 0x0110, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__GPIO_2_22                                           \
		IOMUX_PAD(0x04E0, 0x0110, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__TPSMP_HDATA_6                                       \
		IOMUX_PAD(0x04E0, 0x0110, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__SRC_BT_CFG_16                                       \
		IOMUX_PAD(0x04E0, 0x0110, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A16__EPDC_SDDO_0                                         \
		IOMUX_PAD(0x04E0, 0x0110, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A17__WEIM_WEIM_A_17                                      \
		IOMUX_PAD(0x04E4, 0x0114, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__IPU1_DISP1_DAT_12                                   \
		IOMUX_PAD(0x04E4, 0x0114, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__IPU1_CSI1_D_12                                      \
		IOMUX_PAD(0x04E4, 0x0114, 2, 0x0890, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__MIPI_CORE_DPHY_TEST_OUT_22                          \
		IOMUX_PAD(0x04E4, 0x0114, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__GPIO_2_21                                           \
		IOMUX_PAD(0x04E4, 0x0114, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__TPSMP_HDATA_5                                       \
		IOMUX_PAD(0x04E4, 0x0114, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__SRC_BT_CFG_17                                       \
		IOMUX_PAD(0x04E4, 0x0114, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A17__EPDC_PWRSTAT                                        \
		IOMUX_PAD(0x04E4, 0x0114, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A18__WEIM_WEIM_A_18                                      \
		IOMUX_PAD(0x04E8, 0x0118, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__IPU1_DISP1_DAT_13                                   \
		IOMUX_PAD(0x04E8, 0x0118, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__IPU1_CSI1_D_13                                      \
		IOMUX_PAD(0x04E8, 0x0118, 2, 0x0894, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__MIPI_CORE_DPHY_TEST_OUT_21                          \
		IOMUX_PAD(0x04E8, 0x0118, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__GPIO_2_20                                           \
		IOMUX_PAD(0x04E8, 0x0118, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__TPSMP_HDATA_4                                       \
		IOMUX_PAD(0x04E8, 0x0118, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__SRC_BT_CFG_18                                       \
		IOMUX_PAD(0x04E8, 0x0118, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A18__EPDC_PWRCTRL_0                                      \
		IOMUX_PAD(0x04E8, 0x0118, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A19__WEIM_WEIM_A_19                                      \
		IOMUX_PAD(0x04EC, 0x011C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__IPU1_DISP1_DAT_14                                   \
		IOMUX_PAD(0x04EC, 0x011C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__IPU1_CSI1_D_14                                      \
		IOMUX_PAD(0x04EC, 0x011C, 2, 0x0898, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__MIPI_CORE_DPHY_TEST_OUT_20                          \
		IOMUX_PAD(0x04EC, 0x011C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__GPIO_2_19                                           \
		IOMUX_PAD(0x04EC, 0x011C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__TPSMP_HDATA_3                                       \
		IOMUX_PAD(0x04EC, 0x011C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__SRC_BT_CFG_19                                       \
		IOMUX_PAD(0x04EC, 0x011C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A19__EPDC_PWRCTRL_1                                      \
		IOMUX_PAD(0x04EC, 0x011C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A20__WEIM_WEIM_A_20                                      \
		IOMUX_PAD(0x04F0, 0x0120, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__IPU1_DISP1_DAT_15                                   \
		IOMUX_PAD(0x04F0, 0x0120, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__IPU1_CSI1_D_15                                      \
		IOMUX_PAD(0x04F0, 0x0120, 2, 0x089C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__MIPI_CORE_DPHY_TEST_OUT_19                          \
		IOMUX_PAD(0x04F0, 0x0120, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__GPIO_2_18                                           \
		IOMUX_PAD(0x04F0, 0x0120, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__TPSMP_HDATA_2                                       \
		IOMUX_PAD(0x04F0, 0x0120, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__SRC_BT_CFG_20                                       \
		IOMUX_PAD(0x04F0, 0x0120, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A20__EPDC_PWRCTRL_2                                      \
		IOMUX_PAD(0x04F0, 0x0120, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A21__WEIM_WEIM_A_21                                      \
		IOMUX_PAD(0x04F4, 0x0124, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__IPU1_DISP1_DAT_16                                   \
		IOMUX_PAD(0x04F4, 0x0124, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__IPU1_CSI1_D_16                                      \
		IOMUX_PAD(0x04F4, 0x0124, 2, 0x08A0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__MIPI_CORE_DPHY_TEST_OUT_18                          \
		IOMUX_PAD(0x04F4, 0x0124, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__GPIO_2_17                                           \
		IOMUX_PAD(0x04F4, 0x0124, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__TPSMP_HDATA_1                                       \
		IOMUX_PAD(0x04F4, 0x0124, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__SRC_BT_CFG_21                                       \
		IOMUX_PAD(0x04F4, 0x0124, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A21__EPDC_GDCLK                                          \
		IOMUX_PAD(0x04F4, 0x0124, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A22__WEIM_WEIM_A_22                                      \
		IOMUX_PAD(0x04F8, 0x0128, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A22__IPU1_DISP1_DAT_17                                   \
		IOMUX_PAD(0x04F8, 0x0128, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A22__IPU1_CSI1_D_17                                      \
		IOMUX_PAD(0x04F8, 0x0128, 2, 0x08A4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A22__GPIO_2_16                                           \
		IOMUX_PAD(0x04F8, 0x0128, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A22__TPSMP_HDATA_0                                       \
		IOMUX_PAD(0x04F8, 0x0128, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A22__SRC_BT_CFG_22                                       \
		IOMUX_PAD(0x04F8, 0x0128, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A22__EPDC_GDSP                                           \
		IOMUX_PAD(0x04F8, 0x0128, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A23__WEIM_WEIM_A_23                                      \
		IOMUX_PAD(0x04FC, 0x012C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__IPU1_DISP1_DAT_18                                   \
		IOMUX_PAD(0x04FC, 0x012C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__IPU1_CSI1_D_18                                      \
		IOMUX_PAD(0x04FC, 0x012C, 2, 0x08A8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__IPU1_SISG_3                                         \
		IOMUX_PAD(0x04FC, 0x012C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__GPIO_6_6                                            \
		IOMUX_PAD(0x04FC, 0x012C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__PL301_SIM_MX6DL_PER1_HPROT_3                        \
		IOMUX_PAD(0x04FC, 0x012C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__SRC_BT_CFG_23                                       \
		IOMUX_PAD(0x04FC, 0x012C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A23__EPDC_GDOE                                           \
		IOMUX_PAD(0x04FC, 0x012C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A24__WEIM_WEIM_A_24                                      \
		IOMUX_PAD(0x0500, 0x0130, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__IPU1_DISP1_DAT_19                                   \
		IOMUX_PAD(0x0500, 0x0130, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__IPU1_CSI1_D_19                                      \
		IOMUX_PAD(0x0500, 0x0130, 2, 0x08AC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__IPU1_SISG_2                                         \
		IOMUX_PAD(0x0500, 0x0130, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__GPIO_5_4                                            \
		IOMUX_PAD(0x0500, 0x0130, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__PL301_SIM_MX6DL_PER1_HPROT_2                        \
		IOMUX_PAD(0x0500, 0x0130, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__SRC_BT_CFG_24                                       \
		IOMUX_PAD(0x0500, 0x0130, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A24__EPDC_GDRL                                           \
		IOMUX_PAD(0x0500, 0x0130, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_A25__WEIM_WEIM_A_25                                      \
		IOMUX_PAD(0x0504, 0x0134, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__ECSPI4_SS1                                          \
		IOMUX_PAD(0x0504, 0x0134, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__ECSPI2_RDY                                          \
		IOMUX_PAD(0x0504, 0x0134, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__IPU1_DI1_PIN12                                      \
		IOMUX_PAD(0x0504, 0x0134, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__IPU1_DI0_D1_CS                                      \
		IOMUX_PAD(0x0504, 0x0134, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__GPIO_5_2                                            \
		IOMUX_PAD(0x0504, 0x0134, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__HDMI_TX_CEC_LINE                                    \
		IOMUX_PAD(0x0504, 0x0134, 6, 0x085C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__PL301_SIM_MX6DL_PER1_HBURST_0                       \
		IOMUX_PAD(0x0504, 0x0134, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__EPDC_SDDO_15                                        \
		IOMUX_PAD(0x0504, 0x0134, 8, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_A25__WEIM_ACLK_FREERUN                                   \
		IOMUX_PAD(0x0504, 0x0134, 9, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_BCLK__WEIM_WEIM_BCLK                                     \
		IOMUX_PAD(0x0508, 0x0138, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_BCLK__IPU1_DI1_PIN16                                     \
		IOMUX_PAD(0x0508, 0x0138, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_BCLK__GPIO_6_31                                          \
		IOMUX_PAD(0x0508, 0x0138, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_BCLK__TPSMP_HDATA_31                                     \
		IOMUX_PAD(0x0508, 0x0138, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_BCLK__EPDC_SDCE_9                                        \
		IOMUX_PAD(0x0508, 0x0138, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_CS0__WEIM_WEIM_CS_0                                      \
		IOMUX_PAD(0x050C, 0x013C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS0__IPU1_DI1_PIN5                                       \
		IOMUX_PAD(0x050C, 0x013C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS0__ECSPI2_SCLK                                         \
		IOMUX_PAD(0x050C, 0x013C, 2, 0x07F4, 2, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS0__MIPI_CORE_DPHY_TEST_OUT_24                          \
		IOMUX_PAD(0x050C, 0x013C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS0__GPIO_2_23                                           \
		IOMUX_PAD(0x050C, 0x013C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS0__TPSMP_HDATA_7                                       \
		IOMUX_PAD(0x050C, 0x013C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS0__EPDC_SDDO_6                                         \
		IOMUX_PAD(0x050C, 0x013C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_CS1__WEIM_WEIM_CS_1                                      \
		IOMUX_PAD(0x0510, 0x0140, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS1__IPU1_DI1_PIN6                                       \
		IOMUX_PAD(0x0510, 0x0140, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS1__ECSPI2_MOSI                                         \
		IOMUX_PAD(0x0510, 0x0140, 2, 0x07FC, 2, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS1__MIPI_CORE_DPHY_TEST_OUT_25                          \
		IOMUX_PAD(0x0510, 0x0140, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS1__GPIO_2_24                                           \
		IOMUX_PAD(0x0510, 0x0140, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS1__TPSMP_HDATA_8                                       \
		IOMUX_PAD(0x0510, 0x0140, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_CS1__EPDC_SDDO_8                                         \
		IOMUX_PAD(0x0510, 0x0140, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D16__WEIM_WEIM_D_16                                      \
		IOMUX_PAD(0x0514, 0x0144, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__ECSPI1_SCLK                                         \
		IOMUX_PAD(0x0514, 0x0144, 1, 0x07D8, 2, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__IPU1_DI0_PIN5                                       \
		IOMUX_PAD(0x0514, 0x0144, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__IPU1_CSI1_D_18                                      \
		IOMUX_PAD(0x0514, 0x0144, 3, 0x08A8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__HDMI_TX_DDC_SDA                                     \
		IOMUX_PAD(0x0514, 0x0144, 4, 0x0864, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__GPIO_3_16                                           \
		IOMUX_PAD(0x0514, 0x0144, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__I2C2_SDA                                            \
		IOMUX_PAD(0x0514, 0x0144, 6 | IOMUX_CONFIG_SION, 0x0874, 0, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__TPSMP_HTRANS_0                                      \
		IOMUX_PAD(0x0514, 0x0144, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D16__EPDC_SDDO_10                                        \
		IOMUX_PAD(0x0514, 0x0144, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D17__WEIM_WEIM_D_17                                      \
		IOMUX_PAD(0x0518, 0x0148, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__ECSPI1_MISO                                         \
		IOMUX_PAD(0x0518, 0x0148, 1, 0x07DC, 2, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__IPU1_DI0_PIN6                                       \
		IOMUX_PAD(0x0518, 0x0148, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__IPU1_CSI1_PIXCLK                                    \
		IOMUX_PAD(0x0518, 0x0148, 3, 0x08B8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__DCIC1_DCIC_OUT                                      \
		IOMUX_PAD(0x0518, 0x0148, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__GPIO_3_17                                           \
		IOMUX_PAD(0x0518, 0x0148, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__I2C3_SCL                                            \
		IOMUX_PAD(0x0518, 0x0148, 6 | IOMUX_CONFIG_SION, 0x0878, 0, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__PL301_SIM_MX6DL_PER1_HBURST_1                       \
		IOMUX_PAD(0x0518, 0x0148, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D17__EPDC_VCOM_0                                         \
		IOMUX_PAD(0x0518, 0x0148, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D18__WEIM_WEIM_D_18                                      \
		IOMUX_PAD(0x051C, 0x014C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__ECSPI1_MOSI                                         \
		IOMUX_PAD(0x051C, 0x014C, 1, 0x07E0, 2, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__IPU1_DI0_PIN7                                       \
		IOMUX_PAD(0x051C, 0x014C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__IPU1_CSI1_D_17                                      \
		IOMUX_PAD(0x051C, 0x014C, 3, 0x08A4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__IPU1_DI1_D0_CS                                      \
		IOMUX_PAD(0x051C, 0x014C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__GPIO_3_18                                           \
		IOMUX_PAD(0x051C, 0x014C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__I2C3_SDA                                            \
		IOMUX_PAD(0x051C, 0x014C, 6 | IOMUX_CONFIG_SION, 0x087C, 0, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__PL301_SIM_MX6DL_PER1_HBURST_2                       \
		IOMUX_PAD(0x051C, 0x014C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D18__EPDC_VCOM_1                                         \
		IOMUX_PAD(0x051C, 0x014C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D19__WEIM_WEIM_D_19                                      \
		IOMUX_PAD(0x0520, 0x0150, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__ECSPI1_SS1                                          \
		IOMUX_PAD(0x0520, 0x0150, 1, 0x07E8, 1, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__IPU1_DI0_PIN8                                       \
		IOMUX_PAD(0x0520, 0x0150, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__IPU1_CSI1_D_16                                      \
		IOMUX_PAD(0x0520, 0x0150, 3, 0x08A0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__UART1_CTS                                           \
		IOMUX_PAD(0x0520, 0x0150, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__UART1_RTS                                          \
		IOMUX_PAD(0x0520, 0x0150, 4, 0x08F8, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__GPIO_3_19                                           \
		IOMUX_PAD(0x0520, 0x0150, 5, 0x0000, 0, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__EPIT1_EPITO                                         \
		IOMUX_PAD(0x0520, 0x0150, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__PL301_SIM_MX6DL_PER1_HRESP                          \
		IOMUX_PAD(0x0520, 0x0150, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D19__EPDC_SDDO_12                                        \
		IOMUX_PAD(0x0520, 0x0150, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D20__WEIM_WEIM_D_20                                      \
		IOMUX_PAD(0x0524, 0x0154, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__ECSPI4_SS0                                          \
		IOMUX_PAD(0x0524, 0x0154, 1, 0x0808, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__IPU1_DI0_PIN16                                      \
		IOMUX_PAD(0x0524, 0x0154, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__IPU1_CSI1_D_15                                      \
		IOMUX_PAD(0x0524, 0x0154, 3, 0x089C, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__UART1_CTS                                           \
		IOMUX_PAD(0x0524, 0x0154, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__UART1_RTS                                           \
		IOMUX_PAD(0x0524, 0x0154, 4, 0x08F8, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__GPIO_3_20                                           \
		IOMUX_PAD(0x0524, 0x0154, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__EPIT2_EPITO                                         \
		IOMUX_PAD(0x0524, 0x0154, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D20__TPSMP_HTRANS_1                                      \
		IOMUX_PAD(0x0524, 0x0154, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D21__WEIM_WEIM_D_21                                      \
		IOMUX_PAD(0x0528, 0x0158, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__ECSPI4_SCLK                                         \
		IOMUX_PAD(0x0528, 0x0158, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__IPU1_DI0_PIN17                                      \
		IOMUX_PAD(0x0528, 0x0158, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__IPU1_CSI1_D_11                                      \
		IOMUX_PAD(0x0528, 0x0158, 3, 0x088C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__USBOH3_USBOTG_OC                                    \
		IOMUX_PAD(0x0528, 0x0158, 4, 0x0920, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__GPIO_3_21                                           \
		IOMUX_PAD(0x0528, 0x0158, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__I2C1_SCL                                            \
		IOMUX_PAD(0x0528, 0x0158, 6 | IOMUX_CONFIG_SION, 0x0868, 1, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_EIM_D21__SPDIF_IN1                                           \
		IOMUX_PAD(0x0528, 0x0158, 7, 0x08F0, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D22__WEIM_WEIM_D_22                                      \
		IOMUX_PAD(0x052C, 0x015C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__ECSPI4_MISO                                         \
		IOMUX_PAD(0x052C, 0x015C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__IPU1_DI0_PIN1                                       \
		IOMUX_PAD(0x052C, 0x015C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__IPU1_CSI1_D_10                                      \
		IOMUX_PAD(0x052C, 0x015C, 3, 0x0888, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__USBOH3_USBOTG_PWR                                   \
		IOMUX_PAD(0x052C, 0x015C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__GPIO_3_22                                           \
		IOMUX_PAD(0x052C, 0x015C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__SPDIF_OUT1                                          \
		IOMUX_PAD(0x052C, 0x015C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__PL301_SIM_MX6DL_PER1_HWRITE                         \
		IOMUX_PAD(0x052C, 0x015C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D22__EPDC_SDCE_6                                         \
		IOMUX_PAD(0x052C, 0x015C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D23__WEIM_WEIM_D_23                                      \
		IOMUX_PAD(0x0530, 0x0160, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__IPU1_DI0_D0_CS                                      \
		IOMUX_PAD(0x0530, 0x0160, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__UART3_CTS                                           \
		IOMUX_PAD(0x0530, 0x0160, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__UART3_RTS                                          \
		IOMUX_PAD(0x0530, 0x0160, 2, 0x0908, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__UART1_DCD                                           \
		IOMUX_PAD(0x0530, 0x0160, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__IPU1_CSI1_DATA_EN                                   \
		IOMUX_PAD(0x0530, 0x0160, 4, 0x08B0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__GPIO_3_23                                           \
		IOMUX_PAD(0x0530, 0x0160, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__IPU1_DI1_PIN2                                       \
		IOMUX_PAD(0x0530, 0x0160, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__IPU1_DI1_PIN14                                      \
		IOMUX_PAD(0x0530, 0x0160, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D23__EPDC_SDDO_11                                        \
		IOMUX_PAD(0x0530, 0x0160, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D24__WEIM_WEIM_D_24                                      \
		IOMUX_PAD(0x0534, 0x0164, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__ECSPI4_SS2                                          \
		IOMUX_PAD(0x0534, 0x0164, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__UART3_TXD                                           \
		IOMUX_PAD(0x0534, 0x0164, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__UART3_RXD                                           \
		IOMUX_PAD(0x0534, 0x0164, 2, 0x090C, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__ECSPI1_SS2                                          \
		IOMUX_PAD(0x0534, 0x0164, 3, 0x07EC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__ECSPI2_SS2                                          \
		IOMUX_PAD(0x0534, 0x0164, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__GPIO_3_24                                           \
		IOMUX_PAD(0x0534, 0x0164, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__AUDMUX_AUD5_RXFS                                    \
		IOMUX_PAD(0x0534, 0x0164, 6, 0x07BC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__UART1_DTR                                           \
		IOMUX_PAD(0x0534, 0x0164, 7, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D24__EPDC_SDCE_7                                         \
		IOMUX_PAD(0x0534, 0x0164, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D25__WEIM_WEIM_D_25                                      \
		IOMUX_PAD(0x0538, 0x0168, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__ECSPI4_SS3                                          \
		IOMUX_PAD(0x0538, 0x0168, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__UART3_TXD                                           \
		IOMUX_PAD(0x0538, 0x0168, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__UART3_RXD                                           \
		IOMUX_PAD(0x0538, 0x0168, 2, 0x090C, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__ECSPI1_SS3                                          \
		IOMUX_PAD(0x0538, 0x0168, 3, 0x07F0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__ECSPI2_SS3                                          \
		IOMUX_PAD(0x0538, 0x0168, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__GPIO_3_25                                           \
		IOMUX_PAD(0x0538, 0x0168, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__AUDMUX_AUD5_RXC                                     \
		IOMUX_PAD(0x0538, 0x0168, 6, 0x07B8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__UART1_DSR                                           \
		IOMUX_PAD(0x0538, 0x0168, 7, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D25__EPDC_SDCE_8                                         \
		IOMUX_PAD(0x0538, 0x0168, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D26__WEIM_WEIM_D_26                                      \
		IOMUX_PAD(0x053C, 0x016C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__IPU1_DI1_PIN11                                      \
		IOMUX_PAD(0x053C, 0x016C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__IPU1_CSI0_D_1                                       \
		IOMUX_PAD(0x053C, 0x016C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__IPU1_CSI1_D_14                                      \
		IOMUX_PAD(0x053C, 0x016C, 3, 0x0898, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__UART2_TXD                                           \
		IOMUX_PAD(0x053C, 0x016C, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__UART2_RXD                                           \
		IOMUX_PAD(0x053C, 0x016C, 4, 0x0904, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__GPIO_3_26                                           \
		IOMUX_PAD(0x053C, 0x016C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__IPU1_SISG_2                                         \
		IOMUX_PAD(0x053C, 0x016C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__IPU1_DISP1_DAT_22                                   \
		IOMUX_PAD(0x053C, 0x016C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D26__EPDC_SDOED                                          \
		IOMUX_PAD(0x053C, 0x016C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D27__WEIM_WEIM_D_27                                      \
		IOMUX_PAD(0x0540, 0x0170, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__IPU1_DI1_PIN13                                      \
		IOMUX_PAD(0x0540, 0x0170, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__IPU1_CSI0_D_0                                       \
		IOMUX_PAD(0x0540, 0x0170, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__IPU1_CSI1_D_13                                      \
		IOMUX_PAD(0x0540, 0x0170, 3, 0x0894, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__UART2_TXD                                           \
		IOMUX_PAD(0x0540, 0x0170, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__UART2_RXD                                           \
		IOMUX_PAD(0x0540, 0x0170, 4, 0x0904, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__GPIO_3_27                                           \
		IOMUX_PAD(0x0540, 0x0170, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__IPU1_SISG_3                                         \
		IOMUX_PAD(0x0540, 0x0170, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__IPU1_DISP1_DAT_23                                   \
		IOMUX_PAD(0x0540, 0x0170, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D27__EPDC_SDOE                                           \
		IOMUX_PAD(0x0540, 0x0170, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D28__WEIM_WEIM_D_28                                      \
		IOMUX_PAD(0x0544, 0x0174, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__I2C1_SDA                                            \
		IOMUX_PAD(0x0544, 0x0174, 1 | IOMUX_CONFIG_SION, 0x086C, 1, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__ECSPI4_MOSI                                         \
		IOMUX_PAD(0x0544, 0x0174, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__IPU1_CSI1_D_12                                      \
		IOMUX_PAD(0x0544, 0x0174, 3, 0x0890, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__UART2_CTS                                           \
		IOMUX_PAD(0x0544, 0x0174, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__UART2_RTS                                          \
		IOMUX_PAD(0x0544, 0x0174, 4, 0x0900, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__GPIO_3_28                                           \
		IOMUX_PAD(0x0544, 0x0174, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__IPU1_EXT_TRIG                                       \
		IOMUX_PAD(0x0544, 0x0174, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__IPU1_DI0_PIN13                                      \
		IOMUX_PAD(0x0544, 0x0174, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D28__EPDC_PWRCTRL_3                                      \
		IOMUX_PAD(0x0544, 0x0174, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D29__WEIM_WEIM_D_29                                      \
		IOMUX_PAD(0x0548, 0x0178, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__IPU1_DI1_PIN15                                      \
		IOMUX_PAD(0x0548, 0x0178, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__ECSPI4_SS0                                          \
		IOMUX_PAD(0x0548, 0x0178, 2, 0x0808, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__UART2_CTS                                           \
		IOMUX_PAD(0x0548, 0x0178, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__UART2_RTS                                           \
		IOMUX_PAD(0x0548, 0x0178, 4, 0x0900, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__GPIO_3_29                                           \
		IOMUX_PAD(0x0548, 0x0178, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__IPU1_CSI1_VSYNC                                     \
		IOMUX_PAD(0x0548, 0x0178, 6, 0x08BC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__IPU1_DI0_PIN14                                      \
		IOMUX_PAD(0x0548, 0x0178, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D29__EPDC_PWRWAKE                                        \
		IOMUX_PAD(0x0548, 0x0178, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D30__WEIM_WEIM_D_30                                      \
		IOMUX_PAD(0x054C, 0x017C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__IPU1_DISP1_DAT_21                                   \
		IOMUX_PAD(0x054C, 0x017C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__IPU1_DI0_PIN11                                      \
		IOMUX_PAD(0x054C, 0x017C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__IPU1_CSI0_D_3                                       \
		IOMUX_PAD(0x054C, 0x017C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__UART3_CTS                                           \
		IOMUX_PAD(0x054C, 0x017C, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__UART3_RTS                                          \
		IOMUX_PAD(0x054C, 0x017C, 4, 0x0908, 1, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__GPIO_3_30                                           \
		IOMUX_PAD(0x054C, 0x017C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__USBOH3_USBH1_OC                                     \
		IOMUX_PAD(0x054C, 0x017C, 6, 0x0924, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__PL301_SIM_MX6DL_PER1_HPROT_0                        \
		IOMUX_PAD(0x054C, 0x017C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D30__EPDC_SDOEZ                                          \
		IOMUX_PAD(0x054C, 0x017C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_D31__WEIM_WEIM_D_31                                      \
		IOMUX_PAD(0x0550, 0x0180, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__IPU1_DISP1_DAT_20                                   \
		IOMUX_PAD(0x0550, 0x0180, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__IPU1_DI0_PIN12                                      \
		IOMUX_PAD(0x0550, 0x0180, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__IPU1_CSI0_D_2                                       \
		IOMUX_PAD(0x0550, 0x0180, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__UART3_CTS                                           \
		IOMUX_PAD(0x0550, 0x0180, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__UART3_RTS                                           \
		IOMUX_PAD(0x0550, 0x0180, 4, 0x0908, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__GPIO_3_31                                           \
		IOMUX_PAD(0x0550, 0x0180, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__USBOH3_USBH1_PWR                                    \
		IOMUX_PAD(0x0550, 0x0180, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__PL301_SIM_MX6DL_PER1_HPROT_1                        \
		IOMUX_PAD(0x0550, 0x0180, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__EPDC_SDCLK                                          \
		IOMUX_PAD(0x0550, 0x0180, 8, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_D31__WEIM_ACLK_FREERUN                                   \
		IOMUX_PAD(0x0550, 0x0180, 9, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA0__WEIM_WEIM_DA_A_0                                    \
		IOMUX_PAD(0x0554, 0x0184, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__IPU1_DISP1_DAT_9                                    \
		IOMUX_PAD(0x0554, 0x0184, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__IPU1_CSI1_D_9                                       \
		IOMUX_PAD(0x0554, 0x0184, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__MIPI_CORE_DPHY_TEST_OUT_2                           \
		IOMUX_PAD(0x0554, 0x0184, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__GPIO_3_0                                            \
		IOMUX_PAD(0x0554, 0x0184, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__TPSMP_HDATA_14                                      \
		IOMUX_PAD(0x0554, 0x0184, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__SRC_BT_CFG_0                                        \
		IOMUX_PAD(0x0554, 0x0184, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA0__EPDC_SDCLKN                                         \
		IOMUX_PAD(0x0554, 0x0184, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA1__WEIM_WEIM_DA_A_1                                    \
		IOMUX_PAD(0x0558, 0x0188, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__IPU1_DISP1_DAT_8                                    \
		IOMUX_PAD(0x0558, 0x0188, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__IPU1_CSI1_D_8                                       \
		IOMUX_PAD(0x0558, 0x0188, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__MIPI_CORE_DPHY_TEST_OUT_3                           \
		IOMUX_PAD(0x0558, 0x0188, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__ANATOP_USBPHY1_TSTI_TX_LS_MODE                      \
		IOMUX_PAD(0x0558, 0x0188, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__GPIO_3_1                                            \
		IOMUX_PAD(0x0558, 0x0188, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__TPSMP_HDATA_15                                      \
		IOMUX_PAD(0x0558, 0x0188, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__SRC_BT_CFG_1                                        \
		IOMUX_PAD(0x0558, 0x0188, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA1__EPDC_SDLE                                           \
		IOMUX_PAD(0x0558, 0x0188, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA10__WEIM_WEIM_DA_A_10                                  \
		IOMUX_PAD(0x055C, 0x018C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__IPU1_DI1_PIN15                                     \
		IOMUX_PAD(0x055C, 0x018C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__IPU1_CSI1_DATA_EN                                  \
		IOMUX_PAD(0x055C, 0x018C, 2, 0x08B0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__MIPI_CORE_DPHY_TEST_OUT_12                         \
		IOMUX_PAD(0x055C, 0x018C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__GPIO_3_10                                          \
		IOMUX_PAD(0x055C, 0x018C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__TPSMP_HDATA_24                                     \
		IOMUX_PAD(0x055C, 0x018C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__SRC_BT_CFG_10                                      \
		IOMUX_PAD(0x055C, 0x018C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA10__EPDC_SDDO_1                                        \
		IOMUX_PAD(0x055C, 0x018C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA11__WEIM_WEIM_DA_A_11                                  \
		IOMUX_PAD(0x0560, 0x0190, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__IPU1_DI1_PIN2                                      \
		IOMUX_PAD(0x0560, 0x0190, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__IPU1_CSI1_HSYNC                                    \
		IOMUX_PAD(0x0560, 0x0190, 2, 0x08B4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__MIPI_CORE_DPHY_TEST_OUT_13                         \
		IOMUX_PAD(0x0560, 0x0190, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__SDMA_DEBUG_EVT_CHN_LINES_6                         \
		IOMUX_PAD(0x0560, 0x0190, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__GPIO_3_11                                          \
		IOMUX_PAD(0x0560, 0x0190, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__TPSMP_HDATA_25                                     \
		IOMUX_PAD(0x0560, 0x0190, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__SRC_BT_CFG_11                                      \
		IOMUX_PAD(0x0560, 0x0190, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA11__EPDC_SDDO_3                                        \
		IOMUX_PAD(0x0560, 0x0190, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA12__WEIM_WEIM_DA_A_12                                  \
		IOMUX_PAD(0x0564, 0x0194, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__IPU1_DI1_PIN3                                      \
		IOMUX_PAD(0x0564, 0x0194, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__IPU1_CSI1_VSYNC                                    \
		IOMUX_PAD(0x0564, 0x0194, 2, 0x08BC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__MIPI_CORE_DPHY_TEST_OUT_14                         \
		IOMUX_PAD(0x0564, 0x0194, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__SDMA_DEBUG_EVT_CHN_LINES_3                         \
		IOMUX_PAD(0x0564, 0x0194, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__GPIO_3_12                                          \
		IOMUX_PAD(0x0564, 0x0194, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__TPSMP_HDATA_26                                     \
		IOMUX_PAD(0x0564, 0x0194, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__SRC_BT_CFG_12                                      \
		IOMUX_PAD(0x0564, 0x0194, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA12__EPDC_SDDO_2                                        \
		IOMUX_PAD(0x0564, 0x0194, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA13__WEIM_WEIM_DA_A_13                                  \
		IOMUX_PAD(0x0568, 0x0198, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__IPU1_DI1_D0_CS                                     \
		IOMUX_PAD(0x0568, 0x0198, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__CCM_DI1_EXT_CLK                                    \
		IOMUX_PAD(0x0568, 0x0198, 2, 0x07D0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__MIPI_CORE_DPHY_TEST_OUT_15                         \
		IOMUX_PAD(0x0568, 0x0198, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__SDMA_DEBUG_EVT_CHN_LINES_4                         \
		IOMUX_PAD(0x0568, 0x0198, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__GPIO_3_13                                          \
		IOMUX_PAD(0x0568, 0x0198, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__TPSMP_HDATA_27                                     \
		IOMUX_PAD(0x0568, 0x0198, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__SRC_BT_CFG_13                                      \
		IOMUX_PAD(0x0568, 0x0198, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA13__EPDC_SDDO_13                                       \
		IOMUX_PAD(0x0568, 0x0198, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA14__WEIM_WEIM_DA_A_14                                  \
		IOMUX_PAD(0x056C, 0x019C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__IPU1_DI1_D1_CS                                     \
		IOMUX_PAD(0x056C, 0x019C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__CCM_DI0_EXT_CLK                                    \
		IOMUX_PAD(0x056C, 0x019C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__MIPI_CORE_DPHY_TEST_OUT_16                         \
		IOMUX_PAD(0x056C, 0x019C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__SDMA_DEBUG_EVT_CHN_LINES_5                         \
		IOMUX_PAD(0x056C, 0x019C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__GPIO_3_14                                          \
		IOMUX_PAD(0x056C, 0x019C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__TPSMP_HDATA_28                                     \
		IOMUX_PAD(0x056C, 0x019C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__SRC_BT_CFG_14                                      \
		IOMUX_PAD(0x056C, 0x019C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA14__EPDC_SDDO_14                                       \
		IOMUX_PAD(0x056C, 0x019C, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA15__WEIM_WEIM_DA_A_15                                  \
		IOMUX_PAD(0x0570, 0x01A0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__IPU1_DI1_PIN1                                      \
		IOMUX_PAD(0x0570, 0x01A0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__IPU1_DI1_PIN4                                      \
		IOMUX_PAD(0x0570, 0x01A0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__MIPI_CORE_DPHY_TEST_OUT_17                         \
		IOMUX_PAD(0x0570, 0x01A0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__GPIO_3_15                                          \
		IOMUX_PAD(0x0570, 0x01A0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__TPSMP_HDATA_29                                     \
		IOMUX_PAD(0x0570, 0x01A0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__SRC_BT_CFG_15                                      \
		IOMUX_PAD(0x0570, 0x01A0, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA15__EPDC_SDDO_9                                        \
		IOMUX_PAD(0x0570, 0x01A0, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA2__WEIM_WEIM_DA_A_2                                    \
		IOMUX_PAD(0x0574, 0x01A4, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__IPU1_DISP1_DAT_7                                    \
		IOMUX_PAD(0x0574, 0x01A4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__IPU1_CSI1_D_7                                       \
		IOMUX_PAD(0x0574, 0x01A4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__MIPI_CORE_DPHY_TEST_OUT_4                           \
		IOMUX_PAD(0x0574, 0x01A4, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__ANATOP_USBPHY1_TSTI_TX_HS_MODE                      \
		IOMUX_PAD(0x0574, 0x01A4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__GPIO_3_2                                            \
		IOMUX_PAD(0x0574, 0x01A4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__TPSMP_HDATA_16                                      \
		IOMUX_PAD(0x0574, 0x01A4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__SRC_BT_CFG_2                                        \
		IOMUX_PAD(0x0574, 0x01A4, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA2__EPDC_BDR_0                                          \
		IOMUX_PAD(0x0574, 0x01A4, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA3__WEIM_WEIM_DA_A_3                                    \
		IOMUX_PAD(0x0578, 0x01A8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__IPU1_DISP1_DAT_6                                    \
		IOMUX_PAD(0x0578, 0x01A8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__IPU1_CSI1_D_6                                       \
		IOMUX_PAD(0x0578, 0x01A8, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__MIPI_CORE_DPHY_TEST_OUT_5                           \
		IOMUX_PAD(0x0578, 0x01A8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__ANATOP_USBPHY1_TSTI_TX_HIZ                          \
		IOMUX_PAD(0x0578, 0x01A8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__GPIO_3_3                                            \
		IOMUX_PAD(0x0578, 0x01A8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__TPSMP_HDATA_17                                      \
		IOMUX_PAD(0x0578, 0x01A8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__SRC_BT_CFG_3                                        \
		IOMUX_PAD(0x0578, 0x01A8, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA3__EPDC_BDR_1                                          \
		IOMUX_PAD(0x0578, 0x01A8, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA4__WEIM_WEIM_DA_A_4                                    \
		IOMUX_PAD(0x057C, 0x01AC, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__IPU1_DISP1_DAT_5                                    \
		IOMUX_PAD(0x057C, 0x01AC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__IPU1_CSI1_D_5                                       \
		IOMUX_PAD(0x057C, 0x01AC, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__MIPI_CORE_DPHY_TEST_OUT_6                           \
		IOMUX_PAD(0x057C, 0x01AC, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__ANATOP_USBPHY1_TSTI_TX_EN                           \
		IOMUX_PAD(0x057C, 0x01AC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__GPIO_3_4                                            \
		IOMUX_PAD(0x057C, 0x01AC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__TPSMP_HDATA_18                                      \
		IOMUX_PAD(0x057C, 0x01AC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__SRC_BT_CFG_4                                        \
		IOMUX_PAD(0x057C, 0x01AC, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA4__EPDC_SDCE_0                                         \
		IOMUX_PAD(0x057C, 0x01AC, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA5__WEIM_WEIM_DA_A_5                                    \
		IOMUX_PAD(0x0580, 0x01B0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__IPU1_DISP1_DAT_4                                    \
		IOMUX_PAD(0x0580, 0x01B0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__IPU1_CSI1_D_4                                       \
		IOMUX_PAD(0x0580, 0x01B0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__MIPI_CORE_DPHY_TEST_OUT_7                           \
		IOMUX_PAD(0x0580, 0x01B0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__ANATOP_USBPHY1_TSTI_TX_DP                           \
		IOMUX_PAD(0x0580, 0x01B0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__GPIO_3_5                                            \
		IOMUX_PAD(0x0580, 0x01B0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__TPSMP_HDATA_19                                      \
		IOMUX_PAD(0x0580, 0x01B0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__SRC_BT_CFG_5                                        \
		IOMUX_PAD(0x0580, 0x01B0, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA5__EPDC_SDCE_1                                         \
		IOMUX_PAD(0x0580, 0x01B0, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA6__WEIM_WEIM_DA_A_6                                    \
		IOMUX_PAD(0x0584, 0x01B4, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__IPU1_DISP1_DAT_3                                    \
		IOMUX_PAD(0x0584, 0x01B4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__IPU1_CSI1_D_3                                       \
		IOMUX_PAD(0x0584, 0x01B4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__MIPI_CORE_DPHY_TEST_OUT_8                           \
		IOMUX_PAD(0x0584, 0x01B4, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__ANATOP_USBPHY1_TSTI_TX_DN                           \
		IOMUX_PAD(0x0584, 0x01B4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__GPIO_3_6                                            \
		IOMUX_PAD(0x0584, 0x01B4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__TPSMP_HDATA_20                                      \
		IOMUX_PAD(0x0584, 0x01B4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__SRC_BT_CFG_6                                        \
		IOMUX_PAD(0x0584, 0x01B4, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA6__EPDC_SDCE_2                                         \
		IOMUX_PAD(0x0584, 0x01B4, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA7__WEIM_WEIM_DA_A_7                                    \
		IOMUX_PAD(0x0588, 0x01B8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__IPU1_DISP1_DAT_2                                    \
		IOMUX_PAD(0x0588, 0x01B8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__IPU1_CSI1_D_2                                       \
		IOMUX_PAD(0x0588, 0x01B8, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__MIPI_CORE_DPHY_TEST_OUT_9                           \
		IOMUX_PAD(0x0588, 0x01B8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__GPIO_3_7                                            \
		IOMUX_PAD(0x0588, 0x01B8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__TPSMP_HDATA_21                                      \
		IOMUX_PAD(0x0588, 0x01B8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__SRC_BT_CFG_7                                        \
		IOMUX_PAD(0x0588, 0x01B8, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA7__EPDC_SDCE_3                                         \
		IOMUX_PAD(0x0588, 0x01B8, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA8__WEIM_WEIM_DA_A_8                                    \
		IOMUX_PAD(0x058C, 0x01BC, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__IPU1_DISP1_DAT_1                                    \
		IOMUX_PAD(0x058C, 0x01BC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__IPU1_CSI1_D_1                                       \
		IOMUX_PAD(0x058C, 0x01BC, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__MIPI_CORE_DPHY_TEST_OUT_10                          \
		IOMUX_PAD(0x058C, 0x01BC, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__GPIO_3_8                                            \
		IOMUX_PAD(0x058C, 0x01BC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__TPSMP_HDATA_22                                      \
		IOMUX_PAD(0x058C, 0x01BC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__SRC_BT_CFG_8                                        \
		IOMUX_PAD(0x058C, 0x01BC, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA8__EPDC_SDCE_4                                         \
		IOMUX_PAD(0x058C, 0x01BC, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_DA9__WEIM_WEIM_DA_A_9                                    \
		IOMUX_PAD(0x0590, 0x01C0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__IPU1_DISP1_DAT_0                                    \
		IOMUX_PAD(0x0590, 0x01C0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__IPU1_CSI1_D_0                                       \
		IOMUX_PAD(0x0590, 0x01C0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__MIPI_CORE_DPHY_TEST_OUT_11                          \
		IOMUX_PAD(0x0590, 0x01C0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__GPIO_3_9                                            \
		IOMUX_PAD(0x0590, 0x01C0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__TPSMP_HDATA_23                                      \
		IOMUX_PAD(0x0590, 0x01C0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__SRC_BT_CFG_9                                        \
		IOMUX_PAD(0x0590, 0x01C0, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_DA9__EPDC_SDCE_5                                         \
		IOMUX_PAD(0x0590, 0x01C0, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_EB0__WEIM_WEIM_EB_0                                      \
		IOMUX_PAD(0x0594, 0x01C4, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__IPU1_DISP1_DAT_11                                   \
		IOMUX_PAD(0x0594, 0x01C4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__IPU1_CSI1_D_11                                      \
		IOMUX_PAD(0x0594, 0x01C4, 2, 0x088C, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__MIPI_CORE_DPHY_TEST_OUT_0                           \
		IOMUX_PAD(0x0594, 0x01C4, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__CCM_PMIC_RDY                                        \
		IOMUX_PAD(0x0594, 0x01C4, 4, 0x07D4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__GPIO_2_28                                           \
		IOMUX_PAD(0x0594, 0x01C4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__TPSMP_HDATA_12                                      \
		IOMUX_PAD(0x0594, 0x01C4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__SRC_BT_CFG_27                                       \
		IOMUX_PAD(0x0594, 0x01C4, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB0__EPDC_PWRCOM                                         \
		IOMUX_PAD(0x0594, 0x01C4, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_EB1__WEIM_WEIM_EB_1                                      \
		IOMUX_PAD(0x0598, 0x01C8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__IPU1_DISP1_DAT_10                                   \
		IOMUX_PAD(0x0598, 0x01C8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__IPU1_CSI1_D_10                                      \
		IOMUX_PAD(0x0598, 0x01C8, 2, 0x0888, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__MIPI_CORE_DPHY_TEST_OUT_1                           \
		IOMUX_PAD(0x0598, 0x01C8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__GPIO_2_29                                           \
		IOMUX_PAD(0x0598, 0x01C8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__TPSMP_HDATA_13                                      \
		IOMUX_PAD(0x0598, 0x01C8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__SRC_BT_CFG_28                                       \
		IOMUX_PAD(0x0598, 0x01C8, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB1__EPDC_SDSHR                                          \
		IOMUX_PAD(0x0598, 0x01C8, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_EB2__WEIM_WEIM_EB_2                                      \
		IOMUX_PAD(0x059C, 0x01CC, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__ECSPI1_SS0                                          \
		IOMUX_PAD(0x059C, 0x01CC, 1, 0x07E4, 2, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__CCM_DI1_EXT_CLK                                     \
		IOMUX_PAD(0x059C, 0x01CC, 2, 0x07D0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__IPU1_CSI1_D_19                                      \
		IOMUX_PAD(0x059C, 0x01CC, 3, 0x08AC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__HDMI_TX_DDC_SCL                                     \
		IOMUX_PAD(0x059C, 0x01CC, 4, 0x0860, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__GPIO_2_30                                           \
		IOMUX_PAD(0x059C, 0x01CC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__I2C2_SCL                                            \
		IOMUX_PAD(0x059C, 0x01CC, 6 | IOMUX_CONFIG_SION, 0x0870, 0, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__SRC_BT_CFG_30                                       \
		IOMUX_PAD(0x059C, 0x01CC, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB2__EPDC_SDDO_5                                         \
		IOMUX_PAD(0x059C, 0x01CC, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_EB3__WEIM_WEIM_EB_3                                      \
		IOMUX_PAD(0x05A0, 0x01D0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__ECSPI4_RDY                                          \
		IOMUX_PAD(0x05A0, 0x01D0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__UART3_CTS                                           \
		IOMUX_PAD(0x05A0, 0x01D0, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__UART3_RTS                                           \
		IOMUX_PAD(0x05A0, 0x01D0, 2, 0x0908, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__UART1_RI                                            \
		IOMUX_PAD(0x05A0, 0x01D0, 3, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__IPU1_CSI1_HSYNC                                     \
		IOMUX_PAD(0x05A0, 0x01D0, 4, 0x08B4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__GPIO_2_31                                           \
		IOMUX_PAD(0x05A0, 0x01D0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__IPU1_DI1_PIN3                                       \
		IOMUX_PAD(0x05A0, 0x01D0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__SRC_BT_CFG_31                                       \
		IOMUX_PAD(0x05A0, 0x01D0, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__EPDC_SDCE_0                                         \
		IOMUX_PAD(0x05A0, 0x01D0, 8, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_EB3__WEIM_ACLK_FREERUN                                   \
		IOMUX_PAD(0x05A0, 0x01D0, 9, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_LBA__WEIM_WEIM_LBA                                       \
		IOMUX_PAD(0x05A4, 0x01D4, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_LBA__IPU1_DI1_PIN17                                      \
		IOMUX_PAD(0x05A4, 0x01D4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_LBA__ECSPI2_SS1                                          \
		IOMUX_PAD(0x05A4, 0x01D4, 2, 0x0804, 1, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_LBA__GPIO_2_27                                           \
		IOMUX_PAD(0x05A4, 0x01D4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_LBA__TPSMP_HDATA_11                                      \
		IOMUX_PAD(0x05A4, 0x01D4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_LBA__SRC_BT_CFG_26                                       \
		IOMUX_PAD(0x05A4, 0x01D4, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_LBA__EPDC_SDDO_4                                         \
		IOMUX_PAD(0x05A4, 0x01D4, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_OE__WEIM_WEIM_OE                                         \
		IOMUX_PAD(0x05A8, 0x01D8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_OE__IPU1_DI1_PIN7                                        \
		IOMUX_PAD(0x05A8, 0x01D8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_OE__ECSPI2_MISO                                          \
		IOMUX_PAD(0x05A8, 0x01D8, 2, 0x07F8, 2, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_OE__MIPI_CORE_DPHY_TEST_OUT_26                           \
		IOMUX_PAD(0x05A8, 0x01D8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_OE__GPIO_2_25                                            \
		IOMUX_PAD(0x05A8, 0x01D8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_OE__TPSMP_HDATA_9                                        \
		IOMUX_PAD(0x05A8, 0x01D8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_OE__EPDC_PWRIRQ                                          \
		IOMUX_PAD(0x05A8, 0x01D8, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_RW__WEIM_WEIM_RW                                         \
		IOMUX_PAD(0x05AC, 0x01DC, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__IPU1_DI1_PIN8                                        \
		IOMUX_PAD(0x05AC, 0x01DC, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__ECSPI2_SS0                                           \
		IOMUX_PAD(0x05AC, 0x01DC, 2, 0x0800, 2, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__MIPI_CORE_DPHY_TEST_OUT_27                           \
		IOMUX_PAD(0x05AC, 0x01DC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__GPIO_2_26                                            \
		IOMUX_PAD(0x05AC, 0x01DC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__TPSMP_HDATA_10                                       \
		IOMUX_PAD(0x05AC, 0x01DC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__SRC_BT_CFG_29                                        \
		IOMUX_PAD(0x05AC, 0x01DC, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_RW__EPDC_SDDO_7                                          \
		IOMUX_PAD(0x05AC, 0x01DC, 8, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_EIM_WAIT__WEIM_WEIM_WAIT                                     \
		IOMUX_PAD(0x05B0, 0x01E0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_WAIT__WEIM_WEIM_DTACK_B                                  \
		IOMUX_PAD(0x05B0, 0x01E0, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_WAIT__GPIO_5_0                                           \
		IOMUX_PAD(0x05B0, 0x01E0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_WAIT__TPSMP_HDATA_30                                     \
		IOMUX_PAD(0x05B0, 0x01E0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_EIM_WAIT__SRC_BT_CFG_25                                      \
		IOMUX_PAD(0x05B0, 0x01E0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_CRS_DV__ENET_RX_EN                                      \
		IOMUX_PAD(0x05B4, 0x01E4, 1, 0x0828, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_CRS_DV__ESAI1_SCKT                                      \
		IOMUX_PAD(0x05B4, 0x01E4, 2, 0x0840, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_CRS_DV__SPDIF_SPDIF_EXTCLK                              \
		IOMUX_PAD(0x05B4, 0x01E4, 3, 0x08F4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_CRS_DV__GPIO_1_25                                       \
		IOMUX_PAD(0x05B4, 0x01E4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_CRS_DV__PHY_TDO                                         \
		IOMUX_PAD(0x05B4, 0x01E4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_CRS_DV__ANATOP_USBPHY1_TSTO_RX_FS_RXD                   \
		IOMUX_PAD(0x05B4, 0x01E4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_MDC__MLB_MLBDAT                                         \
		IOMUX_PAD(0x05B8, 0x01E8, 0, 0x08E0, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDC__ENET_MDC                                           \
		IOMUX_PAD(0x05B8, 0x01E8, 1, 0x0000, 0,  MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_ENET_MDC__ESAI1_TX5_RX0                                      \
		IOMUX_PAD(0x05B8, 0x01E8, 2, 0x0858, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_MDC__ENET_1588_EVENT1_IN                                \
		IOMUX_PAD(0x05B8, 0x01E8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDC__GPIO_1_31                                          \
		IOMUX_PAD(0x05B8, 0x01E8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDC__ANATOP_USBPHY2_TSTO_RX_DISCON_DET                  \
		IOMUX_PAD(0x05B8, 0x01E8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_MDIO__ENET_MDIO                                         \
		IOMUX_PAD(0x05BC, 0x01EC, 1, 0x0810, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_ENET_MDIO__ESAI1_SCKR                                        \
		IOMUX_PAD(0x05BC, 0x01EC, 2, 0x083C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDIO__SDMA_DEBUG_BUS_DEVICE_3                           \
		IOMUX_PAD(0x05BC, 0x01EC, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDIO__ENET_1588_EVENT1_OUT                              \
		IOMUX_PAD(0x05BC, 0x01EC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDIO__GPIO_1_22                                         \
		IOMUX_PAD(0x05BC, 0x01EC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_MDIO__SPDIF_PLOCK                                       \
		IOMUX_PAD(0x05BC, 0x01EC, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_REF_CLK__ENET_TX_CLK                                    \
		IOMUX_PAD(0x05C0, 0x01F0, 1, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_ENET_REF_CLK__ESAI1_FSR                                      \
		IOMUX_PAD(0x05C0, 0x01F0, 2, 0x082C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_REF_CLK__SDMA_DEBUG_BUS_DEVICE_4                        \
		IOMUX_PAD(0x05C0, 0x01F0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_REF_CLK__GPIO_1_23                                      \
		IOMUX_PAD(0x05C0, 0x01F0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_REF_CLK__SPDIF_SRCLK                                    \
		IOMUX_PAD(0x05C0, 0x01F0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_REF_CLK__ANATOP_USBPHY1_TSTO_RX_SQUELCH                 \
		IOMUX_PAD(0x05C0, 0x01F0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_RX_ER__ANATOP_USBOTG_ID                                 \
		IOMUX_PAD(0x05C4, 0x01F4, 0, 0x0790, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__ENET_RX_ER                                       \
		IOMUX_PAD(0x05C4, 0x01F4, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__ESAI1_HCKR                                       \
		IOMUX_PAD(0x05C4, 0x01F4, 2, 0x0834, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__SPDIF_IN1                                        \
		IOMUX_PAD(0x05C4, 0x01F4, 3, 0x08F0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__ENET_1588_EVENT2_OUT                             \
		IOMUX_PAD(0x05C4, 0x01F4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__GPIO_1_24                                        \
		IOMUX_PAD(0x05C4, 0x01F4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__PHY_TDI                                          \
		IOMUX_PAD(0x05C4, 0x01F4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RX_ER__ANATOP_USBPHY1_TSTO_RX_HS_RXD                    \
		IOMUX_PAD(0x05C4, 0x01F4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_RXD0__OSC32K_32K_OUT                                    \
		IOMUX_PAD(0x05C8, 0x01F8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD0__ENET_RDATA_0                                      \
		IOMUX_PAD(0x05C8, 0x01F8, 1, 0x0818, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD0__ESAI1_HCKT                                        \
		IOMUX_PAD(0x05C8, 0x01F8, 2, 0x0838, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD0__SPDIF_OUT1                                        \
		IOMUX_PAD(0x05C8, 0x01F8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD0__GPIO_1_27                                         \
		IOMUX_PAD(0x05C8, 0x01F8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD0__PHY_TMS                                           \
		IOMUX_PAD(0x05C8, 0x01F8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD0__ANATOP_USBPHY1_TSTO_PLL_CLK20DIV                  \
		IOMUX_PAD(0x05C8, 0x01F8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_RXD1__MLB_MLBSIG                                        \
		IOMUX_PAD(0x05CC, 0x01FC, 0, 0x08E4, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD1__ENET_RDATA_1                                      \
		IOMUX_PAD(0x05CC, 0x01FC, 1, 0x081C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD1__ESAI1_FST                                         \
		IOMUX_PAD(0x05CC, 0x01FC, 2, 0x0830, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD1__ENET_1588_EVENT3_OUT                              \
		IOMUX_PAD(0x05CC, 0x01FC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD1__GPIO_1_26                                         \
		IOMUX_PAD(0x05CC, 0x01FC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD1__PHY_TCK                                           \
		IOMUX_PAD(0x05CC, 0x01FC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_RXD1__ANATOP_USBPHY1_TSTO_RX_DISCON_DET                 \
		IOMUX_PAD(0x05CC, 0x01FC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_TX_EN__ENET_TX_EN                                       \
		IOMUX_PAD(0x05D0, 0x0200, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TX_EN__ESAI1_TX3_RX2                                    \
		IOMUX_PAD(0x05D0, 0x0200, 2, 0x0850, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_TX_EN__GPIO_1_28                                        \
		IOMUX_PAD(0x05D0, 0x0200, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TX_EN__ANATOP_USBPHY2_TSTO_RX_SQUELCH                   \
		IOMUX_PAD(0x05D0, 0x0200, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TX_EN__I2C4_SCL                                         \
		IOMUX_PAD(0x05D0, 0x0200, 9 | IOMUX_CONFIG_SION, 0x0880, 0, MX6DL_I2C_PAD_CTRL)

#define MX6DL_PAD_ENET_TXD0__ENET_TDATA_0                                      \
		IOMUX_PAD(0x05D4, 0x0204, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD0__ESAI1_TX4_RX1                                     \
		IOMUX_PAD(0x05D4, 0x0204, 2, 0x0854, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD0__GPIO_1_30                                         \
		IOMUX_PAD(0x05D4, 0x0204, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD0__ANATOP_USBPHY2_TSTO_RX_FS_RXD                     \
		IOMUX_PAD(0x05D4, 0x0204, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_ENET_TXD1__MLB_MLBCLK                                        \
		IOMUX_PAD(0x05D8, 0x0208, 0, 0x08DC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD1__ENET_TDATA_1                                      \
		IOMUX_PAD(0x05D8, 0x0208, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD1__ESAI1_TX2_RX3                                     \
		IOMUX_PAD(0x05D8, 0x0208, 2, 0x084C, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD1__ENET_1588_EVENT0_IN                               \
		IOMUX_PAD(0x05D8, 0x0208, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD1__GPIO_1_29                                         \
		IOMUX_PAD(0x05D8, 0x0208, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD1__ANATOP_USBPHY2_TSTO_RX_HS_RXD                     \
		IOMUX_PAD(0x05D8, 0x0208, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_ENET_TXD1__I2C4_SDA                                          \
		IOMUX_PAD(0x05D8, 0x0208, 9 | IOMUX_CONFIG_SION, 0x0884, 0, MX6DL_I2C_PAD_CTRL)

#define MX6DL_PAD_GPIO_0__CCM_CLKO                                             \
		IOMUX_PAD(0x05DC, 0x020C, 0, 0x0000, 0, MX6DL_CCM_CLK0_PAD_CTRL)
#define MX6DL_PAD_GPIO_0__KPP_COL_5                                            \
		IOMUX_PAD(0x05DC, 0x020C, 2, 0x08C0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_0__ASRC_ASRC_EXT_CLK                                    \
		IOMUX_PAD(0x05DC, 0x020C, 3, 0x0794, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_0__EPIT1_EPITO                                          \
		IOMUX_PAD(0x05DC, 0x020C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_0__GPIO_1_0                                             \
		IOMUX_PAD(0x05DC, 0x020C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_0__USBOH3_USBH1_PWR                                     \
		IOMUX_PAD(0x05DC, 0x020C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_0__SNVS_HP_WRAPPER_SNVS_VIO_5                           \
		IOMUX_PAD(0x05DC, 0x020C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_1__ESAI1_SCKR                                           \
		IOMUX_PAD(0x05E0, 0x0210, 0, 0x083C, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__WDOG2_WDOG_B                                         \
		IOMUX_PAD(0x05E0, 0x0210, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__KPP_ROW_5                                            \
		IOMUX_PAD(0x05E0, 0x0210, 2, 0x08CC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__USBOTG_ID                                     \
		IOMUX_PAD(0x05E0, 0x0210, 3, 0x0790, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__PWM2_PWMO                                            \
		IOMUX_PAD(0x05E0, 0x0210, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__GPIO_1_1                                             \
		IOMUX_PAD(0x05E0, 0x0210, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__USDHC1_CD                                            \
		IOMUX_PAD(0x05E0, 0x0210, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_1__SRC_TESTER_ACK                                       \
		IOMUX_PAD(0x05E0, 0x0210, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_16__ESAI1_TX3_RX2                                       \
		IOMUX_PAD(0x05E4, 0x0214, 0, 0x0850, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__ENET_1588_EVENT2_IN                                 \
		IOMUX_PAD(0x05E4, 0x0214, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__ENET_ANATOP_ETHERNET_REF_OUT                        \
		IOMUX_PAD(0x05E4, 0x0214, 2, 0x080C, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__USDHC1_LCTL                                         \
		IOMUX_PAD(0x05E4, 0x0214, 3, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__SPDIF_IN1                                           \
		IOMUX_PAD(0x05E4, 0x0214, 4, 0x08F0, 2, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__GPIO_7_11                                           \
		IOMUX_PAD(0x05E4, 0x0214, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__I2C3_SDA                                            \
		IOMUX_PAD(0x05E4, 0x0214, 6 | IOMUX_CONFIG_SION, 0x087C, 1, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_GPIO_16__SJC_DE_B                                            \
		IOMUX_PAD(0x05E4, 0x0214, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_17__ESAI1_TX0                                           \
		IOMUX_PAD(0x05E8, 0x0218, 0, 0x0844, 0, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_GPIO_17__ENET_1588_EVENT3_IN                                 \
		IOMUX_PAD(0x05E8, 0x0218, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_17__CCM_PMIC_RDY                                        \
		IOMUX_PAD(0x05E8, 0x0218, 2, 0x07D4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_17__SDMA_SDMA_EXT_EVENT_0                               \
		IOMUX_PAD(0x05E8, 0x0218, 3, 0x08E8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_17__SPDIF_OUT1                                          \
		IOMUX_PAD(0x05E8, 0x0218, 4, 0x0000, 0, MX6DL_SPDIF_OUT_PAD_CTRL)
#define MX6DL_PAD_GPIO_17__GPIO_7_12                                           \
		IOMUX_PAD(0x05E8, 0x0218, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_17__SJC_JTAG_ACT                                        \
		IOMUX_PAD(0x05E8, 0x0218, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_18__ESAI1_TX1                                           \
		IOMUX_PAD(0x05EC, 0x021C, 0, 0x0848, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__ENET_RX_CLK                                         \
		IOMUX_PAD(0x05EC, 0x021C, 1, 0x0814, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__USDHC3_VSELECT                                      \
		IOMUX_PAD(0x05EC, 0x021C, 2, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__SDMA_SDMA_EXT_EVENT_1                               \
		IOMUX_PAD(0x05EC, 0x021C, 3, 0x08EC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__ASRC_ASRC_EXT_CLK                                   \
		IOMUX_PAD(0x05EC, 0x021C, 4, 0x0794, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__GPIO_7_13                                           \
		IOMUX_PAD(0x05EC, 0x021C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__SNVS_HP_WRAPPER_SNVS_VIO_5_CTL                      \
		IOMUX_PAD(0x05EC, 0x021C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_18__SRC_SYSTEM_RST                                      \
		IOMUX_PAD(0x05EC, 0x021C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_19__KPP_COL_5                                           \
		IOMUX_PAD(0x05F0, 0x0220, 0, 0x08C0, 2, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__ENET_1588_EVENT0_OUT                                \
		IOMUX_PAD(0x05F0, 0x0220, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__SPDIF_OUT1                                          \
		IOMUX_PAD(0x05F0, 0x0220, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__CCM_CLKO                                            \
		IOMUX_PAD(0x05F0, 0x0220, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__ECSPI1_RDY                                          \
		IOMUX_PAD(0x05F0, 0x0220, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__GPIO_4_5                                            \
		IOMUX_PAD(0x05F0, 0x0220, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__ENET_TX_ER                                          \
		IOMUX_PAD(0x05F0, 0x0220, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_19__SRC_INT_BOOT                                        \
		IOMUX_PAD(0x05F0, 0x0220, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_2__ESAI1_FST                                            \
		IOMUX_PAD(0x05F4, 0x0224, 0, 0x0830, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__OBSERVE_MUX_OBSRV_INT_OUT2                           \
		IOMUX_PAD(0x05F4, 0x0224, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__KPP_ROW_6                                            \
		IOMUX_PAD(0x05F4, 0x0224, 2, 0x08D0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__CCM_CCM_OUT_1                                        \
		IOMUX_PAD(0x05F4, 0x0224, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__CSU_CSU_ALARM_AUT_0                                  \
		IOMUX_PAD(0x05F4, 0x0224, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__GPIO_1_2                                             \
		IOMUX_PAD(0x05F4, 0x0224, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__USDHC2_WP                                            \
		IOMUX_PAD(0x05F4, 0x0224, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_2__MLB_MLBDAT                                           \
		IOMUX_PAD(0x05F4, 0x0224, 7, 0x08E0, 1, MX6DL_MLB150_PAD_CTRL)

#define MX6DL_PAD_GPIO_3__ESAI1_HCKR                                           \
		IOMUX_PAD(0x05F8, 0x0228, 0, 0x0834, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__OBSERVE_MUX_OBSRV_INT_OUT0                           \
		IOMUX_PAD(0x05F8, 0x0228, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__I2C3_SCL                                             \
		IOMUX_PAD(0x05F8, 0x0228, 2 | IOMUX_CONFIG_SION, 0x0878, 1, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__ANATOP_ANATOP_24M_OUT                                \
		IOMUX_PAD(0x05F8, 0x0228, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__CCM_CLKO2                                            \
		IOMUX_PAD(0x05F8, 0x0228, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__GPIO_1_3                                             \
		IOMUX_PAD(0x05F8, 0x0228, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__USBOH3_USBH1_OC                                      \
		IOMUX_PAD(0x05F8, 0x0228, 6, 0x0924, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_3__MLB_MLBCLK                                           \
		IOMUX_PAD(0x05F8, 0x0228, 7, 0x08DC, 1, MX6DL_MLB150_PAD_CTRL)

#define MX6DL_PAD_GPIO_4__ESAI1_HCKT                                           \
		IOMUX_PAD(0x05FC, 0x022C, 0, 0x0838, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__OBSERVE_MUX_OBSRV_INT_OUT3                           \
		IOMUX_PAD(0x05FC, 0x022C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__KPP_COL_7                                            \
		IOMUX_PAD(0x05FC, 0x022C, 2, 0x08C8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__CCM_CCM_OUT_2                                        \
		IOMUX_PAD(0x05FC, 0x022C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__CSU_CSU_ALARM_AUT_1                                  \
		IOMUX_PAD(0x05FC, 0x022C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__GPIO_1_4                                             \
		IOMUX_PAD(0x05FC, 0x022C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__USDHC2_CD                                            \
		IOMUX_PAD(0x05FC, 0x022C, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_4__OCOTP_CTRL_WRAPPER_FUSE_LATCHED                      \
		IOMUX_PAD(0x05FC, 0x022C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_5__ESAI1_TX2_RX3                                        \
		IOMUX_PAD(0x0600, 0x0230, 0, 0x084C, 1, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__OBSERVE_MUX_OBSRV_INT_OUT4                           \
		IOMUX_PAD(0x0600, 0x0230, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__KPP_ROW_7                                            \
		IOMUX_PAD(0x0600, 0x0230, 2, 0x08D4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__CCM_CLKO                                             \
		IOMUX_PAD(0x0600, 0x0230, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__CSU_CSU_ALARM_AUT_2                                  \
		IOMUX_PAD(0x0600, 0x0230, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__GPIO_1_5                                             \
		IOMUX_PAD(0x0600, 0x0230, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__I2C3_SCL                                             \
		IOMUX_PAD(0x0600, 0x0230, 6 | IOMUX_CONFIG_SION, 0x0878, 2, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_GPIO_5__SIMBA_EVENTI                                         \
		IOMUX_PAD(0x0600, 0x0230, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_GPIO_6__ESAI1_SCKT                                           \
		IOMUX_PAD(0x0604, 0x0234, 0, 0x0840, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__OBSERVE_MUX_OBSRV_INT_OUT1                           \
		IOMUX_PAD(0x0604, 0x0234, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__I2C3_SDA                                             \
		IOMUX_PAD(0x0604, 0x0234, 2 | IOMUX_CONFIG_SION, 0x087C, 2, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__CCM_CCM_OUT_0                                        \
		IOMUX_PAD(0x0604, 0x0234, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__CSU_CSU_INT_DEB                                      \
		IOMUX_PAD(0x0604, 0x0234, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__GPIO_1_6                                             \
		IOMUX_PAD(0x0604, 0x0234, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__USDHC2_LCTL                                          \
		IOMUX_PAD(0x0604, 0x0234, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_6__MLB_MLBSIG                                           \
		IOMUX_PAD(0x0604, 0x0234, 7, 0x08E4, 1, MX6DL_MLB150_PAD_CTRL)

#define MX6DL_PAD_GPIO_7__ESAI1_TX4_RX1                                        \
		IOMUX_PAD(0x0608, 0x0238, 0, 0x0854, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__EPIT1_EPITO                                          \
		IOMUX_PAD(0x0608, 0x0238, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__CAN1_TXCAN                                           \
		IOMUX_PAD(0x0608, 0x0238, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__UART2_TXD                                            \
		IOMUX_PAD(0x0608, 0x0238, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__UART2_RXD                                            \
		IOMUX_PAD(0x0608, 0x0238, 4, 0x0904, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__GPIO_1_7                                             \
		IOMUX_PAD(0x0608, 0x0238, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__SPDIF_PLOCK                                          \
		IOMUX_PAD(0x0608, 0x0238, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__USBOH3_OTGUSB_HOST_MODE                              \
		IOMUX_PAD(0x0608, 0x0238, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_7__I2C4_SCL                                             \
		IOMUX_PAD(0x0608, 0x0238, 8 | IOMUX_CONFIG_SION, 0x0880, 1, MX6DL_I2C_PAD_CTRL)

#define MX6DL_PAD_GPIO_8__ESAI1_TX5_RX0                                        \
		IOMUX_PAD(0x060C, 0x023C, 0, 0x0858, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__ANATOP_ANATOP_32K_OUT                                \
		IOMUX_PAD(0x060C, 0x023C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__EPIT2_EPITO                                          \
		IOMUX_PAD(0x060C, 0x023C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__CAN1_RXCAN                                           \
		IOMUX_PAD(0x060C, 0x023C, 3, 0x07C8, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__UART2_TXD                                            \
		IOMUX_PAD(0x060C, 0x023C, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__UART2_RXD                                            \
		IOMUX_PAD(0x060C, 0x023C, 4, 0x0904, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__GPIO_1_8                                             \
		IOMUX_PAD(0x060C, 0x023C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__SPDIF_SRCLK                                          \
		IOMUX_PAD(0x060C, 0x023C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__USBOH3_OTGUSB_PWRCTL_WAKEUP                          \
		IOMUX_PAD(0x060C, 0x023C, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_8__I2C4_SDA                                             \
		IOMUX_PAD(0x060C, 0x023C, 8 | IOMUX_CONFIG_SION, 0x0884, 1, MX6DL_I2C_PAD_CTRL)

#define MX6DL_PAD_GPIO_9__ESAI1_FSR                                            \
		IOMUX_PAD(0x0610, 0x0240, 0, 0x082C, 1, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__WDOG1_WDOG_B                                         \
		IOMUX_PAD(0x0610, 0x0240, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__KPP_COL_6                                            \
		IOMUX_PAD(0x0610, 0x0240, 2, 0x08C4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__CCM_REF_EN_B                                         \
		IOMUX_PAD(0x0610, 0x0240, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__PWM1_PWMO                                            \
		IOMUX_PAD(0x0610, 0x0240, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__GPIO_1_9                                             \
		IOMUX_PAD(0x0610, 0x0240, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__USDHC1_WP                                            \
		IOMUX_PAD(0x0610, 0x0240, 6, 0x092C, 1, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_GPIO_9__SRC_EARLY_RST                                        \
		IOMUX_PAD(0x0610, 0x0240, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_JTAG_MOD__SJC_MOD                                            \
		IOMUX_PAD(0x0614, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_JTAG_TCK__SJC_TCK                                            \
		IOMUX_PAD(0x0618, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_JTAG_TDI__SJC_TDI                                            \
		IOMUX_PAD(0x061C, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_JTAG_TDO__SJC_TDO                                            \
		IOMUX_PAD(0x0620, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_JTAG_TMS__SJC_TMS                                            \
		IOMUX_PAD(0x0624, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_JTAG_TRSTB__SJC_TRSTB                                        \
		IOMUX_PAD(0x0628, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_COL0__ECSPI1_SCLK                                        \
		IOMUX_PAD(0x062C, 0x0244, 0, 0x07D8, 3, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__ENET_RDATA_3                                       \
		IOMUX_PAD(0x062C, 0x0244, 1, 0x0824, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__AUDMUX_AUD5_TXC                                    \
		IOMUX_PAD(0x062C, 0x0244, 2, 0x07C0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__KPP_COL_0                                          \
		IOMUX_PAD(0x062C, 0x0244, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__UART4_TXD                                          \
		IOMUX_PAD(0x062C, 0x0244, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__UART4_RXD                                          \
		IOMUX_PAD(0x062C, 0x0244, 4, 0x0914, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__GPIO_4_6                                           \
		IOMUX_PAD(0x062C, 0x0244, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__DCIC1_DCIC_OUT                                     \
		IOMUX_PAD(0x062C, 0x0244, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL0__SRC_ANY_PU_RST                                     \
		IOMUX_PAD(0x062C, 0x0244, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_COL1__ECSPI1_MISO                                        \
		IOMUX_PAD(0x0630, 0x0248, 0, 0x07DC, 3, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__ENET_MDIO                                          \
		IOMUX_PAD(0x0630, 0x0248, 1, 0x0810, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__AUDMUX_AUD5_TXFS                                   \
		IOMUX_PAD(0x0630, 0x0248, 2, 0x07C4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__KPP_COL_1                                          \
		IOMUX_PAD(0x0630, 0x0248, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__UART5_TXD                                          \
		IOMUX_PAD(0x0630, 0x0248, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__UART5_RXD                                          \
		IOMUX_PAD(0x0630, 0x0248, 4, 0x091C, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__GPIO_4_8                                           \
		IOMUX_PAD(0x0630, 0x0248, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__USDHC1_VSELECT                                     \
		IOMUX_PAD(0x0630, 0x0248, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_KEY_COL1__PL301_SIM_MX6DL_PER1_HADDR_1                       \
		IOMUX_PAD(0x0630, 0x0248, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_COL2__ECSPI1_SS1                                         \
		IOMUX_PAD(0x0634, 0x024C, 0, 0x07E8, 2, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__ENET_RDATA_2                                       \
		IOMUX_PAD(0x0634, 0x024C, 1, 0x0820, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__CAN1_TXCAN                                         \
		IOMUX_PAD(0x0634, 0x024C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__KPP_COL_2                                          \
		IOMUX_PAD(0x0634, 0x024C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__ENET_MDC                                           \
		IOMUX_PAD(0x0634, 0x024C, 4, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__GPIO_4_10                                          \
		IOMUX_PAD(0x0634, 0x024C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__USBOH3_H1USB_PWRCTL_WAKEUP                         \
		IOMUX_PAD(0x0634, 0x024C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL2__PL301_SIM_MX6DL_PER1_HADDR_3                       \
		IOMUX_PAD(0x0634, 0x024C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_COL3__ECSPI1_SS3                                         \
		IOMUX_PAD(0x0638, 0x0250, 0, 0x07F0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__ENET_CRS                                           \
		IOMUX_PAD(0x0638, 0x0250, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__HDMI_TX_DDC_SCL                                    \
		IOMUX_PAD(0x0638, 0x0250, 2, 0x0860, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__KPP_COL_3                                          \
		IOMUX_PAD(0x0638, 0x0250, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__I2C2_SCL                                           \
		IOMUX_PAD(0x0638, 0x0250, 4 | IOMUX_CONFIG_SION, 0x0870, 1, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__GPIO_4_12                                          \
		IOMUX_PAD(0x0638, 0x0250, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__SPDIF_IN1                                          \
		IOMUX_PAD(0x0638, 0x0250, 6, 0x08F0, 3, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL3__PL301_SIM_MX6DL_PER1_HADDR_5                       \
		IOMUX_PAD(0x0638, 0x0250, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_COL4__CAN2_TXCAN                                         \
		IOMUX_PAD(0x063C, 0x0254, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__IPU1_SISG_4                                        \
		IOMUX_PAD(0x063C, 0x0254, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__USBOH3_USBOTG_OC                                   \
		IOMUX_PAD(0x063C, 0x0254, 2, 0x0920, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__KPP_COL_4                                          \
		IOMUX_PAD(0x063C, 0x0254, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__UART5_CTS                                          \
		IOMUX_PAD(0x063C, 0x0254, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__UART5_RTS                                          \
		IOMUX_PAD(0x063C, 0x0254, 4, 0x0918, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__GPIO_4_14                                          \
		IOMUX_PAD(0x063C, 0x0254, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__MMDC_MMDC_DEBUG_49                                 \
		IOMUX_PAD(0x063C, 0x0254, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_COL4__PL301_SIM_MX6DL_PER1_HADDR_7                       \
		IOMUX_PAD(0x063C, 0x0254, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_ROW0__ECSPI1_MOSI                                        \
		IOMUX_PAD(0x0640, 0x0258, 0, 0x07E0, 3, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__ENET_TDATA_3                                       \
		IOMUX_PAD(0x0640, 0x0258, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__AUDMUX_AUD5_TXD                                    \
		IOMUX_PAD(0x0640, 0x0258, 2, 0x07B4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__KPP_ROW_0                                          \
		IOMUX_PAD(0x0640, 0x0258, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__UART4_TXD                                          \
		IOMUX_PAD(0x0640, 0x0258, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__UART4_RXD                                          \
		IOMUX_PAD(0x0640, 0x0258, 4, 0x0914, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__GPIO_4_7                                           \
		IOMUX_PAD(0x0640, 0x0258, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__DCIC2_DCIC_OUT                                     \
		IOMUX_PAD(0x0640, 0x0258, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW0__PL301_SIM_MX6DL_PER1_HADDR_0                       \
		IOMUX_PAD(0x0640, 0x0258, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_ROW1__ECSPI1_SS0                                         \
		IOMUX_PAD(0x0644, 0x025C, 0, 0x07E4, 3, MX6DL_ECSPI_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__ENET_COL                                           \
		IOMUX_PAD(0x0644, 0x025C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__AUDMUX_AUD5_RXD                                    \
		IOMUX_PAD(0x0644, 0x025C, 2, 0x07B0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__KPP_ROW_1                                          \
		IOMUX_PAD(0x0644, 0x025C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__UART5_TXD                                          \
		IOMUX_PAD(0x0644, 0x025C, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__UART5_RXD                                          \
		IOMUX_PAD(0x0644, 0x025C, 4, 0x091C, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__GPIO_4_9                                           \
		IOMUX_PAD(0x0644, 0x025C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__USDHC2_VSELECT                                     \
		IOMUX_PAD(0x0644, 0x025C, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW1__PL301_SIM_MX6DL_PER1_HADDR_2                       \
		IOMUX_PAD(0x0644, 0x025C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_ROW2__ECSPI1_SS2                                         \
		IOMUX_PAD(0x0648, 0x0260, 0, 0x07EC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__ENET_TDATA_2                                       \
		IOMUX_PAD(0x0648, 0x0260, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__CAN1_RXCAN                                         \
		IOMUX_PAD(0x0648, 0x0260, 2, 0x07C8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__KPP_ROW_2                                          \
		IOMUX_PAD(0x0648, 0x0260, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__USDHC2_VSELECT                                     \
		IOMUX_PAD(0x0648, 0x0260, 4, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__GPIO_4_11                                          \
		IOMUX_PAD(0x0648, 0x0260, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__HDMI_TX_CEC_LINE                                   \
		IOMUX_PAD(0x0648, 0x0260, 6, 0x085C, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW2__PL301_SIM_MX6DL_PER1_HADDR_4                       \
		IOMUX_PAD(0x0648, 0x0260, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_ROW3__OSC32K_32K_OUT                                     \
		IOMUX_PAD(0x064C, 0x0264, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__ASRC_ASRC_EXT_CLK                                  \
		IOMUX_PAD(0x064C, 0x0264, 1, 0x0794, 2, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__HDMI_TX_DDC_SDA                                    \
		IOMUX_PAD(0x064C, 0x0264, 2, 0x0864, 1, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__KPP_ROW_3                                          \
		IOMUX_PAD(0x064C, 0x0264, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__I2C2_SDA                                           \
		IOMUX_PAD(0x064C, 0x0264, 4 | IOMUX_CONFIG_SION, 0x0874, 1, MX6DL_I2C_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__GPIO_4_13                                          \
		IOMUX_PAD(0x064C, 0x0264, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__USDHC1_VSELECT                                     \
		IOMUX_PAD(0x064C, 0x0264, 6, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW3__PL301_SIM_MX6DL_PER1_HADDR_6                       \
		IOMUX_PAD(0x064C, 0x0264, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_KEY_ROW4__CAN2_RXCAN                                         \
		IOMUX_PAD(0x0650, 0x0268, 0, 0x07CC, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__IPU1_SISG_5                                        \
		IOMUX_PAD(0x0650, 0x0268, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__USBOH3_USBOTG_PWR                                  \
		IOMUX_PAD(0x0650, 0x0268, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__KPP_ROW_4                                          \
		IOMUX_PAD(0x0650, 0x0268, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__UART5_CTS                                          \
		IOMUX_PAD(0x0650, 0x0268, 4, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__UART5_RTS                                         \
		IOMUX_PAD(0x0650, 0x0268, 4, 0x0918, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__GPIO_4_15                                          \
		IOMUX_PAD(0x0650, 0x0268, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__MMDC_MMDC_DEBUG_50                                 \
		IOMUX_PAD(0x0650, 0x0268, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_KEY_ROW4__PL301_SIM_MX6DL_PER1_HADDR_8                       \
		IOMUX_PAD(0x0650, 0x0268, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS0_CLK_P__LDB_LVDS0_CLK                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS0_TX0_P__LDB_LVDS0_TX0                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS0_TX1_P__LDB_LVDS0_TX1                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS0_TX2_P__LDB_LVDS0_TX2                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS0_TX3_P__LDB_LVDS0_TX3                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS1_CLK_P__LDB_LVDS1_CLK                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS1_TX0_P__LDB_LVDS1_TX0                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS1_TX1_P__LDB_LVDS1_TX1                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS1_TX2_P__LDB_LVDS1_TX2                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_LVDS1_TX3_P__LDB_LVDS1_TX3                                   \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_ALE__RAWNAND_ALE                                       \
		IOMUX_PAD(0x0654, 0x026C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__USDHC4_RST                                        \
		IOMUX_PAD(0x0654, 0x026C, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__PCIE_CTRL_DIAG_STATUS_BUS_MUX_0                   \
		IOMUX_PAD(0x0654, 0x026C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__USBOH3_UH3_DFD_OUT_12                             \
		IOMUX_PAD(0x0654, 0x026C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__USBOH3_UH2_DFD_OUT_12                             \
		IOMUX_PAD(0x0654, 0x026C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__GPIO_6_8                                          \
		IOMUX_PAD(0x0654, 0x026C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__MIPI_CORE_DPHY_TEST_IN_24                         \
		IOMUX_PAD(0x0654, 0x026C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_ALE__USDHC3_CLKI                                       \
		IOMUX_PAD(0x0654, 0x026C, 8, 0x0934, 0, MX6DL_USDHC_PAD_CTRL)

#define MX6DL_PAD_NANDF_CLE__RAWNAND_CLE                                       \
		IOMUX_PAD(0x0658, 0x0270, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_CLE__PCIE_CTRL_DIAG_STATUS_BUS_MUX_31                  \
		IOMUX_PAD(0x0658, 0x0270, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CLE__USBOH3_UH3_DFD_OUT_11                             \
		IOMUX_PAD(0x0658, 0x0270, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CLE__USBOH3_UH2_DFD_OUT_11                             \
		IOMUX_PAD(0x0658, 0x0270, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CLE__GPIO_6_7                                          \
		IOMUX_PAD(0x0658, 0x0270, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CLE__MIPI_CORE_DPHY_TEST_IN_23                         \
		IOMUX_PAD(0x0658, 0x0270, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CLE__USDHC3_CLKO                                       \
		IOMUX_PAD(0x0658, 0x0270, 8, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)

#define MX6DL_PAD_NANDF_CS0__RAWNAND_CE0N                                      \
		IOMUX_PAD(0x065C, 0x0274, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_CS0__USBOH3_UH3_DFD_OUT_15                             \
		IOMUX_PAD(0x065C, 0x0274, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS0__USBOH3_UH2_DFD_OUT_15                             \
		IOMUX_PAD(0x065C, 0x0274, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS0__GPIO_6_11                                         \
		IOMUX_PAD(0x065C, 0x0274, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS0__USDHC1_CLKO                                       \
		IOMUX_PAD(0x065C, 0x0274, 8, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)

#define MX6DL_PAD_NANDF_CS1__RAWNAND_CE1N                                      \
		IOMUX_PAD(0x0660, 0x0278, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_CS1__USDHC4_VSELECT                                    \
		IOMUX_PAD(0x0660, 0x0278, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS1__USDHC3_VSELECT                                    \
		IOMUX_PAD(0x0660, 0x0278, 2, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS1__PCIE_CTRL_DIAG_STATUS_BUS_MUX_3                   \
		IOMUX_PAD(0x0660, 0x0278, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS1__GPIO_6_14                                         \
		IOMUX_PAD(0x0660, 0x0278, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS1__PL301_SIM_MX6DL_PER1_HREADYOUT                    \
		IOMUX_PAD(0x0660, 0x0278, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS1__USDHC1_CLKI                                       \
		IOMUX_PAD(0x0660, 0x0278, 8, 0x0928, 0, MX6DL_USDHC_PAD_CTRL)

#define MX6DL_PAD_NANDF_CS2__RAWNAND_CE2N                                      \
		IOMUX_PAD(0x0664, 0x027C, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_CS2__IPU1_SISG_0                                       \
		IOMUX_PAD(0x0664, 0x027C, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS2__ESAI1_TX0                                         \
		IOMUX_PAD(0x0664, 0x027C, 2, 0x0844, 1, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS2__WEIM_WEIM_CRE                                     \
		IOMUX_PAD(0x0664, 0x027C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS2__CCM_CLKO2                                         \
		IOMUX_PAD(0x0664, 0x027C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS2__GPIO_6_15                                         \
		IOMUX_PAD(0x0664, 0x027C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS2__USDHC2_CLKO                                       \
		IOMUX_PAD(0x0664, 0x027C, 8, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)

#define MX6DL_PAD_NANDF_CS3__RAWNAND_CE3N                                      \
		IOMUX_PAD(0x0668, 0x0280, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_CS3__IPU1_SISG_1                                       \
		IOMUX_PAD(0x0668, 0x0280, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__ESAI1_TX1                                         \
		IOMUX_PAD(0x0668, 0x0280, 2, 0x0848, 1, MX6DL_ESAI_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__WEIM_WEIM_A_26                                    \
		IOMUX_PAD(0x0668, 0x0280, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__PCIE_CTRL_DIAG_STATUS_BUS_MUX_4                   \
		IOMUX_PAD(0x0668, 0x0280, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__GPIO_6_16                                         \
		IOMUX_PAD(0x0668, 0x0280, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__TPSMP_CLK                                         \
		IOMUX_PAD(0x0668, 0x0280, 7, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__USDHC2_CLKI                                       \
		IOMUX_PAD(0x0668, 0x0280, 8, 0x0930, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_CS3__I2C4_SDA                                          \
		IOMUX_PAD(0x0668, 0x0280, 9 | IOMUX_CONFIG_SION, 0x0884, 2, MX6DL_I2C_PAD_CTRL)

#define MX6DL_PAD_NANDF_D0__RAWNAND_D0                                         \
		IOMUX_PAD(0x066C, 0x0284, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D0__USDHC1_DAT4                                        \
		IOMUX_PAD(0x066C, 0x0284, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D0__GPU3D_GPU_DEBUG_OUT_0                              \
		IOMUX_PAD(0x066C, 0x0284, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D0__USBOH3_UH2_DFD_OUT_16                              \
		IOMUX_PAD(0x066C, 0x0284, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D0__USBOH3_UH3_DFD_OUT_16                              \
		IOMUX_PAD(0x066C, 0x0284, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D0__GPIO_2_0                                           \
		IOMUX_PAD(0x066C, 0x0284, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D0__IPU1_IPU_DIAG_BUS_0                                \
		IOMUX_PAD(0x066C, 0x0284, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D1__RAWNAND_D1                                         \
		IOMUX_PAD(0x0670, 0x0288, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D1__USDHC1_DAT5                                        \
		IOMUX_PAD(0x0670, 0x0288, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D1__GPU3D_GPU_DEBUG_OUT_1                              \
		IOMUX_PAD(0x0670, 0x0288, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D1__USBOH3_UH2_DFD_OUT_17                              \
		IOMUX_PAD(0x0670, 0x0288, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D1__USBOH3_UH3_DFD_OUT_17                              \
		IOMUX_PAD(0x0670, 0x0288, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D1__GPIO_2_1                                           \
		IOMUX_PAD(0x0670, 0x0288, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D1__IPU1_IPU_DIAG_BUS_1                                \
		IOMUX_PAD(0x0670, 0x0288, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D2__RAWNAND_D2                                         \
		IOMUX_PAD(0x0674, 0x028C, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D2__USDHC1_DAT6                                        \
		IOMUX_PAD(0x0674, 0x028C, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D2__GPU3D_GPU_DEBUG_OUT_2                              \
		IOMUX_PAD(0x0674, 0x028C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D2__USBOH3_UH2_DFD_OUT_18                              \
		IOMUX_PAD(0x0674, 0x028C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D2__USBOH3_UH3_DFD_OUT_18                              \
		IOMUX_PAD(0x0674, 0x028C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D2__GPIO_2_2                                           \
		IOMUX_PAD(0x0674, 0x028C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D2__IPU1_IPU_DIAG_BUS_2                                \
		IOMUX_PAD(0x0674, 0x028C, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D3__RAWNAND_D3                                         \
		IOMUX_PAD(0x0678, 0x0290, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D3__USDHC1_DAT7                                        \
		IOMUX_PAD(0x0678, 0x0290, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D3__GPU3D_GPU_DEBUG_OUT_3                              \
		IOMUX_PAD(0x0678, 0x0290, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D3__USBOH3_UH2_DFD_OUT_19                              \
		IOMUX_PAD(0x0678, 0x0290, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D3__USBOH3_UH3_DFD_OUT_19                              \
		IOMUX_PAD(0x0678, 0x0290, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D3__GPIO_2_3                                           \
		IOMUX_PAD(0x0678, 0x0290, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D3__IPU1_IPU_DIAG_BUS_3                                \
		IOMUX_PAD(0x0678, 0x0290, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D4__RAWNAND_D4                                         \
		IOMUX_PAD(0x067C, 0x0294, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D4__USDHC2_DAT4                                        \
		IOMUX_PAD(0x067C, 0x0294, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D4__GPU3D_GPU_DEBUG_OUT_4                              \
		IOMUX_PAD(0x067C, 0x0294, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D4__USBOH3_UH2_DFD_OUT_20                              \
		IOMUX_PAD(0x067C, 0x0294, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D4__USBOH3_UH3_DFD_OUT_20                              \
		IOMUX_PAD(0x067C, 0x0294, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D4__GPIO_2_4                                           \
		IOMUX_PAD(0x067C, 0x0294, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D4__IPU1_IPU_DIAG_BUS_4                                \
		IOMUX_PAD(0x067C, 0x0294, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D5__RAWNAND_D5                                         \
		IOMUX_PAD(0x0680, 0x0298, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D5__USDHC2_DAT5                                        \
		IOMUX_PAD(0x0680, 0x0298, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D5__GPU3D_GPU_DEBUG_OUT_5                              \
		IOMUX_PAD(0x0680, 0x0298, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D5__USBOH3_UH2_DFD_OUT_21                              \
		IOMUX_PAD(0x0680, 0x0298, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D5__USBOH3_UH3_DFD_OUT_21                              \
		IOMUX_PAD(0x0680, 0x0298, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D5__GPIO_2_5                                           \
		IOMUX_PAD(0x0680, 0x0298, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D5__IPU1_IPU_DIAG_BUS_5                                \
		IOMUX_PAD(0x0680, 0x0298, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D6__RAWNAND_D6                                         \
		IOMUX_PAD(0x0684, 0x029C, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D6__USDHC2_DAT6                                        \
		IOMUX_PAD(0x0684, 0x029C, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D6__GPU3D_GPU_DEBUG_OUT_6                              \
		IOMUX_PAD(0x0684, 0x029C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D6__USBOH3_UH2_DFD_OUT_22                              \
		IOMUX_PAD(0x0684, 0x029C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D6__USBOH3_UH3_DFD_OUT_22                              \
		IOMUX_PAD(0x0684, 0x029C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D6__GPIO_2_6                                           \
		IOMUX_PAD(0x0684, 0x029C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D6__IPU1_IPU_DIAG_BUS_6                                \
		IOMUX_PAD(0x0684, 0x029C, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_D7__RAWNAND_D7                                         \
		IOMUX_PAD(0x0688, 0x02A0, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_D7__USDHC2_DAT7                                        \
		IOMUX_PAD(0x0688, 0x02A0, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_D7__GPU3D_GPU_DEBUG_OUT_7                              \
		IOMUX_PAD(0x0688, 0x02A0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D7__USBOH3_UH2_DFD_OUT_23                              \
		IOMUX_PAD(0x0688, 0x02A0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D7__USBOH3_UH3_DFD_OUT_23                              \
		IOMUX_PAD(0x0688, 0x02A0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D7__GPIO_2_7                                           \
		IOMUX_PAD(0x0688, 0x02A0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_D7__IPU1_IPU_DIAG_BUS_7                                \
		IOMUX_PAD(0x0688, 0x02A0, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_NANDF_RB0__RAWNAND_READY0                                    \
		IOMUX_PAD(0x068C, 0x02A4, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL0)
#define MX6DL_PAD_NANDF_RB0__PCIE_CTRL_DIAG_STATUS_BUS_MUX_2                   \
		IOMUX_PAD(0x068C, 0x02A4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_RB0__USBOH3_UH3_DFD_OUT_14                             \
		IOMUX_PAD(0x068C, 0x02A4, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_RB0__USBOH3_UH2_DFD_OUT_14                             \
		IOMUX_PAD(0x068C, 0x02A4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_RB0__GPIO_6_10                                         \
		IOMUX_PAD(0x068C, 0x02A4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_RB0__MIPI_CORE_DPHY_TEST_OUT_33                        \
		IOMUX_PAD(0x068C, 0x02A4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_RB0__USDHC4_CLKI                                       \
		IOMUX_PAD(0x068C, 0x02A4, 8, 0x0938, 0, MX6DL_USDHC_PAD_CTRL)

#define MX6DL_PAD_NANDF_WP_B__RAWNAND_RESETN                                   \
		IOMUX_PAD(0x0690, 0x02A8, 0, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_NANDF_WP_B__PCIE_CTRL_DIAG_STATUS_BUS_MUX_1                  \
		IOMUX_PAD(0x0690, 0x02A8, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_WP_B__USBOH3_UH3_DFD_OUT_13                            \
		IOMUX_PAD(0x0690, 0x02A8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_WP_B__USBOH3_UH2_DFD_OUT_13                            \
		IOMUX_PAD(0x0690, 0x02A8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_WP_B__GPIO_6_9                                         \
		IOMUX_PAD(0x0690, 0x02A8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_WP_B__MIPI_CORE_DPHY_TEST_OUT_32                       \
		IOMUX_PAD(0x0690, 0x02A8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_NANDF_WP_B__USDHC4_CLKO                                      \
		IOMUX_PAD(0x0690, 0x02A8, 8, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_NANDF_WP_B__I2C4_SCL                                         \
		IOMUX_PAD(0x0690, 0x02A8, 9 | IOMUX_CONFIG_SION, 0x0880, 2, MX6DL_I2C_PAD_CTRL)

#define MX6DL_PAD_PMIC_ON_REQ__SNVS_LP_WRAPPER_SNVS_WAKEUP_ALARM               \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_PMIC_STBY_REQ__CCM_PMIC_VSTBY_REQ                            \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_POR_B__SRC_POR_B                                             \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RESET_IN_B__SRC_RESET_B                                      \
		IOMUX_PAD(NO_PAD_I, NO_MUX_I, 0, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_RD0__MIPI_HSI_CTRL_RX_READY                            \
		IOMUX_PAD(0x0694, 0x02AC, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD0__ENET_RGMII_RD0                                    \
		IOMUX_PAD(0x0694, 0x02AC, 1, 0x0818, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD0__GPIO_6_25                                         \
		IOMUX_PAD(0x0694, 0x02AC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD0__MIPI_CORE_DPHY_TEST_IN_6                          \
		IOMUX_PAD(0x0694, 0x02AC, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_RD1__MIPI_HSI_CTRL_TX_FLAG                             \
		IOMUX_PAD(0x0698, 0x02B0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD1__ENET_RGMII_RD1                                    \
		IOMUX_PAD(0x0698, 0x02B0, 1, 0x081C, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD1__GPIO_6_27                                         \
		IOMUX_PAD(0x0698, 0x02B0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD1__MIPI_CORE_DPHY_TEST_IN_8                          \
		IOMUX_PAD(0x0698, 0x02B0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD1__SJC_FAIL                                          \
		IOMUX_PAD(0x0698, 0x02B0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_RD2__MIPI_HSI_CTRL_TX_DATA                             \
		IOMUX_PAD(0x069C, 0x02B4, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD2__ENET_RGMII_RD2                                    \
		IOMUX_PAD(0x069C, 0x02B4, 1, 0x0820, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD2__GPIO_6_28                                         \
		IOMUX_PAD(0x069C, 0x02B4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD2__MIPI_CORE_DPHY_TEST_IN_9                          \
		IOMUX_PAD(0x069C, 0x02B4, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_RD3__MIPI_HSI_CTRL_TX_WAKE                             \
		IOMUX_PAD(0x06A0, 0x02B8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD3__ENET_RGMII_RD3                                    \
		IOMUX_PAD(0x06A0, 0x02B8, 1, 0x0824, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD3__GPIO_6_29                                         \
		IOMUX_PAD(0x06A0, 0x02B8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RD3__MIPI_CORE_DPHY_TEST_IN_10                         \
		IOMUX_PAD(0x06A0, 0x02B8, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_RX_CTL__USBOH3_H3_DATA                                 \
		IOMUX_PAD(0x06A4, 0x02BC, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USB_HSIC_PAD_CTRL)
#define MX6DL_PAD_RGMII_RX_CTL__ENET_RGMII_RX_CTL                              \
		IOMUX_PAD(0x06A4, 0x02BC, 1, 0x0828, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_RX_CTL__GPIO_6_24                                      \
		IOMUX_PAD(0x06A4, 0x02BC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RX_CTL__MIPI_CORE_DPHY_TEST_IN_5                       \
		IOMUX_PAD(0x06A4, 0x02BC, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_RXC__USBOH3_H3_STROBE                                  \
		IOMUX_PAD(0x06A8, 0x02C0, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USB_HSIC_PAD_CTRL)
#define MX6DL_PAD_RGMII_RXC__USBOH3_H3_STROBE_START                            \
		IOMUX_PAD(0x06A8, 0x02C0, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USB_HSIC_PAD_CTRL | PAD_CTL_PUS_47K_UP)
#define MX6DL_PAD_RGMII_RXC__ENET_RGMII_RXC                                    \
		IOMUX_PAD(0x06A8, 0x02C0, 1, 0x0814, 1, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_RXC__GPIO_6_30                                         \
		IOMUX_PAD(0x06A8, 0x02C0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_RXC__MIPI_CORE_DPHY_TEST_IN_11                         \
		IOMUX_PAD(0x06A8, 0x02C0, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_TD0__MIPI_HSI_CTRL_TX_READY                            \
		IOMUX_PAD(0x06AC, 0x02C4, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD0__ENET_RGMII_TD0                                    \
		IOMUX_PAD(0x06AC, 0x02C4, 1, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD0__GPIO_6_20                                         \
		IOMUX_PAD(0x06AC, 0x02C4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD0__MIPI_CORE_DPHY_TEST_IN_1                          \
		IOMUX_PAD(0x06AC, 0x02C4, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_TD1__MIPI_HSI_CTRL_RX_FLAG                             \
		IOMUX_PAD(0x06B0, 0x02C8, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD1__ENET_RGMII_TD1                                    \
		IOMUX_PAD(0x06B0, 0x02C8, 1, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD1__GPIO_6_21                                         \
		IOMUX_PAD(0x06B0, 0x02C8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD1__MIPI_CORE_DPHY_TEST_IN_2                          \
		IOMUX_PAD(0x06B0, 0x02C8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD1__CCM_PLL3_BYP                                      \
		IOMUX_PAD(0x06B0, 0x02C8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_TD2__MIPI_HSI_CTRL_RX_DATA                             \
		IOMUX_PAD(0x06B4, 0x02CC, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD2__ENET_RGMII_TD2                                    \
		IOMUX_PAD(0x06B4, 0x02CC, 1, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD2__GPIO_6_22                                         \
		IOMUX_PAD(0x06B4, 0x02CC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD2__MIPI_CORE_DPHY_TEST_IN_3                          \
		IOMUX_PAD(0x06B4, 0x02CC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD2__CCM_PLL2_BYP                                      \
		IOMUX_PAD(0x06B4, 0x02CC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_TD3__MIPI_HSI_CTRL_RX_WAKE                             \
		IOMUX_PAD(0x06B8, 0x02D0, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD3__ENET_RGMII_TD3                                    \
		IOMUX_PAD(0x06B8, 0x02D0, 1, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD3__GPIO_6_23                                         \
		IOMUX_PAD(0x06B8, 0x02D0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TD3__MIPI_CORE_DPHY_TEST_IN_4                          \
		IOMUX_PAD(0x06B8, 0x02D0, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_TX_CTL__USBOH3_H2_STROBE                               \
		IOMUX_PAD(0x06BC, 0x02D4, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USB_HSIC_PAD_CTRL)
#define MX6DL_PAD_RGMII_TX_CTL__USBOH3_H2_STROBE_START                         \
		IOMUX_PAD(0x06BC, 0x02D4, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USB_HSIC_PAD_CTRL | PAD_CTL_PUS_47K_UP)
#define MX6DL_PAD_RGMII_TX_CTL__ENET_RGMII_TX_CTL                              \
		IOMUX_PAD(0x06BC, 0x02D4, 1, 0x0000, 0, MX6DL_ENET_PAD_CTRL)
#define MX6DL_PAD_RGMII_TX_CTL__GPIO_6_26                                      \
		IOMUX_PAD(0x06BC, 0x02D4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TX_CTL__MIPI_CORE_DPHY_TEST_IN_7                       \
		IOMUX_PAD(0x06BC, 0x02D4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TX_CTL__ENET_ANATOP_ETHERNET_REF_OUT                   \
		IOMUX_PAD(0x06BC, 0x02D4, 7, 0x080C, 1, NO_PAD_CTRL)

#define MX6DL_PAD_RGMII_TXC__USBOH3_H2_DATA                                    \
		IOMUX_PAD(0x06C0, 0x02D8, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USB_HSIC_PAD_CTRL)
#define MX6DL_PAD_RGMII_TXC__ENET_RGMII_TXC                                    \
		IOMUX_PAD(0x06C0, 0x02D8, 1, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TXC__SPDIF_SPDIF_EXTCLK                                \
		IOMUX_PAD(0x06C0, 0x02D8, 2, 0x08F4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TXC__GPIO_6_19                                         \
		IOMUX_PAD(0x06C0, 0x02D8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TXC__MIPI_CORE_DPHY_TEST_IN_0                          \
		IOMUX_PAD(0x06C0, 0x02D8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_RGMII_TXC__ANATOP_ANATOP_24M_OUT                             \
		IOMUX_PAD(0x06C0, 0x02D8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD1_CLK__USDHC1_CLK                                          \
		IOMUX_PAD(0x06C4, 0x02DC, 0, 0x0928, 1, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD1_CLK__OSC32K_32K_OUT                                      \
		IOMUX_PAD(0x06C4, 0x02DC, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_CLK__GPT_CLKIN                                           \
		IOMUX_PAD(0x06C4, 0x02DC, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_CLK__GPIO_1_20                                           \
		IOMUX_PAD(0x06C4, 0x02DC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_CLK__PHY_DTB_0                                           \
		IOMUX_PAD(0x06C4, 0x02DC, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD1_CMD__USDHC1_CMD                                          \
		IOMUX_PAD(0x06C8, 0x02E0, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD1_CMD__PWM4_PWMO                                           \
		IOMUX_PAD(0x06C8, 0x02E0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_CMD__GPT_CMPOUT1                                         \
		IOMUX_PAD(0x06C8, 0x02E0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_CMD__GPIO_1_18                                           \
		IOMUX_PAD(0x06C8, 0x02E0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_CMD__ANATOP_ANATOP_TESTO_5                               \
		IOMUX_PAD(0x06C8, 0x02E0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD1_DAT0__USDHC1_DAT0                                        \
		IOMUX_PAD(0x06CC, 0x02E4, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT0__CAAM_WRAPPER_RNG_OSC_OBS                           \
		IOMUX_PAD(0x06CC, 0x02E4, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT0__GPT_CAPIN1                                         \
		IOMUX_PAD(0x06CC, 0x02E4, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT0__PCIE_CTRL_DIAG_STATUS_BUS_MUX_8                    \
		IOMUX_PAD(0x06CC, 0x02E4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT0__GPIO_1_16                                          \
		IOMUX_PAD(0x06CC, 0x02E4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT0__HDMI_TX_OPHYDTB_1                                  \
		IOMUX_PAD(0x06CC, 0x02E4, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT0__ANATOP_ANATOP_TESTO_7                              \
		IOMUX_PAD(0x06CC, 0x02E4, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD1_DAT1__USDHC1_DAT1                                        \
		IOMUX_PAD(0x06D0, 0x02E8, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT1__PWM3_PWMO                                          \
		IOMUX_PAD(0x06D0, 0x02E8, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT1__GPT_CAPIN2                                         \
		IOMUX_PAD(0x06D0, 0x02E8, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT1__PCIE_CTRL_DIAG_STATUS_BUS_MUX_7                    \
		IOMUX_PAD(0x06D0, 0x02E8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT1__GPIO_1_17                                          \
		IOMUX_PAD(0x06D0, 0x02E8, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT1__HDMI_TX_OPHYDTB_0                                  \
		IOMUX_PAD(0x06D0, 0x02E8, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT1__ANATOP_ANATOP_TESTO_8                              \
		IOMUX_PAD(0x06D0, 0x02E8, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD1_DAT2__USDHC1_DAT2                                        \
		IOMUX_PAD(0x06D4, 0x02EC, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT2__GPT_CMPOUT2                                        \
		IOMUX_PAD(0x06D4, 0x02EC, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT2__PWM2_PWMO                                          \
		IOMUX_PAD(0x06D4, 0x02EC, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT2__WDOG1_WDOG_B                                       \
		IOMUX_PAD(0x06D4, 0x02EC, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT2__GPIO_1_19                                          \
		IOMUX_PAD(0x06D4, 0x02EC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT2__WDOG1_WDOG_RST_B_DEB                               \
		IOMUX_PAD(0x06D4, 0x02EC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT2__ANATOP_ANATOP_TESTO_4                              \
		IOMUX_PAD(0x06D4, 0x02EC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD1_DAT3__USDHC1_DAT3                                        \
		IOMUX_PAD(0x06D8, 0x02F0, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT3__GPT_CMPOUT3                                        \
		IOMUX_PAD(0x06D8, 0x02F0, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT3__PWM1_PWMO                                          \
		IOMUX_PAD(0x06D8, 0x02F0, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT3__WDOG2_WDOG_B                                       \
		IOMUX_PAD(0x06D8, 0x02F0, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT3__GPIO_1_21                                          \
		IOMUX_PAD(0x06D8, 0x02F0, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT3__WDOG2_WDOG_RST_B_DEB                               \
		IOMUX_PAD(0x06D8, 0x02F0, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD1_DAT3__ANATOP_ANATOP_TESTO_6                              \
		IOMUX_PAD(0x06D8, 0x02F0, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD2_CLK__USDHC2_CLK                                          \
		IOMUX_PAD(0x06DC, 0x02F4, 0, 0x0930, 1, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD2_CLK__KPP_COL_5                                           \
		IOMUX_PAD(0x06DC, 0x02F4, 2, 0x08C0, 3, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CLK__AUDMUX_AUD4_RXFS                                    \
		IOMUX_PAD(0x06DC, 0x02F4, 3, 0x07A4, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CLK__PCIE_CTRL_DIAG_STATUS_BUS_MUX_9                     \
		IOMUX_PAD(0x06DC, 0x02F4, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CLK__GPIO_1_10                                           \
		IOMUX_PAD(0x06DC, 0x02F4, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CLK__PHY_DTB_1                                           \
		IOMUX_PAD(0x06DC, 0x02F4, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD2_CMD__USDHC2_CMD                                          \
		IOMUX_PAD(0x06E0, 0x02F8, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD2_CMD__KPP_ROW_5                                           \
		IOMUX_PAD(0x06E0, 0x02F8, 2, 0x08CC, 2, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CMD__AUDMUX_AUD4_RXC                                     \
		IOMUX_PAD(0x06E0, 0x02F8, 3, 0x07A0, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CMD__PCIE_CTRL_DIAG_STATUS_BUS_MUX_10                    \
		IOMUX_PAD(0x06E0, 0x02F8, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_CMD__GPIO_1_11                                           \
		IOMUX_PAD(0x06E0, 0x02F8, 5, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD2_DAT0__USDHC2_DAT0                                        \
		IOMUX_PAD(0x06E4, 0x02FC, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT0__AUDMUX_AUD4_RXD                                    \
		IOMUX_PAD(0x06E4, 0x02FC, 3, 0x0798, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT0__KPP_ROW_7                                          \
		IOMUX_PAD(0x06E4, 0x02FC, 4, 0x08D4, 2, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT0__GPIO_1_15                                          \
		IOMUX_PAD(0x06E4, 0x02FC, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT0__DCIC2_DCIC_OUT                                     \
		IOMUX_PAD(0x06E4, 0x02FC, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT0__ANATOP_ANATOP_TESTO_2                              \
		IOMUX_PAD(0x06E4, 0x02FC, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD2_DAT1__USDHC2_DAT1                                        \
		IOMUX_PAD(0x06E8, 0x0300, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT1__WEIM_WEIM_CS_2                                     \
		IOMUX_PAD(0x06E8, 0x0300, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT1__AUDMUX_AUD4_TXFS                                   \
		IOMUX_PAD(0x06E8, 0x0300, 3, 0x07AC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT1__KPP_COL_7                                          \
		IOMUX_PAD(0x06E8, 0x0300, 4, 0x08C8, 2, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT1__GPIO_1_14                                          \
		IOMUX_PAD(0x06E8, 0x0300, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT1__CCM_WAIT                                           \
		IOMUX_PAD(0x06E8, 0x0300, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT1__ANATOP_ANATOP_TESTO_0                              \
		IOMUX_PAD(0x06E8, 0x0300, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD2_DAT2__USDHC2_DAT2                                        \
		IOMUX_PAD(0x06EC, 0x0304, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT2__WEIM_WEIM_CS_3                                     \
		IOMUX_PAD(0x06EC, 0x0304, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT2__AUDMUX_AUD4_TXD                                    \
		IOMUX_PAD(0x06EC, 0x0304, 3, 0x079C, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT2__KPP_ROW_6                                          \
		IOMUX_PAD(0x06EC, 0x0304, 4, 0x08D0, 2, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT2__GPIO_1_13                                          \
		IOMUX_PAD(0x06EC, 0x0304, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT2__CCM_STOP                                           \
		IOMUX_PAD(0x06EC, 0x0304, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT2__ANATOP_ANATOP_TESTO_1                              \
		IOMUX_PAD(0x06EC, 0x0304, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD2_DAT3__USDHC2_DAT3                                        \
		IOMUX_PAD(0x06F0, 0x0308, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT3__KPP_COL_6                                          \
		IOMUX_PAD(0x06F0, 0x0308, 2, 0x08C4, 2, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT3__AUDMUX_AUD4_TXC                                    \
		IOMUX_PAD(0x06F0, 0x0308, 3, 0x07A8, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT3__PCIE_CTRL_DIAG_STATUS_BUS_MUX_11                   \
		IOMUX_PAD(0x06F0, 0x0308, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT3__GPIO_1_12                                          \
		IOMUX_PAD(0x06F0, 0x0308, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT3__SJC_DONE                                           \
		IOMUX_PAD(0x06F0, 0x0308, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD2_DAT3__ANATOP_ANATOP_TESTO_3                              \
		IOMUX_PAD(0x06F0, 0x0308, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_CLK__USDHC3_CLK                                          \
		IOMUX_PAD(0x06F4, 0x030C, 0, 0x0934, 1, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__UART2_CTS                                           \
		IOMUX_PAD(0x06F4, 0x030C, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__UART2_RTS                                           \
		IOMUX_PAD(0x06F4, 0x030C, 1, 0x0900, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__CAN1_RXCAN                                          \
		IOMUX_PAD(0x06F4, 0x030C, 2, 0x07C8, 2, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__USBOH3_UH3_DFD_OUT_5                                \
		IOMUX_PAD(0x06F4, 0x030C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__USBOH3_UH2_DFD_OUT_5                                \
		IOMUX_PAD(0x06F4, 0x030C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__GPIO_7_3                                            \
		IOMUX_PAD(0x06F4, 0x030C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__MIPI_CORE_DPHY_TEST_IN_17                           \
		IOMUX_PAD(0x06F4, 0x030C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CLK__ANATOP_ANATOP_TESTO_14                              \
		IOMUX_PAD(0x06F4, 0x030C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_CMD__USDHC3_CMD                                          \
		IOMUX_PAD(0x06F8, 0x0310, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__UART2_CTS                                           \
		IOMUX_PAD(0x06F8, 0x0310, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MXSDL_PAD_SD3_CMD__UART2_RTS                                          \
		IOMUX_PAD(0x06F8, 0x0310, 1, 0x0900, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__CAN1_TXCAN                                          \
		IOMUX_PAD(0x06F8, 0x0310, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__USBOH3_UH3_DFD_OUT_4                                \
		IOMUX_PAD(0x06F8, 0x0310, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__USBOH3_UH2_DFD_OUT_4                                \
		IOMUX_PAD(0x06F8, 0x0310, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__GPIO_7_2                                            \
		IOMUX_PAD(0x06F8, 0x0310, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__MIPI_CORE_DPHY_TEST_IN_16                           \
		IOMUX_PAD(0x06F8, 0x0310, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_CMD__ANATOP_ANATOP_TESTO_13                              \
		IOMUX_PAD(0x06F8, 0x0310, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT0__USDHC3_DAT0                                        \
		IOMUX_PAD(0x06FC, 0x0314, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__UART1_CTS                                          \
		IOMUX_PAD(0x06FC, 0x0314, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__UART1_RTS                                         \
		IOMUX_PAD(0x06FC, 0x0314, 1, 0x08F8, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__CAN2_TXCAN                                         \
		IOMUX_PAD(0x06FC, 0x0314, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__USBOH3_UH3_DFD_OUT_6                               \
		IOMUX_PAD(0x06FC, 0x0314, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__USBOH3_UH2_DFD_OUT_6                               \
		IOMUX_PAD(0x06FC, 0x0314, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__GPIO_7_4                                           \
		IOMUX_PAD(0x06FC, 0x0314, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__MIPI_CORE_DPHY_TEST_IN_18                          \
		IOMUX_PAD(0x06FC, 0x0314, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT0__ANATOP_ANATOP_TESTO_15                             \
		IOMUX_PAD(0x06FC, 0x0314, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT1__USDHC3_DAT1                                        \
		IOMUX_PAD(0x0700, 0x0318, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__UART1_CTS                                          \
		IOMUX_PAD(0x0700, 0x0318, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__UART1_RTS                                          \
		IOMUX_PAD(0x0700, 0x0318, 1, 0x08F8, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__CAN2_RXCAN                                         \
		IOMUX_PAD(0x0700, 0x0318, 2, 0x07CC, 1, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__USBOH3_UH3_DFD_OUT_7                               \
		IOMUX_PAD(0x0700, 0x0318, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__USBOH3_UH2_DFD_OUT_7                               \
		IOMUX_PAD(0x0700, 0x0318, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__GPIO_7_5                                           \
		IOMUX_PAD(0x0700, 0x0318, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__MIPI_CORE_DPHY_TEST_IN_19                          \
		IOMUX_PAD(0x0700, 0x0318, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT1__ANATOP_ANATOP_TESTI_0                              \
		IOMUX_PAD(0x0700, 0x0318, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT2__USDHC3_DAT2                                       \
		IOMUX_PAD(0x0704, 0x031C, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT2__PCIE_CTRL_DIAG_STATUS_BUS_MUX_28                   \
		IOMUX_PAD(0x0704, 0x031C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT2__USBOH3_UH3_DFD_OUT_8                               \
		IOMUX_PAD(0x0704, 0x031C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT2__USBOH3_UH2_DFD_OUT_8                               \
		IOMUX_PAD(0x0704, 0x031C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT2__GPIO_7_6                                           \
		IOMUX_PAD(0x0704, 0x031C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT2__MIPI_CORE_DPHY_TEST_IN_20                          \
		IOMUX_PAD(0x0704, 0x031C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT2__ANATOP_ANATOP_TESTI_1                              \
		IOMUX_PAD(0x0704, 0x031C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT3__USDHC3_DAT3                                        \
		IOMUX_PAD(0x0708, 0x0320, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__UART3_CTS                                          \
		IOMUX_PAD(0x0708, 0x0320, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__UART3_RTS                                         \
		IOMUX_PAD(0x0708, 0x0320, 1, 0x0908, 4, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__PCIE_CTRL_DIAG_STATUS_BUS_MUX_29                   \
		IOMUX_PAD(0x0708, 0x0320, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__USBOH3_UH3_DFD_OUT_9                               \
		IOMUX_PAD(0x0708, 0x0320, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__USBOH3_UH2_DFD_OUT_9                               \
		IOMUX_PAD(0x0708, 0x0320, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__GPIO_7_7                                           \
		IOMUX_PAD(0x0708, 0x0320, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__MIPI_CORE_DPHY_TEST_IN_21                          \
		IOMUX_PAD(0x0708, 0x0320, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT3__ANATOP_ANATOP_TESTI_2                              \
		IOMUX_PAD(0x0708, 0x0320, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT4__USDHC3_DAT4                                        \
		IOMUX_PAD(0x070C, 0x0324, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__UART2_TXD                                          \
		IOMUX_PAD(0x070C, 0x0324, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__UART2_RXD                                          \
		IOMUX_PAD(0x070C, 0x0324, 1, 0x0904, 4, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__PCIE_CTRL_DIAG_STATUS_BUS_MUX_27                   \
		IOMUX_PAD(0x070C, 0x0324, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__USBOH3_UH3_DFD_OUT_3                               \
		IOMUX_PAD(0x070C, 0x0324, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__USBOH3_UH2_DFD_OUT_3                               \
		IOMUX_PAD(0x070C, 0x0324, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__GPIO_7_1                                           \
		IOMUX_PAD(0x070C, 0x0324, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__MIPI_CORE_DPHY_TEST_IN_15                          \
		IOMUX_PAD(0x070C, 0x0324, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT4__ANATOP_ANATOP_TESTO_12                             \
		IOMUX_PAD(0x070C, 0x0324, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT5__USDHC3_DAT5                                        \
		IOMUX_PAD(0x0710, 0x0328, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__UART2_TXD                                          \
		IOMUX_PAD(0x0710, 0x0328, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__UART2_RXD                                          \
		IOMUX_PAD(0x0710, 0x0328, 1, 0x0904, 5, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__PCIE_CTRL_DIAG_STATUS_BUS_MUX_26                   \
		IOMUX_PAD(0x0710, 0x0328, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__USBOH3_UH3_DFD_OUT_2                               \
		IOMUX_PAD(0x0710, 0x0328, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__USBOH3_UH2_DFD_OUT_2                               \
		IOMUX_PAD(0x0710, 0x0328, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__GPIO_7_0                                           \
		IOMUX_PAD(0x0710, 0x0328, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__MIPI_CORE_DPHY_TEST_IN_14                          \
		IOMUX_PAD(0x0710, 0x0328, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT5__ANATOP_ANATOP_TESTO_11                             \
		IOMUX_PAD(0x0710, 0x0328, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT6__USDHC3_DAT6                                        \
		IOMUX_PAD(0x0714, 0x032C, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__UART1_TXD                                          \
		IOMUX_PAD(0x0714, 0x032C, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__UART1_RXD                                          \
		IOMUX_PAD(0x0714, 0x032C, 1, 0x08FC, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__PCIE_CTRL_DIAG_STATUS_BUS_MUX_25                   \
		IOMUX_PAD(0x0714, 0x032C, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__USBOH3_UH3_DFD_OUT_1                               \
		IOMUX_PAD(0x0714, 0x032C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__USBOH3_UH2_DFD_OUT_1                               \
		IOMUX_PAD(0x0714, 0x032C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__GPIO_6_18                                          \
		IOMUX_PAD(0x0714, 0x032C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__MIPI_CORE_DPHY_TEST_IN_13                          \
		IOMUX_PAD(0x0714, 0x032C, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT6__ANATOP_ANATOP_TESTO_10                             \
		IOMUX_PAD(0x0714, 0x032C, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_DAT7__USDHC3_DAT7                                        \
		IOMUX_PAD(0x0718, 0x0330, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__UART1_TXD                                          \
		IOMUX_PAD(0x0718, 0x0330, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__UART1_RXD                                          \
		IOMUX_PAD(0x0718, 0x0330, 1, 0x08FC, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__PCIE_CTRL_DIAG_STATUS_BUS_MUX_24                   \
		IOMUX_PAD(0x0718, 0x0330, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__USBOH3_UH3_DFD_OUT_0                               \
		IOMUX_PAD(0x0718, 0x0330, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__USBOH3_UH2_DFD_OUT_0                               \
		IOMUX_PAD(0x0718, 0x0330, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__GPIO_6_17                                          \
		IOMUX_PAD(0x0718, 0x0330, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__MIPI_CORE_DPHY_TEST_IN_12                          \
		IOMUX_PAD(0x0718, 0x0330, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_DAT7__ANATOP_USBPHY2_TSTO_PLL_CLK20DIV                   \
		IOMUX_PAD(0x0718, 0x0330, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD3_RST__USDHC3_RST                                          \
		IOMUX_PAD(0x071C, 0x0334, 0, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__UART3_CTS                                           \
		IOMUX_PAD(0x071C, 0x0334, 1, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__UART3_RTS                                           \
		IOMUX_PAD(0x071C, 0x0334, 1, 0x0908, 5, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__PCIE_CTRL_DIAG_STATUS_BUS_MUX_30                    \
		IOMUX_PAD(0x071C, 0x0334, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__USBOH3_UH3_DFD_OUT_10                               \
		IOMUX_PAD(0x071C, 0x0334, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__USBOH3_UH2_DFD_OUT_10                               \
		IOMUX_PAD(0x071C, 0x0334, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__GPIO_7_8                                            \
		IOMUX_PAD(0x071C, 0x0334, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__MIPI_CORE_DPHY_TEST_IN_22                           \
		IOMUX_PAD(0x071C, 0x0334, 6, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD3_RST__ANATOP_ANATOP_TESTI_3                               \
		IOMUX_PAD(0x071C, 0x0334, 7, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_CLK__USDHC4_CLK                                          \
		IOMUX_PAD(0x0720, 0x0338, 0, 0x0938, 1, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_CLK__RAWNAND_WRN                                         \
		IOMUX_PAD(0x0720, 0x0338, 1, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_SD4_CLK__UART3_TXD                                           \
		IOMUX_PAD(0x0720, 0x0338, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_CLK__UART3_RXD                                           \
		IOMUX_PAD(0x0720, 0x0338, 2, 0x090C, 2, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_CLK__PCIE_CTRL_DIAG_STATUS_BUS_MUX_6                     \
		IOMUX_PAD(0x0720, 0x0338, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_CLK__GPIO_7_10                                           \
		IOMUX_PAD(0x0720, 0x0338, 5, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_CMD__USDHC4_CMD                                          \
		IOMUX_PAD(0x0724, 0x033C, 0 | IOMUX_CONFIG_SION, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_CMD__RAWNAND_RDN                                         \
		IOMUX_PAD(0x0724, 0x033C, 1, 0x0000, 0, MX6DL_GPMI_PAD_CTRL2)
#define MX6DL_PAD_SD4_CMD__UART3_TXD                                           \
		IOMUX_PAD(0x0724, 0x033C, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_CMD__UART3_RXD                                           \
		IOMUX_PAD(0x0724, 0x033C, 2, 0x090C, 3, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_CMD__PCIE_CTRL_DIAG_STATUS_BUS_MUX_5                     \
		IOMUX_PAD(0x0724, 0x033C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_CMD__GPIO_7_9                                            \
		IOMUX_PAD(0x0724, 0x033C, 5, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT0__RAWNAND_D8                                         \
		IOMUX_PAD(0x0728, 0x0340, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT0__USDHC4_DAT0                                        \
		IOMUX_PAD(0x0728, 0x0340, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT0__RAWNAND_DQS                                        \
		IOMUX_PAD(0x0728, 0x0340, 2, 0x0000, 0, MX6DL_GPMI_PAD_CTRL1)
#define MX6DL_PAD_SD4_DAT0__USBOH3_UH2_DFD_OUT_24                              \
		IOMUX_PAD(0x0728, 0x0340, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT0__USBOH3_UH3_DFD_OUT_24                              \
		IOMUX_PAD(0x0728, 0x0340, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT0__GPIO_2_8                                           \
		IOMUX_PAD(0x0728, 0x0340, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT0__IPU1_IPU_DIAG_BUS_8                                \
		IOMUX_PAD(0x0728, 0x0340, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT1__RAWNAND_D9                                         \
		IOMUX_PAD(0x072C, 0x0344, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT1__USDHC4_DAT1                                        \
		IOMUX_PAD(0x072C, 0x0344, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT1__PWM3_PWMO                                          \
		IOMUX_PAD(0x072C, 0x0344, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT1__USBOH3_UH2_DFD_OUT_25                              \
		IOMUX_PAD(0x072C, 0x0344, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT1__USBOH3_UH3_DFD_OUT_25                              \
		IOMUX_PAD(0x072C, 0x0344, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT1__GPIO_2_9                                           \
		IOMUX_PAD(0x072C, 0x0344, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT1__IPU1_IPU_DIAG_BUS_9                                \
		IOMUX_PAD(0x072C, 0x0344, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT2__RAWNAND_D10                                        \
		IOMUX_PAD(0x0730, 0x0348, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT2__USDHC4_DAT2                                        \
		IOMUX_PAD(0x0730, 0x0348, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT2__PWM4_PWMO                                          \
		IOMUX_PAD(0x0730, 0x0348, 2, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT2__USBOH3_UH2_DFD_OUT_26                              \
		IOMUX_PAD(0x0730, 0x0348, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT2__USBOH3_UH3_DFD_OUT_26                              \
		IOMUX_PAD(0x0730, 0x0348, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT2__GPIO_2_10                                          \
		IOMUX_PAD(0x0730, 0x0348, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT2__IPU1_IPU_DIAG_BUS_10                               \
		IOMUX_PAD(0x0730, 0x0348, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT3__RAWNAND_D11                                        \
		IOMUX_PAD(0x0734, 0x034C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT3__USDHC4_DAT3                                        \
		IOMUX_PAD(0x0734, 0x034C, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT3__USBOH3_UH2_DFD_OUT_27                              \
		IOMUX_PAD(0x0734, 0x034C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT3__USBOH3_UH3_DFD_OUT_27                              \
		IOMUX_PAD(0x0734, 0x034C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT3__GPIO_2_11                                          \
		IOMUX_PAD(0x0734, 0x034C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT3__IPU1_IPU_DIAG_BUS_11                               \
		IOMUX_PAD(0x0734, 0x034C, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT4__RAWNAND_D12                                        \
		IOMUX_PAD(0x0738, 0x0350, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__USDHC4_DAT4                                        \
		IOMUX_PAD(0x0738, 0x0350, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__UART2_TXD                                          \
		IOMUX_PAD(0x0738, 0x0350, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__UART2_RXD                                          \
		IOMUX_PAD(0x0738, 0x0350, 2, 0x0904, 6, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__USBOH3_UH2_DFD_OUT_28                              \
		IOMUX_PAD(0x0738, 0x0350, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__USBOH3_UH3_DFD_OUT_28                              \
		IOMUX_PAD(0x0738, 0x0350, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__GPIO_2_12                                          \
		IOMUX_PAD(0x0738, 0x0350, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT4__IPU1_IPU_DIAG_BUS_12                               \
		IOMUX_PAD(0x0738, 0x0350, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT5__RAWNAND_D13                                        \
		IOMUX_PAD(0x073C, 0x0354, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__USDHC4_DAT5                                        \
		IOMUX_PAD(0x073C, 0x0354, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__UART2_CTS                                          \
		IOMUX_PAD(0x073C, 0x0354, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__UART2_RTS                                          \
		IOMUX_PAD(0x073C, 0x0354, 2, 0x0900, 4, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__USBOH3_UH2_DFD_OUT_29                              \
		IOMUX_PAD(0x073C, 0x0354, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__USBOH3_UH3_DFD_OUT_29                              \
		IOMUX_PAD(0x073C, 0x0354, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__GPIO_2_13                                          \
		IOMUX_PAD(0x073C, 0x0354, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT5__IPU1_IPU_DIAG_BUS_13                               \
		IOMUX_PAD(0x073C, 0x0354, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT6__RAWNAND_D14                                        \
		IOMUX_PAD(0x0740, 0x0358, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__USDHC4_DAT6                                        \
		IOMUX_PAD(0x0740, 0x0358, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__UART2_CTS                                          \
		IOMUX_PAD(0x0740, 0x0358, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__UART2_RTS                                         \
		IOMUX_PAD(0x0740, 0x0358, 2, 0x0900, 5, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__USBOH3_UH2_DFD_OUT_30                              \
		IOMUX_PAD(0x0740, 0x0358, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__USBOH3_UH3_DFD_OUT_30                              \
		IOMUX_PAD(0x0740, 0x0358, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__GPIO_2_14                                          \
		IOMUX_PAD(0x0740, 0x0358, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT6__IPU1_IPU_DIAG_BUS_14                               \
		IOMUX_PAD(0x0740, 0x0358, 6, 0x0000, 0, NO_PAD_CTRL)

#define MX6DL_PAD_SD4_DAT7__RAWNAND_D15                                        \
		IOMUX_PAD(0x0744, 0x035C, 0, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__USDHC4_DAT7                                        \
		IOMUX_PAD(0x0744, 0x035C, 1, 0x0000, 0, MX6DL_USDHC_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__UART2_TXD                                          \
		IOMUX_PAD(0x0744, 0x035C, 2, 0x0000, 0, MX6DL_UART_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__UART2_RXD                                          \
		IOMUX_PAD(0x0744, 0x035C, 2, 0x0904, 7, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__USBOH3_UH2_DFD_OUT_31                              \
		IOMUX_PAD(0x0744, 0x035C, 3, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__USBOH3_UH3_DFD_OUT_31                              \
		IOMUX_PAD(0x0744, 0x035C, 4, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__GPIO_2_15                                          \
		IOMUX_PAD(0x0744, 0x035C, 5, 0x0000, 0, NO_PAD_CTRL)
#define MX6DL_PAD_SD4_DAT7__IPU1_IPU_DIAG_BUS_15                               \
		IOMUX_PAD(0x0744, 0x035C, 6, 0x0000, 0, NO_PAD_CTRL)

#endif		/*__MACH_IOMUX_MX6DL_H__ */
