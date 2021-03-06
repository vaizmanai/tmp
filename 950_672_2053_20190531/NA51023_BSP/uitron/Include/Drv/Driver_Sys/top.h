/**
    TOP controller header

    Sets the pinmux of each module.

    @file       top.h
    @ingroup    mIDrvSys_TOP
    @note       Refer data sheet for PIN/PAD naming

    Copyright   Novatek Microelectronics Corp. 2017.  All rights reserved.
*/

#ifndef _TOP_H
#define _TOP_H

#if defined(__UITRON)
#include "Type.h"
#else
#include "nvt_type.h"
#endif

/**
    @addtogroup mIDrvSys_TOP
*/
//@{


#define PIN_GROUP_CONFIG_VER 0x17021614


/**
    Debug port select ID

    Debug port select value for pinmux_select_debugport().
*/
typedef enum {
	PINMUX_DEBUGPORT_CKG =          0x0000,     ///< CKGen
	PINMUX_DEBUGPORT_ARB =          0x0001,     ///< Arbiter
	PINMUX_DEBUGPORT_DDR =          0x0002,     ///< DDR
	PINMUX_DEBUGPORT_APBTG =        0x0003,     ///< APBTG
	PINMUX_DEBUGPORT_OCPBRG =       0x0004,     ///< OCP BRG
	PINMUX_DEBUGPORT_INTC =         0x0005,     ///< INTC
	PINMUX_DEBUGPORT_IDE =          0x0006,     ///< IDE
	//PINMUX_DEBUGPORT_Reserved =     0x0007,     ///< Reserved
	//PINMUX_DEBUGPORT_Reserved =     0x0008,     ///< Reserved
	PINMUX_DEBUGMIPI_TSE =          0x0009,     ///< TSE
	PINMUX_DEBUGMIPI_CC =           0x000A,     ///< CC
	PINMUX_DEBUGMIPI_NOE =          0x000B,     ///< NOE
	PINMUX_DEBUGMIPI_ETH =          0x000C,     ///< ETH
	PINMUX_DEBUGMIPI_AHBC_ETH =     0x000D,     ///< AHBC ETH
	PINMUX_DEBUGPORT_OCP2BRG =      0x000E,     ///< OCP2 BRG
	PINMUX_DEBUGMIPI_TV =           0x000F,     ///< TV

	PINMUX_DEBUGPORT_TIMER =        0x0010,     ///< Timer
	PINMUX_DEBUGPORT_WDT =          0x0011,     ///< WDT
	PINMUX_DEBUGPORT_GPIO =         0x0012,     ///< GPIO
	PINMUX_DEBUGPORT_SSP =          0x0013,     ///< SSP (DAI)
	PINMUX_DEBUGPORT_AUDIO =        0x0014,     ///< AUDIO
	PINMUX_DEBUGPORT_SDIO1 =        0x0015,     ///< SDIO1
	PINMUX_DEBUGPORT_SDIO2 =        0x0016,     ///< SDIO2
	PINMUX_DEBUGPORT_SDIO3 =        0x0017,     ///< SDIO3
	PINMUX_DEBUGPORT_SMMC =         0x0018,     ///< XD/NAND/SMC
	PINMUX_DEBUGPORT_USB =          0x0019,     ///< USB
	//PINMUX_DEBUGPORT_Reserved =     0x001A,     ///< Reserved
	PINMUX_DEBUGPORT_AHBC_USB =     0x001B,     ///< AHBC_USB
	PINMUX_DEBUGPORT_I2C =          0x001C,     ///< I2C
	PINMUX_DEBUGPORT_I2C2 =         0x001D,     ///< I2C2
	PINMUX_DEBUGPORT_I2C3 =         0x001E,     ///< I2C3
	PINMUX_DEBUGPORT_SIF =          0x001F,     ///< SIF

	PINMUX_DEBUGPORT_SPI =          0x0020,     ///< SPI
	PINMUX_DEBUGPORT_SPI2 =         0x0021,     ///< SPI2
	PINMUX_DEBUGPORT_SPI3 =         0x0022,     ///< SPI3
	PINMUX_DEBUGPORT_HASH =         0x0023,     ///< HASH
    //PINMUX_DEBUGPORT_Reserved =     0x0024,     ///< Reserved
	PINMUX_DEBUGPORT_PWM =          0x0025,     ///< PWM
	PINMUX_DEBUGPORT_ADM =          0x0026,     ///< ADC
	PINMUX_DEBUGPORT_REMOTE =       0x0027,     ///< Remote
	PINMUX_DEBUGPORT_CRYPTO =       0x0028,     ///< Crypto
	PINMUX_DEBUGPORT_TRNG =         0x0029,     ///< TRNG
	PINMUX_DEBUGPORT_DRTC =         0x002A,     ///< DRTC
	PINMUX_DEBUGPORT_UART2 =        0x002B,     ///< UART2
	PINMUX_DEBUGPORT_UART3 =        0x002C,     ///< UART3
	PINMUX_DEBUGPORT_UART4 =        0x002D,     ///< UART4
	PINMUX_DEBUGPORT_EFUSE =        0x002E,     ///< EFUSE
	PINMUX_DEBUGPORT_RSA =          0x002F,     ///< RSA

	PINMUX_DEBUGPORT_DSP =          0x0030,     ///< DSP
	PINMUX_DEBUGPORT_H264 =         0x0038,     ///< H.264

	PINMUX_DEBUGMIPI_CSI =          0x0040,     ///< MIPI CSI
	PINMUX_DEBUGMIPI_CSI2 =         0x0041,     ///< MIPI CSI2
	//PINMUX_DEBUGPORT_Reserved =     0x0042,     ///< Reserved
	PINMUX_DEBUGPORT_SIE =          0x0043,     ///< SIE
	PINMUX_DEBUGMIPI_SIE2 =         0x0044,     ///< SIE2
	//PINMUX_DEBUGPORT_Reserved =     0x0045,     ///< Reserved
	//PINMUX_DEBUGPORT_Reserved =     0x0046,     ///< Reserved
	PINMUX_DEBUGPORT_TGE =          0x0047,     ///< TGE
	PINMUX_DEBUGPORT_DIS =          0x0048,     ///< DIS
	PINMUX_DEBUGPORT_FDE =          0x0049,     ///< FDE
	PINMUX_DEBUGPORT_JPEG =         0x004A,     ///< JPEG
	PINMUX_DEBUGPORT_GRAPHIC =      0x004B,     ///< GRAPHIC
	PINMUX_DEBUGPORT_GRAPHIC2 =     0x004C,     ///< GRAPHIC2
	PINMUX_DEBUGPORT_IFE =          0x004D,     ///< IFE
	//PINMUX_DEBUGPORT_Reserved =     0x004E,     ///< Reserved
	PINMUX_DEBUGPORT_ISE =          0x004F,     ///< ISE
	//PINMUX_DEBUGPORT_Reserved =     0x0050,     ///< Reserved
	PINMUX_DEBUGPORT_RHE =          0x0051,     ///< RHE
	PINMUX_DEBUGPORT_IFE2 =         0x0052,     ///< IFE2
	PINMUX_DEBUGPORT_IPE =          0x0053,     ///< IPE
	PINMUX_DEBUGPORT_DCE =          0x0054,     ///< DCE
	PINMUX_DEBUGPORT_IME =          0x0055,     ///< IME

	PINMUX_DEBUGPORT_GROUP_NONE =   0x0000,     ///< No debug port is output
	PINMUX_DEBUGPORT_GROUP1 =       0x0100,     ///< Output debug port to MC[18..0]
	PINMUX_DEBUGPORT_GROUP2 =       0x0200,     ///< Output debug port to LCD[18..0]

	ENUM_DUMMY4WORD(PINMUX_DEBUGPORT)
} PINMUX_DEBUGPORT;

// for backward compatible
#define PINMUX_DEBUGMIPI_OCP   PINMUX_DEBUGPORT_OCPBRG


/**
    OCP Debug port select ID

    Debug port select value for pinmux_select_ocp_debugport().
*/
typedef enum {
	PINMUX_DEBUGPORT_OCPCMD_DMA_APB =   0x0,    ///< OCP CMD vs. DMA/APB
	PINMUX_DEBUGPORT_OCPCMD_HANDSHAKE = 0x1,    ///< OCP CMD handshaking
	PINMUX_DEBUGPORT_OCP_DMA =          0x2,    ///< OCP vs. DMA
	PINMUX_DEBUGPORT_OCP_DEBUG_3 =      0x3,    ///< OCP debug 3
	PINMUX_DEBUGPORT_OCP_DEBUG_4 =      0x4,    ///< OCP debug 4

	ENUM_DUMMY4WORD(PINMUX_DEBUGPORT_OCP)
} PINMUX_DEBUGPORT_OCP;

/**
    Function group

    @note For pinmux_init()
*/
typedef enum {
	PIN_FUNC_SDIO,      ///< SDIO. Configuration refers to PIN_SDIO_CFG.
	PIN_FUNC_SDIO2,     ///< SDIO2. Configuration refers to PIN_SDIO_CFG.
	PIN_FUNC_SDIO3,     ///< SDIO3. Configuration refers to PIN_SDIO_CFG.
	PIN_FUNC_NAND,      ///< NAND. Configuration refers to PIN_NAND_CFG.
	PIN_FUNC_SENSOR,    ///< sensor interface. Configuration refers to PIN_SENSOR_CFG.
	PIN_FUNC_SENSOR2,   ///< sensor2 interface. Configuration refers to PIN_SENSOR2_CFG.
	PIN_FUNC_MIPI_LVDS, ///< MIPI/LVDS interface configuration. Configuration refers to PIN_MIPI_LVDS_CFG.
	PIN_FUNC_I2C,       ///< I2C. Configuration refers to PIN_I2C_CFG.
	PIN_FUNC_SIF,       ///< SIF. Configuration refers to PIN_SIF_CFG.
	PIN_FUNC_UART,      ///< UART. Configuration refers to PIN_UART_CFG.
	PIN_FUNC_SPI,       ///< SPI. Configuration refers to PIN_SPI_CFG.
	PIN_FUNC_REMOTE,    ///< REMOTE. Configuration refers to PIN_REMOTE_CFG.
	PIN_FUNC_PWM,       ///< PWM. Configuration refers to PIN_PWM_CFG.
	PIN_FUNC_AUDIO,     ///< AUDIO. Configuration refers to PIN_AUDIO_CFG.
	PIN_FUNC_LCD,       ///< LCD interface. Configuration refers to PINMUX_LCDINIT, PINMUX_PMI_CFG, PINMUX_DISPMUX_SEL.
	PIN_FUNC_TV,        ///< TV interface. Configuration refers to PINMUX_TV_HDMI_CFG.
	PIN_FUNC_ETH,       ///< ETH. Configuration refers to PINMUX_ETH_CFG
	PIN_FUNC_MISC,      ///< MISC. Configuration refers to PINMUX_MISC_CFG

	ENUM_DUMMY4WORD(PIN_FUNC)
} PIN_FUNC;

/**
    PIN config for SDIO

    @note For pinmux_init() with PIN_FUNC_SDIO or PIN_FUNC_SDIO2 or PIN_FUNC_SDIO3.\n
            For example, you can use {PIN_FUNC_SDIO, PIN_SDIO_CFG_1ST_PINMUX|PIN_SDIO_CFG_4BITS}\n
            to declare SDIO is 4 bits and located in 1st pinmux location.
*/
typedef enum {
	PIN_SDIO_CFG_NONE,
	PIN_SDIO_CFG_4BITS = 0x01,      ///< 4 bits wide
	PIN_SDIO_CFG_8BITS = 0x02,      ///< 8 bits wide

	PIN_SDIO_CFG_1ST_PINMUX = 0x00,///< 1st pinmux location
                                     ///< For SDIO: enable SDIO_CLK/SDIO_CMD/SDIO_D[0..3] on MC[12..17] (C_GPIO[12..17])
                                     ///< For SDIO2: enable SDIO2_CLK/SDIO2_CMD/SDIO2_D[0..3] on MC[18..23] (C_GPIO[18..23])
                                     ///< For SDIO3: enable SDIO3_D[0..7]/SDIO3_CLK/SDIO3_STROBE/SDIO3_CMD on MC[0..10] (C_GPIO[0...10])
	PIN_SDIO_CFG_2ND_PINMUX = 0x10, ///< Not support 2nd pinmux location  (Backward compatible)

	ENUM_DUMMY4WORD(PIN_SDIO_CFG)
} PIN_SDIO_CFG;

/**
    PIN config for NAND

    @note For pinmux_init() with PIN_FUNC_NAND.\n
            For example, you can use {PIN_FUNC_NAND, PIN_NAND_CFG_1CS} to declare NAND with 1 CS.
*/
typedef enum {
	PIN_NAND_CFG_NONE,
	PIN_NAND_CFG_1CS = 0x01,        ///< 1 chip select. Enable FSPI_DO/FSPI_DI/FSPI_WP/FSPI_HOLD/FSPI_CLK/FSPI_CS on MC[0..3]/MC[8]/MC[11] (C_GPIO[0..3], C_GPIO[8], C_GPIO[11])
	PIN_NAND_CFG_2CS = 0x02,        ///< Not support 2 chip select. (Backward compatible)
	PIN_NAND_CFG_SPI_NAND = 0x4,    ///< Virtual enum for project layer configuration
	PIN_NAND_CFG_SPI_NOR = 0x8,     ///< Virtual enum for project layer configuration
	ENUM_DUMMY4WORD(PIN_NAND_CFG)
} PIN_NAND_CFG;

/**
    PIN config for Sensor

    @note For pinmux_init() with PIN_FUNC_SENSOR.\n
            For example, you can use {PIN_FUNC_SENSOR, PIN_SENSOR_CFG_12BITS|PIN_SENSOR_CFG_SHUTTER0|PIN_SENSOR_CFG_MCLK}\n
            to declare sensor interface is 12 bits sensor, has SHUTTER 0 and MCLK.
*/
typedef enum {
	PIN_SENSOR_CFG_NONE,
	PIN_SENSOR_CFG_8BITS = 0x01,        ///< Not support. (Backward compatible)
	PIN_SENSOR_CFG_10BITS = 0x02,       ///< Not support. (Backward compatible)
	PIN_SENSOR_CFG_12BITS = 0x04,       ///< 12 bits sensor. Enable SN_D[0..11]/SN_PXCLK/SN_VD/SN_HD on CLK1_N, CLK1_P,D0_N, D0_P, D1_N, D1_P, CLK0_N, CLK0_P, D2_N, D2_P, D3_N, D3_P/SN_PXCLK/SN_VD/SN_HD (HSI_GPI[0..11]/S_GPIO[1..3])
	PIN_SENSOR_CFG_CCIR8BITS = 0x08,    ///< CCIR 8 bits sensor. Enable CCIR_YC[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD/CCIR_FIELD on D1_N, D1_P, CLK0_N, CLK0_P, D2_N, D2_P, D3_N, D3_P/SN_PXCLK/SN_VD/SN_HD/S_GPIO4 (HSI_GPI[2..9]/S_GPIO[1..4])
	PIN_SENSOR_CFG_CCIR16BITS = 0x10,   ///< CCIR 16 bits sensor. Enable CCIR_Y[0..7]/CCIR_C[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD/CCIR_FIELD on D1_N, D1_P, CLK0_N, CLK0_P, D2_N, D2_P, D3_N, D3_P/PWM[0..7]/SN_PXCLK/SN_VD/SN_HD/SGPIO4 (HSI_GPI[2..9]/P_GPIO[0..7]/S_GPIO[1..4]).
	PIN_SENSOR_CFG_MIPI = 0x20,         ///< MIPI sensor. PIN/PAD is configured by PIN_FUNC_MIPI_LVDS group.
	PIN_SENSOR_CFG_LVDS = 0x40,         ///< LVDS sensor PIN/PAD is configured by PIN_FUNC_MIPI_LVDS group.
	PIN_SENSOR_CFG_LVDS_VDHD = 0x80,    ///< Enable SN_XVS/SN_XHS on SN_VD/SN_HD (SN_SGPIO[2..3])

	PIN_SENSOR_CFG_SHUTTER0 = 0x100,    ///< Enable SN_SHUTTER0 on SGPIO12 (S_GPIO[12])
	PIN_SENSOR_CFG_MCLK = 0x200,        ///< Enable SN_MCLK on SN_MCLK (S_GPIO[0])
	PIN_SENSOR_CFG_MCLK2 = 0x400,       ///< Enable SN_MCLK2 on SN_PXCLK (S_GPIO[1])
	PIN_SENSOR_CFG_MES0 = 0x800,        ///< Enable ME_SHUT0 on PWM0 (P_GPIO[0])
	PIN_SENSOR_CFG_MES0_2ND = 0x1000,   ///< Enable (2nd) ME_SHUT0 on PWM8 (P_GPIO[8])
	PIN_SENSOR_CFG_MES1 = 0x2000,       ///< Enable ME_SHUT1 on PWM1 (P_GPIO[1])
	PIN_SENSOR_CFG_MES1_2ND = 0x4000,   ///< Enable (2nd) ME_SHUT1 on PWM9 (P_GPIO[9])
	PIN_SENSOR_CFG_FLCTR = 0x8000,      ///< Enable FLASH_CTL on PGPIO25 (P_GPIO[25])
	PIN_SENSOR_CFG_STROBE = 0x10000,    ///< Enable STROBE on SGPIO14 (S_GPIO[14])
	PIN_SENSOR_CFG_SPCLK = 0x20000,     ///< Enable SP_CLK on SP_CLK (L_GPIO[20])
	PIN_SENSOR_CFG_SPCLK_2ND = 0x40000, ///< Enable SP_CLK on SP_2_CLK (P_GPIO[19])
	PIN_SENSOR_CFG_SP2CLK = 0x80000,    ///< Enable SP2_CLK on SP2_CLK (P_GPIO[24])
	PIN_SENSOR_CFG_SP2CLK_2ND = 0x100000,///< Enable SP2_CLK on SP2_2_CLK (P_GPIO[15])
	PIN_SENSOR_CFG_MES2 = 0x200000,      ///< Enable ME_SHUT2 on PWM2 (P_GPIO[2])
	PIN_SENSOR_CFG_MES2_2ND = 0x400000,  ///< Enable (2nd) ME_SHUT2 on PWM10 (P_GPIO[10])
	PIN_SENSOR_CFG_MES3 = 0x800000,      ///< Enable ME_SHUT3 on PWM3 (P_GPIO[3])
	PIN_SENSOR_CFG_MES3_2ND = 0x1000000, ///< Enable (2nd) ME_SHUT3 on PWM11 (P_GPIO[11])
	PIN_SENSOR_CFG_LOCKN = 0x2000000,    ///< Not support (Backward compatible)
	PIN_SENSOR_CFG_SHUTTER1 = 0x4000000,     ///< Enable SN_SHUTTER1 on SGPIO13 (S_GPIO[13])
	PIN_SENSOR_CFG_12BITS_2ND = 0x8000000,    ///< 12 bits sensor 2nd. Enable SN_D[0..11]/SN_PXCLK/SN_VD/SN_HD on PWM8~PWM11, PWM0~PWM7,PGPIO12/SN_VD/SN_HD (P_GPIO[0..12]/S_GPIO[2..3])


	ENUM_DUMMY4WORD(PIN_SENSOR_CFG)
} PIN_SENSOR_CFG;

/**
    PIN config for Sensor2

    @note For pinmux_init() with PIN_FUNC_SENSOR2.\n
            For example, you can use {PIN_FUNC_SENSOR2, PIN_SENSOR2_CFG_CCIR8BITS}\n
            to declare sensor2 interface connect a CCIR 8 bits sensor.
*/
typedef enum {
	PIN_SENSOR2_CFG_NONE,
	PIN_SENSOR2_CFG_CCIR8BITS = 0x08,   ///< CCIR 8 bits sensor. Enable CCIR_YC[0..7]/CCIR_VD/CCIR_HD/CCIR_CLK on HSI_D[5..9]N/HSI_D[5..9]P/SN_DGPIO[4] (S_GPI[12..21]/SN_DGPIO[4])
	PIN_SENSOR2_CFG_CCIR16BITS = 0x10,  ///< CCIR 16 bits sensor. Enable CCIR_Y[0..7]/CCIR_C[0..7]/CCIR_VD/CCIR_HD/CCIR_CLK on HSI_D[2..9]N/HSI_D[2..9]P/SN_DGPIO[4] (S_GPI[4..21]/SN_DGPIO[4]).
	PIN_SENSOR2_CFG_MIPI = 0x20,        ///< MIPI sensor. PIN/PAD is configured by PIN_FUNC_MIPI_LVDS group.
	PIN_SENSOR2_CFG_LVDS = 0x40,        ///< LVDS sensor. PIN/PAD is configured by PIN_FUNC_MIPI_LVDS group.
	PIN_SENSOR2_CFG_LVDS_VDHD = 0x80,   ///< Enable SN2_XVS/SN2_XHS on SN2_VD/SN2_HD (SN_SGPIO[4..5])
	PIN_SENSOR2_CFG_10BITS = 0x100,     ///< Not support 10 bits sensor.(Backward compatible)
	PIN_SENSOR2_CFG_MCLK = 0x200,       ///< Enable SN2_MCLK on pwm8 (P_GPIO[8])
    PIN_SENSOR2_CFG_MCLK2 = 0x400,      ///< Enable SN2_MCLK2 on SN_PXCLK (S_GPIO[1])
	PIN_SENSOR2_CFG_12BITS = 0x800,     ///< 12 bits sensor 2nd. Enable SN_D[0..11]/SN_PXCLK/SN_VD/SN_HD on PWM8~PWM11, PWM0~PWM7,PGPIO12/SN_VD/SN_HD (P_GPIO[0..12]/S_GPIO[2..3])

	ENUM_DUMMY4WORD(PIN_SENSOR2_CFG)
} PIN_SENSOR2_CFG;


/**
    PIN config for MIPI/LVDS

    @note For pinmux_init() with PIN_FUNC_MIPI_LVDS.\n
            For example, you can use {PIN_FUNC_MIPI_LVDS, PIN_MIPI_LVDS_CFG_CLK0|PIN_MIPI_LVDS_CFG_DAT0|PIN_MIPI_LVDS_CFG_DAT1}\n
            to declare LVDS/MIPI connect sensor with CLK0/D0/D1 lanes.
*/
typedef enum {
	PIN_MIPI_LVDS_CFG_NONE,

	PIN_MIPI_LVDS_CFG_CLK0 = 0x1,       ///< CLK lane 0. Enable HSI_CK0N/HSI_CK0P for LVDS/CSI/CSI2.
	PIN_MIPI_LVDS_CFG_CLK1 = 0x2,       ///< CLK lane 1. Enable HSI_CK1N/HSI_CK1P for LVDS/CSI/CSI2.

	PIN_MIPI_LVDS_CFG_DAT0 = 0x100,     ///< DATA lane 0. Enable HSI_D0N/HSI_D0P for LVDS/CSI/CSI2.
	PIN_MIPI_LVDS_CFG_DAT1 = 0x200,     ///< DATA lane 1. Enable HSI_D1N/HSI_D1P for LVDS/CSI/CSI2.
	PIN_MIPI_LVDS_CFG_DAT2 = 0x400,     ///< DATA lane 2. Enable HSI_D2N/HSI_D2P for LVDS/CSI/CSI2.
	PIN_MIPI_LVDS_CFG_DAT3 = 0x800,     ///< DATA lane 3. Enable HSI_D3N/HSI_D3P for LVDS/CSI/CSI2.
	PIN_MIPI_LVDS_CFG_DAT4 = 0x1000,    ///< No DATA lane 4.  Only support 2C4D.
	PIN_MIPI_LVDS_CFG_DAT5 = 0x2000,    ///< No DATA lane 5.  Only support 2C4D.
	PIN_MIPI_LVDS_CFG_DAT6 = 0x4000,    ///< No DATA lane 6.  Only support 2C4D..
	PIN_MIPI_LVDS_CFG_DAT7 = 0x8000,    ///< No DATA lane 7.  Only support 2C4D..
	PIN_MIPI_LVDS_CFG_DAT8 = 0x10000,   ///< No DATA lane 8.  Only support 2C4D..
	PIN_MIPI_LVDS_CFG_DAT9 = 0x20000,   ///< No DATA lane 9.  Only support 2C4D..

	ENUM_DUMMY4WORD(PIN_MIPI_LVDS_CFG)
} PIN_MIPI_LVDS_CFG;

/**
    PIN config for I2C

    @note For pinmux_init() with PIN_FUNC_I2C.\n
            For example, you can use {PIN_FUNC_I2C, PIN_I2C_CFG_CH1|PIN_I2C_CFG_CH2}\n
            to declare I2C channel1 and channel2 pinmux both enabled.
*/
typedef enum {
	PIN_I2C_CFG_NONE,
	PIN_I2C_CFG_CH1 = 0x01,             ///< Enable channel 1. Enable I2C_SCL/I2C_SDA (S_GPIO[7..8])
	PIN_I2C_CFG_CH1_2ND_PINMUX = 0x02,  ///<  Not supported 2nd pinmux of I2C channel 1
	PIN_I2C_CFG_CH2 = 0x10,             ///< Enable channel 2. Enable I2C2_SCL/I2C2_SDA (S_GPIO[10..11])
	PIN_I2C_CFG_CH2_2ND_PINMUX = 0x20,  ///< Not supported 2nd pinmux of I2C channel 2
	PIN_I2C_CFG_CH3 = 0x40,             ///< Enable channel 3. Enable I2C3_SDA/I2C3_SCK (P_GPIO[13..14])
	ENUM_DUMMY4WORD(PIN_I2C_CFG)
} PIN_I2C_CFG;

/**
    PIN config for SIF

    *note For pinmux_init() with PIN_FUNC_SIF.\n
            For example, you can use {PIN_FUNC_SIF, PIN_SIF_CFG_CH0|PIN_SIF_CFG_CH2}\n
            to declare SIF channel0 and channel2 pinmux are enabled.
*/
typedef enum {
	PIN_SIF_CFG_NONE,

	PIN_SIF_CFG_CH0 = 0x01,             ///< Enable SIF channel 0. Enable SB_CS/SB_CK/SB_DAT (S_GPIO[6..8])

	PIN_SIF_CFG_CH1 = 0x02,             ///< Enable SIF channel 1. Enable SB2_CS/SB2_CK/SB2_DAT (S_GPIO[9..11])
	PIN_SIF_CFG_CH1_2ND_PINMUX = 0x04,  ///< Backward compatible. Not supported

	PIN_SIF_CFG_CH2 = 0x08,             ///< Enable SIF channel 2. Enable SB3_CS/SB3_CK/SB3_DAT (L_GPIO[21..23])

	PIN_SIF_CFG_CH3 = 0x10,             ///< Enable SIF channel 3. Enable SB4_CK/SB4_CS/SB4_DAT (P_GPIO[15..17])

	PIN_SIF_CFG_CH4 = 0x20,             ///< Not support SIF channel 4.

	PIN_SIF_CFG_CH5 = 0x40,             ///< Not support SIF channel 5.

	ENUM_DUMMY4WORD(PIN_SIF_CFG)
} PIN_SIF_CFG;

/**
    PIN config for UART

    @note For pinmux_init() with PIN_FUNC_UART.\n
            For example, you can use {PIN_FUNC_UART, PIN_UART_CFG_CH1}\n
            to declare UART1 pinmux is enabled.
*/
typedef enum {
	PIN_UART_CFG_NONE,

	PIN_UART_CFG_CH1 = 0x01,            ///< Enable channel 1. Enable UART TX and RX
	PIN_UART_CFG_CH1_TX = 0x02,         ///< Enalbe channel 1. Enable only UART_TX

	PIN_UART_CFG_CH2 = 0x04,            ///< Enable channel 2. Enable UART2 TX and RX
	PIN_UART_CFG_CH2_CTSRTS = 0x08,     ///< Enable channel 2 HW handshake. Enable UART2 CTS and RTS
	PIN_UART_CFG_CH2_2ND = 0x10,        ///< Enable channel 2 to 2ND pinmux (UART2_2)

	PIN_UART_CFG_CH3 = 0x20,            ///< Enable channel 3. Enable UART3 TX and RX
	PIN_UART_CFG_CH3_CTSRTS = 0x40,     ///< Enable channel 3 HW handshake. Enable UART3 CTS and RTS
	PIN_UART_CFG_CH3_2ND = 0x80,        ///< Enable channel 3 to 2ND pinmux (UART3_2)

	PIN_UART_CFG_CH4 = 0x100,           ///< Enable channel 4. Enable UART4 TX and RX
	PIN_UART_CFG_CH4_CTSRTS = 0x200,    ///< Enable channel 4 HW handshake. Enable UART4 CTS and RTS
	PIN_UART_CFG_CH4_2ND = 0x400,       ///< Enable channel 4 to 2ND pinmux (UART4_2)

	ENUM_DUMMY4WORD(PIN_UART_CFG)
} PIN_UART_CFG;

/**
    PIN config for SPI

    @note For pinmux_init() with PIN_FUNC_SPI.\n
            For example, you can use {PIN_FUNC_SPI, PIN_SPI_CFG_CH1|PIN_SPI_CFG_CH3}\n
            to declare SPI channel1 and channel3 are enabled.
*/
typedef enum {
	PIN_SPI_CFG_NONE,

	PIN_SPI_CFG_CH1            = 0x01,   ///< Enable channel 1. Enable SPI_CLK/SPI_CS/SPI_DO on MC[12]/MC[13]/MC[15] (C_GPIO[12]/C_GPIO[13]/C_GPIO[15])
	PIN_SPI_CFG_CH1_2BITS      = 0x02,   ///< Enable channel 1 with 2 bits mode. Enable SPI_1_DI on MC[14] (C_GPIO[14]) or SPI_2_DI on pgpio[18] (P_GPIO[18])
	PIN_SPI_CFG_CH1_4BITS      = 0x04,   ///< Not support SPI1 4-bit mode
	PIN_SPI_CFG_CH1_2ND_PINMUX = 0x08,   ///< Enable 2nd pinmux of channel 1. Enable SPI_CLK/SPI_CS/SPI_DO  on pgpio[15..17] (P_GPIO[15..17])

	PIN_SPI_CFG_CH2            = 0x10,   ///< Enable channel 2. Enable SPI2_CS/SPI2_CLK/SPI2_DO on sgpio[9..11] (S_GPIO[9..11])
	PIN_SPI_CFG_CH2_2BITS      = 0x20,   ///< Enable channel 2. Enable SPI2_1_DI on sgpio[12] (S_GPIO[12]) or SPI2_2_DI on PWM11 (P_GPIO[11])
	PIN_SPI_CFG_CH2_2ND_PINMUX = 0x40,   ///< Enable 2nd pinmux of channel 2. Enable SPI2_CLK/SPI2_CS/SPI2_DO on PWM[8..10] (P_GPIO[8..10])

	PIN_SPI_CFG_CH3            = 0x100,   ///< Enable channel 3. Eanble SPI3_CLK/SPI3_CS/SPI3_DO on pgpio[20..22] (P_GPIO[20..22])
	PIN_SPI_CFG_CH3_2BITS      = 0x200,   ///< Enable channel 3. Eanble SPI3_1_DI on pgpio23  (P_GPIO[23]) or  SPI3_2_DI on MC20 (C_GPIO[20])
	PIN_SPI_CFG_CH3_2ND_PINMUX = 0x400,   ///< Enable 2nd pinmux of channel 3. Enable SPI3_CLK/SPI3_CS/SPI3_DO on MC[18..19] and MC21 (C_GPIO[18..19] and C_GPIO21)
	PIN_SPI_CFG_CH3_RDY        = 0x800,   ///< Enable channel 3 RDY. If enable SPI3_1_RDY (P_GPIO[25]). If enable SPI3_2_RDY (C_GPIO[22])

	PIN_SPI_CFG_CH4            = 0x1000,    ///< Not support SPI4
	PIN_SPI_CFG_CH4_2BITS      = 0x2000,    ///< Not support SPI4
	PIN_SPI_CFG_CH4_2ND_PINMUX = 0x4000,    ///< Not support SPI4
	PIN_SPI_CFG_CH4_RDY        = 0x8000,    ///< Not support SPI4

	PIN_SPI_CFG_CH5            = 0x10000,   ///< Not support SPI5
	PIN_SPI_CFG_CH5_2BITS      = 0x20000,   ///< Not support SPI5
	PIN_SPI_CFG_CH5_2ND_PINMUX = 0x40000,///<    Not support SPI5

	ENUM_DUMMY4WORD(PIN_SPI_CFG)
} PIN_SPI_CFG;

/**
    PIN config for REMOTE

    @note For pinmux_init() with PIN_FUNC_REMOTE.\n
            For example, you can use {PIN_FUNC_REMOTE, PIN_REMOTE_CFG_CH1}\n
            to declare remote pinmux is enabled.
*/
typedef enum {
	PIN_REMOTE_CFG_NONE,
	PIN_REMOTE_CFG_CH1,                 ///< Enable remote rx channel 1. Enable REMOTE_RX (on P_GPIO[24])

	ENUM_DUMMY4WORD(PIN_REMOTE_CFG)
} PIN_REMOTE_CFG;

/**
    PIN config for PWM

    @note For pinmux_init() with PIN_FUNC_PWM.\n
            For example, you can use {PIN_FUNC_PWM, PIN_PWM_CFG_PWM0|PIN_PWM_CFG_PWM1|PIN_PWM_CFG_PWM2|PIN_PWM_CFG_PWM3}\n
            to declare your system need PWM channel0/1/2/3.
*/
typedef enum {
	PIN_PWM_CFG_NONE,
	PIN_PWM_CFG_PWM0 = 0x01,            ///< Enable PWM0 (on P_GPIO[0])
	PIN_PWM_CFG_PWM1 = 0x02,            ///< Enable PWM1 (on P_GPIO[1])
	PIN_PWM_CFG_PWM2 = 0x04,            ///< Enable PWM2 (on P_GPIO[2])
	PIN_PWM_CFG_PWM3 = 0x08,            ///< Enable PWM3 (on P_GPIO[3])
	PIN_PWM_CFG_PWM4 = 0x10,            ///< Enable PWM4 (on P_GPIO[4])
	PIN_PWM_CFG_PWM5 = 0x20,            ///< Enable PWM5 (on P_GPIO[5])
	PIN_PWM_CFG_PWM6 = 0x40,            ///< Enable PWM6 (on P_GPIO[6])
	PIN_PWM_CFG_PWM7 = 0x80,            ///< Enable PWM7 (on P_GPIO[7])
	PIN_PWM_CFG_PWM8 = 0x100,           ///< Enable PWM8 (on P_GPIO[8])
	PIN_PWM_CFG_PWM9 = 0x200,           ///< Enable PWM9 (on P_GPIO[9])
	PIN_PWM_CFG_PWM10 = 0x400,          ///< Enable PWM10 (on P_GPIO[10])
	PIN_PWM_CFG_PWM11 = 0x800,          ///< Enable PWM11 (on P_GPIO[11])
	PIN_PWM_CFG_PWM12 = 0x1000,         ///< Enable PWM12 (on P_GPIO[15])
	PIN_PWM_CFG_PWM13 = 0x2000,         ///< Enable PWM13 (on P_GPIO[16])
	PIN_PWM_CFG_PWM14 = 0x4000,         ///< Enable PWM14 (on P_GPIO[17])
	PIN_PWM_CFG_PWM15 = 0x8000,         ///< Enable PWM15 (on P_GPIO[25])
	PIN_PWM_CFG_PWM16 = 0x10000,        ///< Not support PWM16
	PIN_PWM_CFG_PWM17 = 0x20000,        ///< Not support PWM17
	PIN_PWM_CFG_PWM18 = 0x40000,        ///< Not support PWM18
	PIN_PWM_CFG_PWM19 = 0x80000,        ///< Not support PWM19

	PIN_PWM_CFG_CCNT      = 0x1000000,      ///< Enable PICNT_1
	PIN_PWM_CFG_CCNT_2ND  = 0x2000000,      ///< Enable PICNT_2
	PIN_PWM_CFG_CCNT2     = 0x4000000,      ///< Enable PICNT2_1
	PIN_PWM_CFG_CCNT2_2ND = 0x8000000,      ///< Enable PICNT2_2
	PIN_PWM_CFG_CCNT3     = 0x10000000,     ///< Enable PICNT3_1
	PIN_PWM_CFG_CCNT3_2ND = 0x20000000,     ///< Enable PICNT3_2
	PIN_PWM_CFG_CCNT4     = 0x40000000,     ///< Not support PICNT4_1
	PIN_PWM_CFG_CCNT4_2ND = 0x80000000,     ///< Not support PICNT4_2

	ENUM_DUMMY4WORD(PIN_PWM_CFG)
} PIN_PWM_CFG;

/**
    PIN config for AUDIO

    @note For pinmux_init() with PIN_FUNC_AUDIO.\n
            For example, you can use {PIN_FUNC_AUDIO, PIN_AUDIO_CFG_I2S|PIN_AUDIO_CFG_MCLK}\n
            to declare pinmux of I2S and I2S MCLK are enabled.
*/
typedef enum {
	PIN_AUDIO_CFG_NONE,
	PIN_AUDIO_CFG_I2S = 0x01,              ///< Enable I2S channel. Enable I2S_BCK/I2S_FCK/I2S_DO/I2S_DI/ (on P_GPIO[20..23])
	PIN_AUDIO_CFG_I2S_2ND_PINMUX = 0x02,///< Not support. Backward compatible

	PIN_AUDIO_CFG_MCLK = 0x10,             ///< Enable audio MCLK. Enable I2S_MCLK (on P_GPIO[19])
	PIN_AUDIO_CFG_MCLK_2ND_PINMUX = 0x20,///< Not support. Backward compatible

	PIN_AUDIO_CFG_DMIC = 0x100,           ///< Enable Digital Mic. Enable DMCLK/DMDAT (on P_GPIO[24..25])

	ENUM_DUMMY4WORD(PIN_AUDIO_CFG)
} PIN_AUDIO_CFG;

/**
    PIN config of LCD modes

    @note For pinmux_init() with PIN_FUNC_LCD \n
            For example, you can use {PIN_FUNC_LCD, PINMUX_DISPMUX_SEL_LCD | PINMUX_LCDMODE_RGB_SERIAL}\n
            to tell display object that PIN_FUNC_LCD is located on primary LCD pinmux,\n
            and it's LCD mode is RGB serial.
*/
typedef enum {
	PINMUX_LCDMODE_RGB_SERIAL           =    0,     ///< LCD MODE is RGB Serial or UPS051
	PINMUX_LCDMODE_RGB_PARALL           =    1,     ///< LCD MODE is RGB Parallel (888)
	PINMUX_LCDMODE_YUV640               =    2,     ///< LCD MODE is YUV640
	PINMUX_LCDMODE_YUV720               =    3,     ///< LCD MODE is YUV720
	PINMUX_LCDMODE_RGBD360              =    4,     ///< LCD MODE is RGB Dummy 360
	PINMUX_LCDMODE_RGBD320              =    5,     ///< LCD MODE is RGB Dummy 320
	PINMUX_LCDMODE_RGB_THROUGH          =    6,     ///< LCD MODE is RGB through mode
	PINMUX_LCDMODE_CCIR601              =    7,     ///< LCD MODE is CCIR601
	PINMUX_LCDMODE_CCIR656              =    8,     ///< LCD MODE is CCIR656
	PINMUX_LCDMODE_RGB_PARALL666        =    9,     ///< LCD MODE is RGB Parallel 666
	PINMUX_LCDMODE_RGB_PARALL565        =   10,     ///< LCD MODE is RGB Parallel 565
	PINMUX_LCDMODE_RGB_PARALL_DELTA     =   11,     ///< LCD MODE is RGB Parallel Delta
	PINMUX_LCDMODE_MIPI                 =   12,     ///< LCD MODE is MIPI Display

	PINMUX_LCDMODE_MI_OFFSET            = 32,       ///< Memory LCD MODE offset (not support MI. Below is backward compatible)
	PINMUX_LCDMODE_MI_FMT0              = 32 + 0,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT1              = 32 + 1,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT2              = 32 + 2,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT3              = 32 + 3,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT4              = 32 + 4,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT5              = 32 + 5,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT6              = 32 + 6,   ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT7              = 32 + 7,   ///< LCD MODE is Memory(Parallel Interface) 9bits
	PINMUX_LCDMODE_MI_FMT8              = 32 + 8,   ///< LCD MODE is Memory(Parallel Interface) 16bits
	PINMUX_LCDMODE_MI_FMT9              = 32 + 9,   ///< LCD MODE is Memory(Parallel Interface) 16bits
	PINMUX_LCDMODE_MI_FMT10             = 32 + 10,  ///< LCD MODE is Memory(Parallel Interface) 18bits
	PINMUX_LCDMODE_MI_FMT11             = 32 + 11,  ///< LCD MODE is Memory(Parallel Interface) 8bits
	PINMUX_LCDMODE_MI_FMT12             = 32 + 12,  ///< LCD MODE is Memory(Parallel Interface) 16bits
	PINMUX_LCDMODE_MI_FMT13             = 32 + 13,  ///< LCD MODE is Memory(Parallel Interface) 16bits
	PINMUX_LCDMODE_MI_FMT14             = 32 + 14,  ///< LCD MODE is Memory(Parallel Interface) 16bits
	PINMUX_LCDMODE_MI_SERIAL_BI         = 32 + 20,  ///< LCD MODE is Serial Interface bi-direction
	PINMUX_LCDMODE_MI_SERIAL_SEP        = 32 + 21,  ///< LCD MODE is Serial Interface separation

	PINMUX_LCDMODE_AUTO_PINMUX          = 0x01 << 22, ///< Set display device to GPIO mode when display device is closed. Select this filed will inform display object to switch to GPIO when display device is closed.


	PINMUX_HDMIMODE_OFFSET              = 64,       ///< HDMI MODE offset (not support HDMI. Below is backward compatible)
	PINMUX_HDMIMODE_640X480P60          = 64 + 1,   ///< HDMI Video format is 640x480 & Progressive 60fps
	PINMUX_HDMIMODE_720X480P60          = 64 + 2,   ///< HDMI Video format is 720x480 & Progressive 60fps & 4:3
	PINMUX_HDMIMODE_720X480P60_16X9     = 64 + 3,   ///< HDMI Video format is 720x480 & Progressive 60fps & 16:9
	PINMUX_HDMIMODE_1280X720P60         = 64 + 4,   ///< HDMI Video format is 1280x720 & Progressive 60fps
	PINMUX_HDMIMODE_1920X1080I60        = 64 + 5,   ///< HDMI Video format is 1920x1080 & Interlaced 60fps
	PINMUX_HDMIMODE_720X480I60          = 64 + 6,   ///< HDMI Video format is 720x480 & Interlaced 60fps
	PINMUX_HDMIMODE_720X480I60_16X9     = 64 + 7,   ///< HDMI Video format is 720x480 & Interlaced 60fps & 16:9
	PINMUX_HDMIMODE_720X240P60          = 64 + 8,   ///< HDMI Video format is 720x240 & Progressive 60fps
	PINMUX_HDMIMODE_720X240P60_16X9     = 64 + 9,   ///< HDMI Video format is 720x240 & Progressive 60fps & 16:9
	PINMUX_HDMIMODE_1440X480I60         = 64 + 10,  ///< HDMI Video format is 1440x480 & Interlaced 60fps
	PINMUX_HDMIMODE_1440X480I60_16X9    = 64 + 11,  ///< HDMI Video format is 1440x480 & Interlaced 60fps & 16:9
	PINMUX_HDMIMODE_1440X240P60         = 64 + 12,  ///< HDMI Video format is 1440x240 & Progressive 60fps
	PINMUX_HDMIMODE_1440X240P60_16X9    = 64 + 13,  ///< HDMI Video format is 1440x240 & Progressive 60fps & 16:9
	PINMUX_HDMIMODE_1440X480P60         = 64 + 14,  ///< HDMI Video format is 1440x480 & Progressive 60fps
	PINMUX_HDMIMODE_1440X480P60_16X9    = 64 + 15,  ///< HDMI Video format is 1440x480 & Progressive 60fps & 16:9
	PINMUX_HDMIMODE_720X576P50          = 64 + 17,  ///< HDMI Video format is 720x576 & Progressive 50fps
	PINMUX_HDMIMODE_720X576P50_16X9     = 64 + 18,  ///< HDMI Video format is 720x576 & Progressive 50fps & 16:9
	PINMUX_HDMIMODE_1280X720P50         = 64 + 19,  ///< HDMI Video format is 1280x720 & Progressive 50fps
	PINMUX_HDMIMODE_1920X1080I50        = 64 + 20,  ///< HDMI Video format is 1920x1080 & Interlaced 50fps
	PINMUX_HDMIMODE_720X576I50          = 64 + 21,  ///< HDMI Video format is 720x576 & Interlaced 50fps
	PINMUX_HDMIMODE_720X576I50_16X9     = 64 + 22,  ///< HDMI Video format is 720x576 & Interlaced 50fps & 16:9
	PINMUX_HDMIMODE_720X288P50          = 64 + 23,  ///< HDMI Video format is 720x288 & Progressive 50fps
	PINMUX_HDMIMODE_720X288P50_16X9     = 64 + 24,  ///< HDMI Video format is 720x288 & Progressive 50fps & 16:9
	PINMUX_HDMIMODE_1440X576I50         = 64 + 25,  ///< HDMI Video format is 1440x576 & Interlaced 50fps
	PINMUX_HDMIMODE_1440X576I50_16X9    = 64 + 26,  ///< HDMI Video format is 1440x576 & Interlaced 50fps & 16:9
	PINMUX_HDMIMODE_1440X288P50         = 64 + 27,  ///< HDMI Video format is 1440x288 & Progressive 50fps
	PINMUX_HDMIMODE_1440X288P50_16X9    = 64 + 28,  ///< HDMI Video format is 1440x288 & Progressive 50fps & 16:9
	PINMUX_HDMIMODE_1440X576P50         = 64 + 29,  ///< HDMI Video format is 1440x576 & Progressive 50fps
	PINMUX_HDMIMODE_1440X576P50_16X9    = 64 + 30,  ///< HDMI Video format is 1440x576 & Progressive 50fps & 16:9
	PINMUX_HDMIMODE_1920X1080P50        = 64 + 31,  ///< HDMI Video format is 1920x1080 & Progressive 50fps
	PINMUX_HDMIMODE_1920X1080P24        = 64 + 32,  ///< HDMI Video format is 1920x1080 & Progressive 24fps
	PINMUX_HDMIMODE_1920X1080P25        = 64 + 33,  ///< HDMI Video format is 1920x1080 & Progressive 25fps
	PINMUX_HDMIMODE_1920X1080P30        = 64 + 34,  ///< HDMI Video format is 1920x1080 & Progressive 30fps
	PINMUX_HDMIMODE_1920X1080I50_VT1250 = 64 + 39,  ///< HDMI Video format is 1920x1080 & Interlaced  50fps & V-total is 1250 lines
	PINMUX_HDMIMODE_1920X1080I100       = 64 + 40,  ///< HDMI Video format is 1920x1080 & Interlaced  100fps
	PINMUX_HDMIMODE_1280X720P100        = 64 + 41,  ///< HDMI Video format is 1280X720  & Progressive 100fps
	PINMUX_HDMIMODE_720X576P100         = 64 + 42,  ///< HDMI Video format is 720X576   & Progressive 100fps
	PINMUX_HDMIMODE_720X576P100_16X9    = 64 + 43,  ///< HDMI Video format is 720X576   & Progressive 100fps & 16:9
	PINMUX_HDMIMODE_720X576I100         = 64 + 44,  ///< HDMI Video format is 720X576  & Interlaced 100fps
	PINMUX_HDMIMODE_720X576I100_16X9    = 64 + 45,  ///< HDMI Video format is 720X576  & Interlaced 100fps & 16:9
	PINMUX_HDMIMODE_1920X1080I120       = 64 + 46,  ///< HDMI Video format is 1920X1080 & Interlaced 120fps
	PINMUX_HDMIMODE_1280X720P120        = 64 + 47,  ///< HDMI Video format is 1280X720  & Progressive 120fps
	PINMUX_HDMIMODE_720X480P120         = 64 + 48,  ///< HDMI Video format is 720X480   & Progressive 120fps
	PINMUX_HDMIMODE_720X480P120_16X9    = 64 + 49,  ///< HDMI Video format is 720X480   & Progressive 120fps & 16:9
	PINMUX_HDMIMODE_720X480I120         = 64 + 50,  ///< HDMI Video format is 720X480  & Interlaced 120fps
	PINMUX_HDMIMODE_720X480I120_16X9    = 64 + 51,  ///< HDMI Video format is 720X480  & Interlaced 120fps & 16:9
	PINMUX_HDMIMODE_720X576P200         = 64 + 52,  ///< HDMI Video format is 720X576  & Progressive 200fps
	PINMUX_HDMIMODE_720X576P200_16X9    = 64 + 53,  ///< HDMI Video format is 720X576  & Progressive 200fps & 16:9
	PINMUX_HDMIMODE_720X576I200         = 64 + 54,  ///< HDMI Video format is 720X576  & Interlaced 200fps
	PINMUX_HDMIMODE_720X576I200_16X9    = 64 + 55,  ///< HDMI Video format is 720X576  & Interlaced 200fps & 16:9
	PINMUX_HDMIMODE_720X480P240         = 64 + 56,  ///< HDMI Video format is 720X480  & Progressive 240fps
	PINMUX_HDMIMODE_720X480P240_16X9    = 64 + 57,  ///< HDMI Video format is 720X480  & Progressive 240fps & 16:9
	PINMUX_HDMIMODE_720X480I240         = 64 + 58,  ///< HDMI Video format is 720X480  & Interlaced 240fps
	PINMUX_HDMIMODE_720X480I240_16X9    = 64 + 59,  ///< HDMI Video format is 720X480  & Interlaced 240fps & 16:9

	PINMUX_DSI_1_LANE_CMD_MODE_RGB565           = 128 + 0, ///< DSI command mode with RGB565 format   (not support DSI. Below is backward compatible)
	PINMUX_DSI_1_LANE_CMD_MODE_RGB666P          = 128 + 1, ///< DSI command mode with RGB666 packed
	PINMUX_DSI_1_LANE_CMD_MODE_RGB666L          = 128 + 2, ///< DSI command mode with RGB666 loosely
	PINMUX_DSI_1_LANE_CMD_MODE_RGB888           = 128 + 3, ///< DSI command mode with RGB888

	PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB565     = 128 + 4, ///< DSI video sync pulse mode with RGB565 format
	PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB666P    = 128 + 5, ///< DSI video sync pulse mode with RGB666 packed
	PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB666L    = 128 + 6, ///< DSI video sync pulse mode with RGB666 loosely
	PINMUX_DSI_1_LANE_VDO_SYNC_PULSE_RGB888     = 128 + 7, ///< DSI video sync pulse mode with RGB888

	PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB565     = 128 + 8, ///< DSI video sync event burst mode with RGB565 format
	PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB666P    = 128 + 9, ///< DSI video sync event burst mode with RGB666 packed
	PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB666L    = 128 + 10, ///< DSI video sync event burst mode with RGB666 loosely
	PINMUX_DSI_1_LANE_VDO_SYNC_EVENT_RGB888     = 128 + 11, ///< DSI video sync event burst mode with RGB888

	PINMUX_DSI_2_LANE_CMD_MODE_RGB565           = 128 + 12, ///< DSI command mode with RGB565 format
	PINMUX_DSI_2_LANE_CMD_MODE_RGB666P          = 128 + 13, ///< DSI command mode with RGB666 packed
	PINMUX_DSI_2_LANE_CMD_MODE_RGB666L          = 128 + 14, ///< DSI command mode with RGB666 loosely
	PINMUX_DSI_2_LANE_CMD_MODE_RGB888           = 128 + 15, ///< DSI command mode with RGB888

	PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB565     = 128 + 16, ///< DSI video sync pulse mode with RGB565 format
	PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB666P    = 128 + 17, ///< DSI video sync pulse mode with RGB666 packed
	PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB666L    = 128 + 18, ///< DSI video sync pulse mode with RGB666 loosely
	PINMUX_DSI_2_LANE_VDO_SYNC_PULSE_RGB888     = 128 + 19, ///< DSI video sync pulse mode with RGB888

	PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB565     = 128 + 20, ///< DSI video sync event burst mode with RGB565 format
	PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB666P    = 128 + 21, ///< DSI video sync event burst mode with RGB666 packed
	PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB666L    = 128 + 22, ///< DSI video sync event burst mode with RGB666 loosely
	PINMUX_DSI_2_LANE_VDO_SYNC_EVENT_RGB888     = 128 + 23, ///< DSI video sync event burst mode with RGB888

	PINMUX_DSI_4_LANE_CMD_MODE_RGB565           = 128 + 24, ///< DSI command mode with RGB565 format
	PINMUX_DSI_4_LANE_CMD_MODE_RGB666P          = 128 + 25, ///< DSI command mode with RGB666 packed
	PINMUX_DSI_4_LANE_CMD_MODE_RGB666L          = 128 + 26, ///< DSI command mode with RGB666 loosely
	PINMUX_DSI_4_LANE_CMD_MODE_RGB888           = 128 + 27, ///< DSI command mode with RGB888

	PINMUX_DSI_4_LANE_VDO_SYNC_PULSE_RGB565     = 128 + 28, ///< DSI video sync pulse mode with RGB565 format
	PINMUX_DSI_4_LANE_VDO_SYNC_PULSE_RGB666P    = 128 + 29, ///< DSI video sync pulse mode with RGB666 packed
	PINMUX_DSI_4_LANE_VDO_SYNC_PULSE_RGB666L    = 128 + 30, ///< DSI video sync pulse mode with RGB666 loosely
	PINMUX_DSI_4_LANE_VDO_SYNC_PULSE_RGB888     = 128 + 31, ///< DSI video sync pulse mode with RGB888

	PINMUX_DSI_4_LANE_VDO_SYNC_EVENT_RGB565     = 128 + 32, ///< DSI video sync event burst mode with RGB565 format
	PINMUX_DSI_4_LANE_VDO_SYNC_EVENT_RGB666P    = 128 + 33, ///< DSI video sync event burst mode with RGB666 packed
	PINMUX_DSI_4_LANE_VDO_SYNC_EVENT_RGB666L    = 128 + 34, ///< DSI video sync event burst mode with RGB666 loosely
	PINMUX_DSI_4_LANE_VDO_SYNC_EVENT_RGB888     = 128 + 35, ///< DSI video sync event burst mode with RGB888



	ENUM_DUMMY4WORD(PINMUX_LCDINIT)
} PINMUX_LCDINIT;

/**
    PIN config for Parallel MI, not support (Backward compatible)

    @note For pinmux_init() with PIN_FUNC_LCD or PIN_FUNC_LCD2.\n
            For example, you can use {PIN_FUNC_LCD, PINMUX_DISPMUX_SEL_LCD|PINMUX_PMI_CFG_NORMAL|PINMUX_LCDMODE_MI_FMT0}\n
            to tell display object that PIN_FUNC_LCD is bound to MI and format is FMT0,\n
            and MI is located at primary location.
*/
typedef enum {
	PINMUX_PMI_CFG_NORMAL = 0x00,                   ///< Normal Parallel MI location (at LCD)
	PINMUX_PMI_CFG_2ND_PINMUX = 0x01 << 26,         ///< Secondary Parallel MI location

	PINMUX_PMI_CFG_MASK = 0x03 << 26,
	ENUM_DUMMY4WORD(PINMUX_PMI_CFG)
} PINMUX_PMI_CFG;

/**
    PIN config for TV/HDMI

    @note For pinmux_init() for PIN_FUNC_TV or PIN_FUNC_HDMI.\n
            For example, you can use {PIN_FUNC_HDMI, PINMUX_TV_HDMI_CFG_NORMAL|PINMUX_HDMIMODE_1280X720P60}\n
            to tell display object that HDMI activation will disable PANEL,\n
            and HDMI mode is 1280x720 P60.
*/
typedef enum {
	PINMUX_TV_HDMI_CFG_GPIO = 0x00,                 ///< TV activation will disable PINMUX to GPIO
	PINMUX_TV_HDMI_CFG_NORMAL = 0x00,               ///< TV activation will disable PANEL which shared the same IDE
	PINMUX_TV_HDMI_CFG_PINMUX_ON = 0x01 << 28,      ///< TV activation will keep PINMUX setting

	PINMUX_TV_HDMI_CFG_MASK = 0x03 << 28,
	ENUM_DUMMY4WORD(PINMUX_TV_HDMI_CFG)
} PINMUX_TV_HDMI_CFG;

/**
    PIN config for HDMI, not support (Backward compatible)

    @note For pinmux_init() for PIN_FUNC_HDMI.\n
            For example, you can use {PIN_FUNC_HDMI, PINMUX_HDMI_CFG_CEC|PINMUX_TV_HDMI_CFG_NORMAL}\n
            to declare HDMI CEC pinmux is enabled.
*/
typedef enum {
	PINMUX_HDMI_CFG_GPIO = 0x00,                    ///< HDMI specific PIN to GPIO
	PINMUX_HDMI_CFG_HOTPLUG = 0x01 << 26,           ///< HDMI HOTPLUG.
	PINMUX_HDMI_CFG_CEC = 0x02 << 26,               ///< HDMI CEC.

	PINMUX_HDMI_CFG_MASK = 0x03 << 26,
	ENUM_DUMMY4WORD(PINMUX_HDMI_CFG)
} PINMUX_HDMI_CFG;

/**
    PIN location of LCD

    @note For pinmux_init() with PIN_FUNC_LCD \n
            For example, you can use {PIN_FUNC_LCD, PINMUX_DISPMUX_SEL_LCD|PINMUX_LCDMODE_XXX}\n
            to tell display object that PIN_FUNC_LCD is located on primary LCD pinmux.
*/
typedef enum {
	PINMUX_DISPMUX_SEL_NONE = 0x00 << 28,           ///< PINMUX none
	PINMUX_DISPMUX_SEL_LCD = 0x01 << 28,            ///< PINMUX at LCD interface
	PINMUX_DISPMUX_SEL_LCD2 = 0x02 << 28,           ///< PINMUX at LCD2 interface (Not supported)

	PINMUX_DISPMUX_SEL_MASK = 0x03 << 28,
	ENUM_DUMMY4WORD(PINMUX_DISPMUX_SEL)
} PINMUX_DISPMUX_SEL;

/**
    PIN config for USB

    @note For pinmux_init() for PIN_FUNC_USB.\n
            For example, you can use {PIN_FUNC_USB, PINMUX_USB_CFG_DEVICE}\n
            to select USB as device.
*/
typedef enum {
	PINMUX_USB_CFG_NONE = 0x00,                     ///< USB as device
	PINMUX_USB_CFG_DEVICE = 0x00,                   ///< USB as device
	PINMUX_USB_CFG_HOST = 0x01,                     ///< USB as host

	ENUM_DUMMY4WORD(PINMUX_USB_CFG)
} PINMUX_USB_CFG;

/**
    PIN config for ETH

    @note For pinmux_init() for PIN_FUNC_ETH.\n
            For example, you can use {PIN_FUNC_ETH, PINMUX_ETH_CFG_MII}\n
            to select ethernet interface.
*/
typedef enum {
	PIN_ETH_CFG_NONE   = 0x00,                      ///< PINMUX none
	PIN_ETH_CFG_MII    = 0x01,                      ///< ETH MII
	PIN_ETH_CFG_RMII   = 0x02,                      ///< ETH RMII
	PIN_ETH_CFG_REVMII = 0x04,                      ///< ETH REVMII
	PIN_ETH_CFG_INTERANL = 0x08,                    ///< ETH INTERNAL MII

	ENUM_DUMMY4WORD(PINMUX_ETH_CFG)
} PINMUX_ETH_CFG;

/**
    PIN config for MISC

    @note For pinmux_init() for PIN_FUNC_MISC.\n
            For example, you can use {PIN_FUNC_MISC, PIN_MISC_CFG_RTCLK}\n
            to select related application.
*/
typedef enum {
	PIN_MISC_CFG_NONE           = 0x00,                     ///< PINMUX none
	PIN_MISC_CFG_RTCLK          = 0x01,                     ///< RTCCLK
	PIN_MISC_CFG_SPCLK_NONE     = 0x02,                     ///< SP CLK none
	PIN_MISC_CFG_SPCLK          = 0x04,                     ///< SP CLK
	PIN_MISC_CFG_SPCLK_2ND      = 0x08,                     ///< SP_2 CLK
	PIN_MISC_CFG_SP2CLK_NONE    = 0x10,                     ///< SP2 CLK none
	PIN_MISC_CFG_SP2CLK         = 0x20,                     ///< SP2 CLK
	PIN_MISC_CFG_SP2CLK_2ND     = 0x40,                     ///< SP2_2 CLK

	ENUM_DUMMY4WORD(PINMUX_MISC_CFG)
} PINMUX_MISC_CFG;


/**
    Pinmux Function identifier

    @note For pinmux_getDispMode(), pinmux_setPinmux().
*/
typedef enum {
	PINMUX_FUNC_ID_LCD,                             ///< 1st Panel (LCD), pinmux can be:
	///< - @b PINMUX_LCD_SEL_GPIO
	///< - @b PINMUX_LCD_SEL_CCIR656
	///< - @b PINMUX_LCD_SEL_CCIR601
	///< - @b PINMUX_LCD_SEL_SERIAL_RGB_6BITS
	///< - @b PINMUX_LCD_SEL_SERIAL_RGB_8BITS
	///< - @b PINMUX_LCD_SEL_SERIAL_YCbCr_8BITS
	///< - @b PINMUX_LCD_SEL_PARALLE_MI_8BITS
	///< - @b PINMUX_LCD_SEL_PARALLE_MI_9BITS
	///< - @b PINMUX_LCD_SEL_SERIAL_MI_SDIO
	///< - @b PINMUX_LCD_SEL_SERIAL_MI_SDI_SDO
	///< ORed with
	///< - @b PINMUX_LCD_SEL_DE_ENABLE
	///< - @b PINMUX_LCD_SEL_TE_ENABLE
	PINMUX_FUNC_ID_LCD2,                            ///< 2nd Panel (LCD), not support (Backward compatible)
	///< - @b PINMUX_LCD_SEL_GPIO
	///< - @b PINMUX_LCD_SEL_CCIR656
	///< - @b PINMUX_LCD_SEL_CCIR601
	///< - @b PINMUX_LCD_SEL_SERIAL_RGB_6BITS
	///< - @b PINMUX_LCD_SEL_SERIAL_RGB_8BITS
	///< - @b PINMUX_LCD_SEL_SERIAL_YCbCr_8BITS
	///< - @b PINMUX_LCD_SEL_PARALLE_MI_8BITS
	///< - @b PINMUX_LCD_SEL_PARALLE_MI_9BITS
	///< - @b PINMUX_LCD_SEL_SERIAL_MI_SDIO
	///< - @b PINMUX_LCD_SEL_SERIAL_MI_SDI_SDO
	///< ORed with
	///< - @b PINMUX_LCD_SEL_DE_ENABLE
	PINMUX_FUNC_ID_TV,                              ///< TV, pinmux can be:
	///< - @b PINMUX_LCD_SEL_GPIO
	PINMUX_FUNC_ID_HDMI,                            ///< HDMI, not support (Backward compatible)
	///< - @b PINMUX_LCD_SEL_GPIO
	PINMUX_FUNC_ID_SN_MES0,                         ///< Sensor MES0, pinmux can be:
	///< - @b PINMUX_SENSOR_SEL_INACTIVE:
	///< - @b PINMUX_SENSOR_SEL_ACTIVE:
	PINMUX_FUNC_ID_SN_MES1,                         ///< Sensor MES1, pinmux can be:
	///< - @b PINMUX_SENSOR_SEL_INACTIVE:
	///< - @b PINMUX_SENSOR_SEL_ACTIVE:
	PINMUX_FUNC_ID_SN_MES2,                         ///< Sensor MES2, pinmux can be:
	///< - @b PINMUX_SENSOR_SEL_INACTIVE:
	///< - @b PINMUX_SENSOR_SEL_ACTIVE:
	PINMUX_FUNC_ID_SN_MES3,                         ///< Sensor MES3, pinmux can be:
	///< - @b PINMUX_SENSOR_SEL_INACTIVE:
	///< - @b PINMUX_SENSOR_SEL_ACTIVE:
	PINMUX_FUNC_ID_SN_FLCTR,                        ///< Sensor Flash Control, pinmux can be:
	///< - @b PINMUX_SENSOR_SEL_INACTIVE:
	///< - @b PINMUX_SENSOR_SEL_ACTIVE:
	PINMUX_FUNC_ID_SN_MCLK,                         ///< Sensor MCLK, pinmux can be:
	///< - @b PINMUX_SENSOR_SEL_INACTIVE:
	///< - @b PINMUX_SENSOR_SEL_ACTIVE:
	PINMUX_FUNC_ID_SPI2,                            ///< SPI channel2 pinmux switch, pinmux can be:
	///< - @b PINMUX_SPI_SEL_INACTIVE
	///< - @b PINMUX_SPI_SEL_ACTIVE
	PINMUX_FUNC_ID_SPI3,                            ///< SPI channel3 pinmux switch, pinmux can be:
	///< - @b PINMUX_SPI_SEL_INACTIVE
	///< - @b PINMUX_SPI_SEL_ACTIVE
	PINMUX_FUNC_ID_SPI4,                            ///< SPI channel4 pinmux switch, not support (Backward compatible)
	///< - @b PINMUX_SPI_SEL_INACTIVE
	///< - @b PINMUX_SPI_SEL_ACTIVE
	PINMUX_FUNC_ID_SPI5,                            ///< SPI channel5 pinmux switch, not support (Backward compatible)
	///< - @b PINMUX_SPI_SEL_INACTIVE
	///< - @b PINMUX_SPI_SEL_ACTIVE
	PINMUX_FUNC_ID_COUNT,                           //< Total function count

	ENUM_DUMMY4WORD(PINMUX_FUNC_ID)
} PINMUX_FUNC_ID;

/**
    Pinmux selection for LCD

    @note For PINMUX_FUNC_ID_LCD, PINMUX_FUNC_ID_LCD2
*/
typedef enum {
	PINMUX_LCD_SEL_GPIO,                            ///< GPIO
	PINMUX_LCD_SEL_CCIR656,                         ///< CCIR-656 8 bits. Enable CCIR_YC[0..7]/CCIR_CLK on LCD[0..8] (L_GPIO[0..8])
	PINMUX_LCD_SEL_CCIR656_16BITS,                  ///< CCIR-656 16 bits. Enable CCIR_Y[0..7]/CCIR_CLK/CCIR_C[0..7] on LCD[0..8]/LCD[12..19] (L_GPIO[0..8]/L_GPIO[12..19])
	PINMUX_LCD_SEL_CCIR601,                         ///< CCIR-601 8 bits. Enable CCIR_YC[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD on LCD[0..10] (L_GPIO[0..10])
	PINMUX_LCD_SEL_CCIR601_16BITS,                  ///< CCIR-601 16 bits. Enable CCIR_Y[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD/CCIR_C[0..7] on LCD[0..19] (L_GPIO[0..19])
	PINMUX_LCD_SEL_SERIAL_RGB_6BITS,                ///< Serial RGB 6 bits. Enable RGB_D[2..7]/RGB_CLK/RGB_VD/RGB_HD on LCD[2..10] (L_GPIO[2..10])
	PINMUX_LCD_SEL_SERIAL_RGB_8BITS,                ///< Serial RGB 8 bits. Enable RGB_D[0..7]/RGB_CLK/RGB_VD/RGB_HD on LCD[0..10] (L_GPIO[0..10])
	PINMUX_LCD_SEL_SERIAL_YCbCr_8BITS,              ///< Serial YCbCr 8 bits. Enable CCIR_YC[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD on LCD[0..10] (L_GPIO[0..10])
	PINMUX_LCD_SEL_PARALLE_RGB565,                  ///< Parallel RGB565. Enable RGB_C0_[0..4]/RGB_DCLK/RGB_VS/RGB_HS/RGB_C1_[0..5]/RGB_C2_[0..4] on LCD[0..19](L_GPIO[0..19])
	PINMUX_LCD_SEL_PARALLE_RGB666,                  ///< Parallel RGB666. (Not support)
	PINMUX_LCD_SEL_PARALLE_RGB888,                  ///< Parallel RGB888. (Not support)
	PINMUX_LCD_SEL_RGB_16BITS,                      ///< RGB 16 bits. Enable CCIR_Y[0..7]/CCIR_CLK/CCIR_VD/CCIR_HD/CCIR_C[0..7] on LCD[0..19] (L_GPIO[0..19])
	PINMUX_LCD_SEL_PARALLE_MI_8BITS,                ///< Parallel MI 8 bits. (Not support)
	PINMUX_LCD_SEL_PARALLE_MI_9BITS,                ///< Parallel MI 9 bits.(Not support)
	PINMUX_LCD_SEL_PARALLE_MI_16BITS,               ///< Parallel MI 16 bits. (Not support)
	PINMUX_LCD_SEL_PARALLE_MI_18BITS,               ///< Parallel MI 18 bits. (Not support)
	PINMUX_LCD_SEL_SERIAL_MI_SDIO,                  ///< Serial MI SDIO bi-direction. (Not support)
	PINMUX_LCD_SEL_SERIAL_MI_SDI_SDO,               ///< Serial MI SDI/SDO seperate. (Not support)
	PINMUX_LCD_SEL_MIPI,                            ///< MIPI DSI (Not support)

	PINMUX_LCD_SEL_TE_ENABLE = 0x01 << 23,          ///< TE Enable (For Parallel/Serial MI) (Not support)
	PINMUX_LCD_SEL_DE_ENABLE = 0x01 << 24,          ///< DE Enable (For CCIR656 8/16bits, CCIR601 16bits, Serial RGB 6/8bits, Serial YCbCr 8 bits, RGB 16 bits)
	///< When corresponding item in pinmux_init() is set with PINMUX_DISPMUX_SEL_LCD, enable CCIR_DE on LCD11 (L_GPIO[11]).
	PINMUX_LCD_SEL_HVLD_VVLD = 0x01 << 25,          ///< HVLD/VVLD Enable (For CCIR-601 8 bits). Enable CCIR_HVLD/CCIR_VVLD on LCD[12..13] (L_GPIO[12..13])
	PINMUX_LCD_SEL_FIELD = 0x01 << 26,              ///< FIELD Enable (For CCIR-601 8 bits). Enable CCIR_FIELD on LCD14 (L_GPIO[14])

	PINMUX_LCD_SEL_FEATURE_MSK = 0x0F << 23,

	ENUM_DUMMY4WORD(PINMUX_LCD_SEL)
} PINMUX_LCD_SEL;

/**
    Pinmux selection for Storage

    @note For PINMUX_FUNC_ID_SDIO, PINMUX_FUNC_ID_SPI, PINMUX_FUNC_ID_NAND
*/
typedef enum {
	PINMUX_STORAGE_SEL_INACTIVE,                    ///< Inactive storage
	PINMUX_STORAGE_SEL_ACTIVE,                      ///< Active storage
	PINMUX_STORAGE_SEL_INEXIST,                     ///< Inexist storage
	PINMUX_STORAGE_SEL_EXIST,                       ///< Exist storage
	ENUM_DUMMY4WORD(PINMUX_STORAGE_SEL)
} PINMUX_STORAGE_SEL;

/**
    Pinmux selection for sensor

    @note For PINMUX_FUNC_ID_SN_MES0, PINMUX_FUNC_ID_SN_MES1, PINMUX_FUNC_ID_SN_FLCTR
*/
typedef enum {
	PINMUX_SENSOR_SEL_INACTIVE,                     ///< Inactive
	PINMUX_SENSOR_SEL_ACTIVE,                       ///< Active
	ENUM_DUMMY4WORD(PINMUX_SENSOR_SEL)
} PINMUX_SENSOR_SEL;

/**
    Pinmux selection for usb

    @note For PINMUX_FUNC_ID_USB_VBUSI
*/
typedef enum {
	PINMUX_USB_SEL_INACTIVE,                        ///< Inactive
	PINMUX_USB_SEL_ACTIVE,                          ///< Active
	ENUM_DUMMY4WORD(PINMUX_USB_SEL)
} PINMUX_USB_SEL;

/**
    Pinmux selection for SPI

    @note For PINMUX_FUNC_ID_SPI2, PINMUX_FUNC_ID_SPI3
*/
typedef enum {
	PINMUX_SPI_SEL_INACTIVE,                        ///< Inactive
	PINMUX_SPI_SEL_ACTIVE,                          ///< Active
	ENUM_DUMMY4WORD(PINMUX_SPI_SEL)
} PINMUX_SPI_SEL;

/**
    Pinmux group

    @note For pinmux_init()
*/
typedef struct {
	PIN_FUNC    pinFunction;            ///< PIN Function group
	UINT32      config;                 ///< Configuration for pinFunction
} PIN_GROUP_CONFIG;


/**
    Pinmux enable channel to access APB

    @note For pinmux_enableApbChannel(),pinmux_disableApbChannel()
*/
typedef enum {
	PINMUX_APB_CH_MIPS2 = 0x01,               ///< MIPS2 access system apb domain channel enable
	PINMUX_APB_CH_DSP = 0x02,                 ///< DSP access system apb domain channel enable
	ENUM_DUMMY4WORD(PINMUX_APB_CH)
} PINMUX_APB_CH;

/*
    PINMUX selection for RTC CLK

    @note For pinmux_activeRtcClk()
*/
typedef enum {
	PINMUX_RTC_CLK_INACTIVE,                 ///< RTC CLK inactive
	PINMUX_RTC_CLK_ACTIVE,                   ///< RTC CLK active
	ENUM_DUMMY4WORD(PINMUX_RTCCLK_SEL)
} PINMUX_RTCCLK_SEL;

//
// API for Top controller
//
extern void     pinmux_select_debugport(PINMUX_DEBUGPORT uiDebug);
extern void     pinmux_select_ocp_debugport(PINMUX_DEBUGPORT_OCP uiDebug);

extern ER       pinmux_init(PIN_GROUP_CONFIG *pConfig);
extern ER       pinmux_setDispMode(PINMUX_FUNC_ID id, PINMUX_LCDINIT dispMode);
extern PINMUX_LCDINIT pinmux_getDispMode(PINMUX_FUNC_ID id);
extern ER       pinmux_setPinmux(PINMUX_FUNC_ID id, UINT32 pinmux);
extern BOOL     pinmux_chkPinmux(PINMUX_FUNC_ID id, UINT32 pinmux);

extern void     pinmux_enableApbChannel(PINMUX_APB_CH Ch);
extern void     pinmux_disableApbChannel(PINMUX_APB_CH Ch);

extern void     pinmux_setRtcClkPinmux(PINMUX_RTCCLK_SEL pinmux);
extern void     pinmux_init_for_dualcore(PIN_GROUP_CONFIG *pConfig, BOOL enable);
//@}    //addtogroup mIHALSysCfg

#endif

