/* Copyright (c) 2015, 2018, 2020, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef WSA881X_REGISTERS_H
#define WSA881X_REGISTERS_H

#define WSA881X_DIGITAL_BASE	0x0000
#define WSA881X_ANALOG_BASE	0x0100

#define WSA881X_CHIP_ID0                        (WSA881X_DIGITAL_BASE+0x0000)
#define WSA881X_CHIP_ID1			(WSA881X_DIGITAL_BASE+0x0001)
#define WSA881X_CHIP_ID2			(WSA881X_DIGITAL_BASE+0x0002)
#define WSA881X_CHIP_ID3			(WSA881X_DIGITAL_BASE+0x0003)
#define WSA881X_BUS_ID				(WSA881X_DIGITAL_BASE+0x0004)
#define WSA881X_CDC_RST_CTL			(WSA881X_DIGITAL_BASE+0x0005)
#define WSA881X_CDC_TOP_CLK_CTL			(WSA881X_DIGITAL_BASE+0x0006)
#define WSA881X_CDC_ANA_CLK_CTL			(WSA881X_DIGITAL_BASE+0x0007)
#define WSA881X_CDC_DIG_CLK_CTL			(WSA881X_DIGITAL_BASE+0x0008)
#define WSA881X_CLOCK_CONFIG			(WSA881X_DIGITAL_BASE+0x0009)
#define WSA881X_ANA_CTL				(WSA881X_DIGITAL_BASE+0x000A)
#define WSA881X_SWR_RESET_EN			(WSA881X_DIGITAL_BASE+0x000B)
#define WSA881X_RESET_CTL			(WSA881X_DIGITAL_BASE+0x000C)
#define WSA881X_TADC_VALUE_CTL			(WSA881X_DIGITAL_BASE+0x000F)
#define WSA881X_TEMP_DETECT_CTL			(WSA881X_DIGITAL_BASE+0x0010)
#define WSA881X_TEMP_MSB			(WSA881X_DIGITAL_BASE+0x0011)
#define WSA881X_TEMP_LSB			(WSA881X_DIGITAL_BASE+0x0012)
#define WSA881X_TEMP_CONFIG0			(WSA881X_DIGITAL_BASE+0x0013)
#define WSA881X_TEMP_CONFIG1			(WSA881X_DIGITAL_BASE+0x0014)
#define WSA881X_CDC_CLIP_CTL			(WSA881X_DIGITAL_BASE+0x0015)
#define WSA881X_SDM_PDM9_LSB			(WSA881X_DIGITAL_BASE+0x0016)
#define WSA881X_SDM_PDM9_MSB			(WSA881X_DIGITAL_BASE+0x0017)
#define WSA881X_CDC_RX_CTL			(WSA881X_DIGITAL_BASE+0x0018)
#define WSA881X_DEM_BYPASS_DATA0		(WSA881X_DIGITAL_BASE+0x0019)
#define WSA881X_DEM_BYPASS_DATA1		(WSA881X_DIGITAL_BASE+0x001A)
#define WSA881X_DEM_BYPASS_DATA2		(WSA881X_DIGITAL_BASE+0x001B)
#define WSA881X_DEM_BYPASS_DATA3		(WSA881X_DIGITAL_BASE+0x001C)
#define WSA881X_OTP_CTRL0			(WSA881X_DIGITAL_BASE+0x001D)
#define WSA881X_OTP_CTRL1			(WSA881X_DIGITAL_BASE+0x001E)
#define WSA881X_HDRIVE_CTL_GROUP1		(WSA881X_DIGITAL_BASE+0x001F)
#define WSA881X_INTR_MODE			(WSA881X_DIGITAL_BASE+0x0020)
#define WSA881X_INTR_MASK			(WSA881X_DIGITAL_BASE+0x0021)
#define WSA881X_INTR_STATUS			(WSA881X_DIGITAL_BASE+0x0022)
#define WSA881X_INTR_CLEAR			(WSA881X_DIGITAL_BASE+0x0023)
#define WSA881X_INTR_LEVEL			(WSA881X_DIGITAL_BASE+0x0024)
#define WSA881X_INTR_SET			(WSA881X_DIGITAL_BASE+0x0025)
#define WSA881X_INTR_TEST			(WSA881X_DIGITAL_BASE+0x0026)
#define WSA881X_PDM_TEST_MODE			(WSA881X_DIGITAL_BASE+0x0030)
#define WSA881X_ATE_TEST_MODE			(WSA881X_DIGITAL_BASE+0x0031)
#define WSA881X_PIN_CTL_MODE			(WSA881X_DIGITAL_BASE+0x0032)
#define WSA881X_PIN_CTL_OE			(WSA881X_DIGITAL_BASE+0x0033)
#define WSA881X_PIN_WDATA_IOPAD			(WSA881X_DIGITAL_BASE+0x0034)
#define WSA881X_PIN_STATUS			(WSA881X_DIGITAL_BASE+0x0035)
#define WSA881X_DIG_DEBUG_MODE			(WSA881X_DIGITAL_BASE+0x0037)
#define WSA881X_DIG_DEBUG_SEL			(WSA881X_DIGITAL_BASE+0x0038)
#define WSA881X_DIG_DEBUG_EN			(WSA881X_DIGITAL_BASE+0x0039)
#define WSA881X_SWR_HM_TEST1			(WSA881X_DIGITAL_BASE+0x003B)
#define WSA881X_SWR_HM_TEST2			(WSA881X_DIGITAL_BASE+0x003C)
#define WSA881X_TEMP_DETECT_DBG_CTL		(WSA881X_DIGITAL_BASE+0x003D)
#define WSA881X_TEMP_DEBUG_MSB			(WSA881X_DIGITAL_BASE+0x003E)
#define WSA881X_TEMP_DEBUG_LSB			(WSA881X_DIGITAL_BASE+0x003F)
#define WSA881X_SAMPLE_EDGE_SEL			(WSA881X_DIGITAL_BASE+0x0044)
#define WSA881X_IOPAD_CTL			(WSA881X_DIGITAL_BASE+0x0045)
#define WSA881X_SPARE_0				(WSA881X_DIGITAL_BASE+0x0050)
#define WSA881X_SPARE_1				(WSA881X_DIGITAL_BASE+0x0051)
#define WSA881X_SPARE_2				(WSA881X_DIGITAL_BASE+0x0052)
#define WSA881X_OTP_REG_0			(WSA881X_DIGITAL_BASE+0x0080)
#define WSA881X_OTP_REG_1			(WSA881X_DIGITAL_BASE+0x0081)
#define WSA881X_OTP_REG_2			(WSA881X_DIGITAL_BASE+0x0082)
#define WSA881X_OTP_REG_3			(WSA881X_DIGITAL_BASE+0x0083)
#define WSA881X_OTP_REG_4			(WSA881X_DIGITAL_BASE+0x0084)
#define WSA881X_OTP_REG_5			(WSA881X_DIGITAL_BASE+0x0085)
#define WSA881X_OTP_REG_6			(WSA881X_DIGITAL_BASE+0x0086)
#define WSA881X_OTP_REG_7			(WSA881X_DIGITAL_BASE+0x0087)
#define WSA881X_OTP_REG_8			(WSA881X_DIGITAL_BASE+0x0088)
#define WSA881X_OTP_REG_9			(WSA881X_DIGITAL_BASE+0x0089)
#define WSA881X_OTP_REG_10			(WSA881X_DIGITAL_BASE+0x008A)
#define WSA881X_OTP_REG_11			(WSA881X_DIGITAL_BASE+0x008B)
#define WSA881X_OTP_REG_12			(WSA881X_DIGITAL_BASE+0x008C)
#define WSA881X_OTP_REG_13			(WSA881X_DIGITAL_BASE+0x008D)
#define WSA881X_OTP_REG_14			(WSA881X_DIGITAL_BASE+0x008E)
#define WSA881X_OTP_REG_15			(WSA881X_DIGITAL_BASE+0x008F)
#define WSA881X_OTP_REG_16			(WSA881X_DIGITAL_BASE+0x0090)
#define WSA881X_OTP_REG_17			(WSA881X_DIGITAL_BASE+0x0091)
#define WSA881X_OTP_REG_18			(WSA881X_DIGITAL_BASE+0x0092)
#define WSA881X_OTP_REG_19			(WSA881X_DIGITAL_BASE+0x0093)
#define WSA881X_OTP_REG_20			(WSA881X_DIGITAL_BASE+0x0094)
#define WSA881X_OTP_REG_21			(WSA881X_DIGITAL_BASE+0x0095)
#define WSA881X_OTP_REG_22			(WSA881X_DIGITAL_BASE+0x0096)
#define WSA881X_OTP_REG_23			(WSA881X_DIGITAL_BASE+0x0097)
#define WSA881X_OTP_REG_24			(WSA881X_DIGITAL_BASE+0x0098)
#define WSA881X_OTP_REG_25			(WSA881X_DIGITAL_BASE+0x0099)
#define WSA881X_OTP_REG_26			(WSA881X_DIGITAL_BASE+0x009A)
#define WSA881X_OTP_REG_27			(WSA881X_DIGITAL_BASE+0x009B)
#define WSA881X_OTP_REG_28			(WSA881X_DIGITAL_BASE+0x009C)
#define WSA881X_OTP_REG_29			(WSA881X_DIGITAL_BASE+0x009D)
#define WSA881X_OTP_REG_30			(WSA881X_DIGITAL_BASE+0x009E)
#define WSA881X_OTP_REG_31			(WSA881X_DIGITAL_BASE+0x009F)
#define WSA881X_OTP_REG_32			(WSA881X_DIGITAL_BASE+0x00A0)
#define WSA881X_OTP_REG_33			(WSA881X_DIGITAL_BASE+0x00A1)
#define WSA881X_OTP_REG_34			(WSA881X_DIGITAL_BASE+0x00A2)
#define WSA881X_OTP_REG_35			(WSA881X_DIGITAL_BASE+0x00A3)
#define WSA881X_OTP_REG_36			(WSA881X_DIGITAL_BASE+0x00A4)
#define WSA881X_OTP_REG_37			(WSA881X_DIGITAL_BASE+0x00A5)
#define WSA881X_OTP_REG_38			(WSA881X_DIGITAL_BASE+0x00A6)
#define WSA881X_OTP_REG_39			(WSA881X_DIGITAL_BASE+0x00A7)
#define WSA881X_OTP_REG_40			(WSA881X_DIGITAL_BASE+0x00A8)
#define WSA881X_OTP_REG_41			(WSA881X_DIGITAL_BASE+0x00A9)
#define WSA881X_OTP_REG_42			(WSA881X_DIGITAL_BASE+0x00AA)
#define WSA881X_OTP_REG_43			(WSA881X_DIGITAL_BASE+0x00AB)
#define WSA881X_OTP_REG_44			(WSA881X_DIGITAL_BASE+0x00AC)
#define WSA881X_OTP_REG_45			(WSA881X_DIGITAL_BASE+0x00AD)
#define WSA881X_OTP_REG_46			(WSA881X_DIGITAL_BASE+0x00AE)
#define WSA881X_OTP_REG_47			(WSA881X_DIGITAL_BASE+0x00AF)
#define WSA881X_OTP_REG_48			(WSA881X_DIGITAL_BASE+0x00B0)
#define WSA881X_OTP_REG_49			(WSA881X_DIGITAL_BASE+0x00B1)
#define WSA881X_OTP_REG_50			(WSA881X_DIGITAL_BASE+0x00B2)
#define WSA881X_OTP_REG_51			(WSA881X_DIGITAL_BASE+0x00B3)
#define WSA881X_OTP_REG_52			(WSA881X_DIGITAL_BASE+0x00B4)
#define WSA881X_OTP_REG_53			(WSA881X_DIGITAL_BASE+0x00B5)
#define WSA881X_OTP_REG_54			(WSA881X_DIGITAL_BASE+0x00B6)
#define WSA881X_OTP_REG_55			(WSA881X_DIGITAL_BASE+0x00B7)
#define WSA881X_OTP_REG_56			(WSA881X_DIGITAL_BASE+0x00B8)
#define WSA881X_OTP_REG_57			(WSA881X_DIGITAL_BASE+0x00B9)
#define WSA881X_OTP_REG_58			(WSA881X_DIGITAL_BASE+0x00BA)
#define WSA881X_OTP_REG_59			(WSA881X_DIGITAL_BASE+0x00BB)
#define WSA881X_OTP_REG_60			(WSA881X_DIGITAL_BASE+0x00BC)
#define WSA881X_OTP_REG_61			(WSA881X_DIGITAL_BASE+0x00BD)
#define WSA881X_OTP_REG_62			(WSA881X_DIGITAL_BASE+0x00BE)
#define WSA881X_OTP_REG_63			(WSA881X_DIGITAL_BASE+0x00BF)
/* Analog Register address space */
#define WSA881X_BIAS_REF_CTRL			(WSA881X_ANALOG_BASE+0x0000)
#define WSA881X_BIAS_TEST			(WSA881X_ANALOG_BASE+0x0001)
#define WSA881X_BIAS_BIAS			(WSA881X_ANALOG_BASE+0x0002)
#define WSA881X_TEMP_OP				(WSA881X_ANALOG_BASE+0x0003)
#define WSA881X_TEMP_IREF_CTRL			(WSA881X_ANALOG_BASE+0x0004)
#define WSA881X_TEMP_ISENS_CTRL			(WSA881X_ANALOG_BASE+0x0005)
#define WSA881X_TEMP_CLK_CTRL			(WSA881X_ANALOG_BASE+0x0006)
#define WSA881X_TEMP_TEST			(WSA881X_ANALOG_BASE+0x0007)
#define WSA881X_TEMP_BIAS			(WSA881X_ANALOG_BASE+0x0008)
#define WSA881X_TEMP_ADC_CTRL			(WSA881X_ANALOG_BASE+0x0009)
#define WSA881X_TEMP_DOUT_MSB			(WSA881X_ANALOG_BASE+0x000A)
#define WSA881X_TEMP_DOUT_LSB			(WSA881X_ANALOG_BASE+0x000B)
#define WSA881X_ADC_EN_MODU_V			(WSA881X_ANALOG_BASE+0x0010)
#define WSA881X_ADC_EN_MODU_I			(WSA881X_ANALOG_BASE+0x0011)
#define WSA881X_ADC_EN_DET_TEST_V		(WSA881X_ANALOG_BASE+0x0012)
#define WSA881X_ADC_EN_DET_TEST_I		(WSA881X_ANALOG_BASE+0x0013)
#define WSA881X_ADC_SEL_IBIAS			(WSA881X_ANALOG_BASE+0x0014)
#define WSA881X_ADC_EN_SEL_IBIAS		(WSA881X_ANALOG_BASE+0x0015)
#define WSA881X_SPKR_DRV_EN			(WSA881X_ANALOG_BASE+0x001A)
#define WSA881X_SPKR_DRV_GAIN			(WSA881X_ANALOG_BASE+0x001B)
#define WSA881X_SPKR_DAC_CTL			(WSA881X_ANALOG_BASE+0x001C)
#define WSA881X_SPKR_DRV_DBG			(WSA881X_ANALOG_BASE+0x001D)
#define WSA881X_SPKR_PWRSTG_DBG			(WSA881X_ANALOG_BASE+0x001E)
#define WSA881X_SPKR_OCP_CTL			(WSA881X_ANALOG_BASE+0x001F)
#define WSA881X_SPKR_CLIP_CTL			(WSA881X_ANALOG_BASE+0x0020)
#define WSA881X_SPKR_BBM_CTL			(WSA881X_ANALOG_BASE+0x0021)
#define WSA881X_SPKR_MISC_CTL1			(WSA881X_ANALOG_BASE+0x0022)
#define WSA881X_SPKR_MISC_CTL2			(WSA881X_ANALOG_BASE+0x0023)
#define WSA881X_SPKR_BIAS_INT			(WSA881X_ANALOG_BASE+0x0024)
#define WSA881X_SPKR_PA_INT			(WSA881X_ANALOG_BASE+0x0025)
#define WSA881X_SPKR_BIAS_CAL			(WSA881X_ANALOG_BASE+0x0026)
#define WSA881X_SPKR_BIAS_PSRR			(WSA881X_ANALOG_BASE+0x0027)
#define WSA881X_SPKR_STATUS1			(WSA881X_ANALOG_BASE+0x0028)
#define WSA881X_SPKR_STATUS2			(WSA881X_ANALOG_BASE+0x0029)
#define WSA881X_BOOST_EN_CTL			(WSA881X_ANALOG_BASE+0x002A)
#define WSA881X_BOOST_CURRENT_LIMIT		(WSA881X_ANALOG_BASE+0x002B)
#define WSA881X_BOOST_PS_CTL			(WSA881X_ANALOG_BASE+0x002C)
#define WSA881X_BOOST_PRESET_OUT1		(WSA881X_ANALOG_BASE+0x002D)
#define WSA881X_BOOST_PRESET_OUT2		(WSA881X_ANALOG_BASE+0x002E)
#define WSA881X_BOOST_FORCE_OUT			(WSA881X_ANALOG_BASE+0x002F)
#define WSA881X_BOOST_LDO_PROG			(WSA881X_ANALOG_BASE+0x0030)
#define WSA881X_BOOST_SLOPE_COMP_ISENSE_FB	(WSA881X_ANALOG_BASE+0x0031)
#define WSA881X_BOOST_RON_CTL			(WSA881X_ANALOG_BASE+0x0032)
#define WSA881X_BOOST_LOOP_STABILITY		(WSA881X_ANALOG_BASE+0x0033)
#define WSA881X_BOOST_ZX_CTL			(WSA881X_ANALOG_BASE+0x0034)
#define WSA881X_BOOST_START_CTL			(WSA881X_ANALOG_BASE+0x0035)
#define WSA881X_BOOST_MISC1_CTL			(WSA881X_ANALOG_BASE+0x0036)
#define WSA881X_BOOST_MISC2_CTL			(WSA881X_ANALOG_BASE+0x0037)
#define WSA881X_BOOST_MISC3_CTL			(WSA881X_ANALOG_BASE+0x0038)
#define WSA881X_BOOST_ATEST_CTL			(WSA881X_ANALOG_BASE+0x0039)
#define WSA881X_SPKR_PROT_FE_GAIN		(WSA881X_ANALOG_BASE+0x003A)
#define WSA881X_SPKR_PROT_FE_CM_LDO_SET		(WSA881X_ANALOG_BASE+0x003B)
#define WSA881X_SPKR_PROT_FE_ISENSE_BIAS_SET1	(WSA881X_ANALOG_BASE+0x003C)
#define WSA881X_SPKR_PROT_FE_ISENSE_BIAS_SET2	(WSA881X_ANALOG_BASE+0x003D)
#define WSA881X_SPKR_PROT_ATEST1		(WSA881X_ANALOG_BASE+0x003E)
#define WSA881X_SPKR_PROT_ATEST2		(WSA881X_ANALOG_BASE+0x003F)
#define WSA881X_SPKR_PROT_FE_VSENSE_VCM		(WSA881X_ANALOG_BASE+0x0040)
#define WSA881X_SPKR_PROT_FE_VSENSE_BIAS_SET1	(WSA881X_ANALOG_BASE+0x0041)
#define WSA881X_BONGO_RESRV_REG1		(WSA881X_ANALOG_BASE+0x0042)
#define WSA881X_BONGO_RESRV_REG2		(WSA881X_ANALOG_BASE+0x0043)
#define WSA881X_SPKR_PROT_SAR			(WSA881X_ANALOG_BASE+0x0044)
#define WSA881X_SPKR_STATUS3			(WSA881X_ANALOG_BASE+0x0045)

#define WSA881X_NUM_REGISTERS		(WSA881X_SPKR_STATUS3+1)
#define WSA881X_MAX_REGISTER		(WSA881X_NUM_REGISTERS-1)
#define WSA881X_CACHE_SIZE		WSA881X_NUM_REGISTERS
#endif /* WSA881X_REGISTERS_H */
