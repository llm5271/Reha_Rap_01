/*<RBHead>
 ************************************************************************* 
 *                                                                       * 
 *                      ROBERT BOSCH GMBH                                * 
 *                          STUTTGART                                    * 
 *                                                                       * 
 *          Alle Rechte vorbehalten - All rights reserved                * 
 *                                                                       * 
 ************************************************************************* 
																		    
 ************************************************************************* 
 *    Administrative Information (automatically filled in by eASEE)      * 
 ************************************************************************* 
 *	
 * $Filename__:scu_1762.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:scu_1762$ 
 * $Variant___:1.6.0$ 
 * $Revision__:0$ 
 * $Type______:H$ 
 * $State_____:AVAILABLE$ 
 * $Generated_:$ 
 ************************************************************************* 
 * 
 * $UniqueName:$ 
 * $Component_:$ 
 * 
 * 
 ************************************************************************* 
 * List Of Changes 
 * 
 * $History
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: scu_1762.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SCU_1762_H
#define _SCU_1762_H

/* add ul suffix if file is used in C context */
#define _SCU_UL(x) x##UL

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SCU on TC1762
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0000000...0xF0000007] : reserved space
    volatile uint32 ID;                  // [0xF0000008] : SCU Module Identification Register
    volatile uint32 SCLKFDR;             // [0xF000000C] : SCU System Clock Fractional Divider Register
    volatile uint32 RST_REQ;             // [0xF0000010] : Reset Request Register
    volatile uint32 RST_SR;              // [0xF0000014] : Reset Status Register
    volatile uint32 OSC_CON;             // [0xF0000018] : Oscillator Control Register
    volatile uint32 RESERVED1[1];        // [0xF000001C...0xF000001F] : reserved space
    volatile uint32 WDT_CON0;            // [0xF0000020] : Watchdog Timer Control Register 0
    volatile uint32 WDT_CON1;            // [0xF0000024] : Watchdog Timer Control Register 1
    volatile uint32 WDT_SR;              // [0xF0000028] : Watchdog Timer Status Register
    volatile uint32 NMISR;               // [0xF000002C] : NMI Status Register
    volatile uint32 RESERVED2[1];        // [0xF0000030...0xF0000033] : reserved space
    volatile uint32 PMG_CSR;             // [0xF0000034] : Power Management Control and Status Register
    volatile uint32 SCLIR;               // [0xF0000038] : SCU Software Configuration Latched Inputs Register
    volatile uint32 RESERVED3[1];        // [0xF000003C...0xF000003F] : reserved space
    volatile uint32 PLL_CLC;             // [0xF0000040] : PLL Clock Control Register
    volatile uint32 EMSR;                // [0xF0000044] : SCU Emergency Stop Register
    volatile uint32 TCCON;               // [0xF0000048] : SCU Temperature Compensation Control Register
    volatile uint32 RESERVED4[1];        // [0xF000004C...0xF000004F] : reserved space
    volatile uint32 CON;                 // [0xF0000050] : SCU Control Register
    volatile uint32 STAT;                // [0xF0000054] : SCU Status Register
    volatile uint32 TCLR0;               // [0xF0000058] : SCU Temperature Compensation Level Register 0
    volatile uint32 RESERVED5[5];        // [0xF000005C...0xF000006F] : reserved space
    volatile uint32 MANID;               // [0xF0000070] : Manufacturer Identification Register
    volatile uint32 CHIPID;              // [0xF0000074] : Chip Identification Register
    volatile uint32 RTID;                // [0xF0000078] : Redesign Tracing Identification Register
    volatile uint32 RESERVED6[1];        // [0xF000007C...0xF000007F] : reserved space
    volatile uint32 EICR0;               // [0xF0000080] : External Input Channel Register 0
    volatile uint32 EICR1;               // [0xF0000084] : External Input Channel Register 1
    volatile uint32 EIFR;                // [0xF0000088] : External Input Flag Register
    volatile uint32 FMR;                 // [0xF000008C] : SCU Flag Modification Register
    volatile uint32 PDRR;                // [0xF0000090] : Pattern Detection Result Register
    volatile uint32 IGCR0;               // [0xF0000094] : Interrupt Gating Register 0
    volatile uint32 IGCR1;               // [0xF0000098] : Interrupt Gating Register 1
    volatile uint32 TGADC0;              // [0xF000009C] : Trigger Gating ADC0 Register
    volatile uint32 RESERVED7[2];        // [0xF00000A0...0xF00000A7] : reserved space
    volatile uint32 OTCON;               // [0xF00000A8] : SCU On Chip Test Control Register
    volatile uint32 OTDAT;               // [0xF00000AC] : SCU On Chip Test Data Register
    volatile uint32 PTCON;               // [0xF00000B0] : SCU Pad Test Control Register
    volatile uint32 PTDAT0;              // [0xF00000B4] : SCU Pad Test Data Register 0
    volatile uint32 RESERVED8[6];        // [0xF00000B8...0xF00000CF] : reserved space
    volatile uint32 PETCR;               // [0xF00000D0] : SCU Parity Error Trap Control Register
    volatile uint32 PETSR;               // [0xF00000D4] : SCU Parity Error Trap Status Register
    volatile uint32 DMARS;               // [0xF00000D8] : DMA Request Select Register
    volatile uint32 RESERVED9[9];        // [0xF00000DC...0xF00000FF] : reserved space
} SCU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SCU_RegMap_t SCU __attribute__ ((section (".zbss")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/* SCU_OSC_CON_OSCR (rwh) */
#define SCU_OSC_CON_ORDRES_POS         _SCU_UL(2)
#define SCU_OSC_CON_ORDRES_LEN         _SCU_UL(1)

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS END HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/*
 ***************************************************************************************************
 * Definitions of bits and bitfields.
 * Each bit(field) is defined by its position and length.
 *
 * Example:
 *                       /- length -\
 *           0000 0000 00xx xxxx xxxx 0000 0000 0000
 *           |                      ^              |
 *      Bit 31                      |              Bit 0
 *                                  +-- position
 *
 * Access mode flags:  r  - bit(field) can only be read
 *                     w  - bit(field) can only be written
 *                     rw - bit(field) can be read and written
 *                     h  - bit(field) can also be modified by hardware
 *                          (such as a status bit).
 *                          This symbol can be combined with rw or r
 *
 ***************************************************************************************************
 */

/* SCU_CHIPID_CHID (r) */
#define SCU_CHIPID_CHID_POS            _SCU_UL(8)
#define SCU_CHIPID_CHID_LEN            _SCU_UL(8)

/* SCU_CHIPID_CHREV (r) */
#define SCU_CHIPID_CHREV_POS           _SCU_UL(0)
#define SCU_CHIPID_CHREV_LEN           _SCU_UL(8)

/* SCU_EICR0_EIEN0 (rw) */
#define SCU_EICR0_EIEN0_POS            _SCU_UL(11)
#define SCU_EICR0_EIEN0_LEN            _SCU_UL(1)

/* SCU_EICR0_EIEN1 (rw) */
#define SCU_EICR0_EIEN1_POS            _SCU_UL(27)
#define SCU_EICR0_EIEN1_LEN            _SCU_UL(1)

/* SCU_EICR0_EXIS0 (rw) */
#define SCU_EICR0_EXIS0_POS            _SCU_UL(4)
#define SCU_EICR0_EXIS0_LEN            _SCU_UL(2)

/* SCU_EICR0_EXIS1 (rw) */
#define SCU_EICR0_EXIS1_POS            _SCU_UL(20)
#define SCU_EICR0_EXIS1_LEN            _SCU_UL(2)

/* SCU_EICR0_FEN0 (rw) */
#define SCU_EICR0_FEN0_POS             _SCU_UL(8)
#define SCU_EICR0_FEN0_LEN             _SCU_UL(1)

/* SCU_EICR0_FEN1 (rw) */
#define SCU_EICR0_FEN1_POS             _SCU_UL(24)
#define SCU_EICR0_FEN1_LEN             _SCU_UL(1)

/* SCU_EICR0_INP0 (rw) */
#define SCU_EICR0_INP0_POS             _SCU_UL(12)
#define SCU_EICR0_INP0_LEN             _SCU_UL(3)

/* SCU_EICR0_INP1 (rw) */
#define SCU_EICR0_INP1_POS             _SCU_UL(28)
#define SCU_EICR0_INP1_LEN             _SCU_UL(3)

/* SCU_EICR0_LDEN0 (rw) */
#define SCU_EICR0_LDEN0_POS            _SCU_UL(10)
#define SCU_EICR0_LDEN0_LEN            _SCU_UL(1)

/* SCU_EICR0_LDEN1 (rw) */
#define SCU_EICR0_LDEN1_POS            _SCU_UL(26)
#define SCU_EICR0_LDEN1_LEN            _SCU_UL(1)

/* SCU_EICR0_REN0 (rw) */
#define SCU_EICR0_REN0_POS             _SCU_UL(9)
#define SCU_EICR0_REN0_LEN             _SCU_UL(1)

/* SCU_EICR0_REN1 (rw) */
#define SCU_EICR0_REN1_POS             _SCU_UL(25)
#define SCU_EICR0_REN1_LEN             _SCU_UL(1)

/* SCU_EICR1_EIEN2 (rw) */
#define SCU_EICR1_EIEN2_POS            _SCU_UL(11)
#define SCU_EICR1_EIEN2_LEN            _SCU_UL(1)

/* SCU_EICR1_EIEN3 (rw) */
#define SCU_EICR1_EIEN3_POS            _SCU_UL(27)
#define SCU_EICR1_EIEN3_LEN            _SCU_UL(1)

/* SCU_EICR1_EXIS2 (rw) */
#define SCU_EICR1_EXIS2_POS            _SCU_UL(4)
#define SCU_EICR1_EXIS2_LEN            _SCU_UL(2)

/* SCU_EICR1_EXIS3 (rw) */
#define SCU_EICR1_EXIS3_POS            _SCU_UL(20)
#define SCU_EICR1_EXIS3_LEN            _SCU_UL(2)

/* SCU_EICR1_FEN2 (rw) */
#define SCU_EICR1_FEN2_POS             _SCU_UL(8)
#define SCU_EICR1_FEN2_LEN             _SCU_UL(1)

/* SCU_EICR1_FEN3 (rw) */
#define SCU_EICR1_FEN3_POS             _SCU_UL(24)
#define SCU_EICR1_FEN3_LEN             _SCU_UL(1)

/* SCU_EICR1_INP2 (rw) */
#define SCU_EICR1_INP2_POS             _SCU_UL(12)
#define SCU_EICR1_INP2_LEN             _SCU_UL(3)

/* SCU_EICR1_INP3 (rw) */
#define SCU_EICR1_INP3_POS             _SCU_UL(28)
#define SCU_EICR1_INP3_LEN             _SCU_UL(3)

/* SCU_EICR1_LDEN2 (rw) */
#define SCU_EICR1_LDEN2_POS            _SCU_UL(10)
#define SCU_EICR1_LDEN2_LEN            _SCU_UL(1)

/* SCU_EICR1_LDEN3 (rw) */
#define SCU_EICR1_LDEN3_POS            _SCU_UL(26)
#define SCU_EICR1_LDEN3_LEN            _SCU_UL(1)

/* SCU_EICR1_REN2 (rw) */
#define SCU_EICR1_REN2_POS             _SCU_UL(9)
#define SCU_EICR1_REN2_LEN             _SCU_UL(1)

/* SCU_EICR1_REN3 (rw) */
#define SCU_EICR1_REN3_POS             _SCU_UL(25)
#define SCU_EICR1_REN3_LEN             _SCU_UL(1)

/* SCU_EIFR_INTF0 (rh) */
#define SCU_EIFR_INTF0_POS             _SCU_UL(0)
#define SCU_EIFR_INTF0_LEN             _SCU_UL(1)

/* SCU_EIFR_INTF1 (rh) */
#define SCU_EIFR_INTF1_POS             _SCU_UL(1)
#define SCU_EIFR_INTF1_LEN             _SCU_UL(1)

/* SCU_EIFR_INTF2 (rh) */
#define SCU_EIFR_INTF2_POS             _SCU_UL(2)
#define SCU_EIFR_INTF2_LEN             _SCU_UL(1)

/* SCU_EIFR_INTF3 (rh) */
#define SCU_EIFR_INTF3_POS             _SCU_UL(3)
#define SCU_EIFR_INTF3_LEN             _SCU_UL(1)

/* SCU_FMR_FC0 (w) */
#define SCU_FMR_FC0_POS                _SCU_UL(16)
#define SCU_FMR_FC0_LEN                _SCU_UL(1)

/* SCU_FMR_FC1 (w) */
#define SCU_FMR_FC1_POS                _SCU_UL(17)
#define SCU_FMR_FC1_LEN                _SCU_UL(1)

/* SCU_FMR_FC2 (w) */
#define SCU_FMR_FC2_POS                _SCU_UL(18)
#define SCU_FMR_FC2_LEN                _SCU_UL(1)

/* SCU_FMR_FC3 (w) */
#define SCU_FMR_FC3_POS                _SCU_UL(19)
#define SCU_FMR_FC3_LEN                _SCU_UL(1)

/* SCU_FMR_FS0 (w) */
#define SCU_FMR_FS0_POS                _SCU_UL(0)
#define SCU_FMR_FS0_LEN                _SCU_UL(1)

/* SCU_FMR_FS1 (w) */
#define SCU_FMR_FS1_POS                _SCU_UL(1)
#define SCU_FMR_FS1_LEN                _SCU_UL(1)

/* SCU_FMR_FS2 (w) */
#define SCU_FMR_FS2_POS                _SCU_UL(2)
#define SCU_FMR_FS2_LEN                _SCU_UL(1)

/* SCU_FMR_FS3 (w) */
#define SCU_FMR_FS3_POS                _SCU_UL(3)
#define SCU_FMR_FS3_LEN                _SCU_UL(1)

/* SCU_IGCR0_GEEN0 (rw) */
#define SCU_IGCR0_GEEN0_POS            _SCU_UL(13)
#define SCU_IGCR0_GEEN0_LEN            _SCU_UL(1)

/* SCU_IGCR0_GEEN1 (rw) */
#define SCU_IGCR0_GEEN1_POS            _SCU_UL(29)
#define SCU_IGCR0_GEEN1_LEN            _SCU_UL(1)

/* SCU_IGCR0_IGP0 (rw) */
#define SCU_IGCR0_IGP0_POS             _SCU_UL(14)
#define SCU_IGCR0_IGP0_LEN             _SCU_UL(2)

/* SCU_IGCR0_IGP1 (rw) */
#define SCU_IGCR0_IGP1_POS             _SCU_UL(30)
#define SCU_IGCR0_IGP1_LEN             _SCU_UL(2)

/* SCU_IGCR0_IPEN00 (rw) */
#define SCU_IGCR0_IPEN00_POS           _SCU_UL(0)
#define SCU_IGCR0_IPEN00_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN01 (rw) */
#define SCU_IGCR0_IPEN01_POS           _SCU_UL(1)
#define SCU_IGCR0_IPEN01_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN02 (rw) */
#define SCU_IGCR0_IPEN02_POS           _SCU_UL(2)
#define SCU_IGCR0_IPEN02_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN03 (rw) */
#define SCU_IGCR0_IPEN03_POS           _SCU_UL(3)
#define SCU_IGCR0_IPEN03_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN10 (rw) */
#define SCU_IGCR0_IPEN10_POS           _SCU_UL(16)
#define SCU_IGCR0_IPEN10_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN11 (rw) */
#define SCU_IGCR0_IPEN11_POS           _SCU_UL(17)
#define SCU_IGCR0_IPEN11_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN12 (rw) */
#define SCU_IGCR0_IPEN12_POS           _SCU_UL(18)
#define SCU_IGCR0_IPEN12_LEN           _SCU_UL(1)

/* SCU_IGCR0_IPEN13 (rw) */
#define SCU_IGCR0_IPEN13_POS           _SCU_UL(19)
#define SCU_IGCR0_IPEN13_LEN           _SCU_UL(1)

/* SCU_IGCR1_GEEN2 (rw) */
#define SCU_IGCR1_GEEN2_POS            _SCU_UL(13)
#define SCU_IGCR1_GEEN2_LEN            _SCU_UL(1)

/* SCU_IGCR1_GEEN3 (rw) */
#define SCU_IGCR1_GEEN3_POS            _SCU_UL(29)
#define SCU_IGCR1_GEEN3_LEN            _SCU_UL(1)

/* SCU_IGCR1_IGP2 (rw) */
#define SCU_IGCR1_IGP2_POS             _SCU_UL(14)
#define SCU_IGCR1_IGP2_LEN             _SCU_UL(2)

/* SCU_IGCR1_IGP3 (rw) */
#define SCU_IGCR1_IGP3_POS             _SCU_UL(30)
#define SCU_IGCR1_IGP3_LEN             _SCU_UL(2)

/* SCU_IGCR1_IPEN20 (rw) */
#define SCU_IGCR1_IPEN20_POS           _SCU_UL(0)
#define SCU_IGCR1_IPEN20_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN21 (rw) */
#define SCU_IGCR1_IPEN21_POS           _SCU_UL(1)
#define SCU_IGCR1_IPEN21_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN22 (rw) */
#define SCU_IGCR1_IPEN22_POS           _SCU_UL(2)
#define SCU_IGCR1_IPEN22_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN23 (rw) */
#define SCU_IGCR1_IPEN23_POS           _SCU_UL(3)
#define SCU_IGCR1_IPEN23_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN30 (rw) */
#define SCU_IGCR1_IPEN30_POS           _SCU_UL(16)
#define SCU_IGCR1_IPEN30_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN31 (rw) */
#define SCU_IGCR1_IPEN31_POS           _SCU_UL(17)
#define SCU_IGCR1_IPEN31_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN32 (rw) */
#define SCU_IGCR1_IPEN32_POS           _SCU_UL(18)
#define SCU_IGCR1_IPEN32_LEN           _SCU_UL(1)

/* SCU_IGCR1_IPEN33 (rw) */
#define SCU_IGCR1_IPEN33_POS           _SCU_UL(19)
#define SCU_IGCR1_IPEN33_LEN           _SCU_UL(1)

/* SCU_MANID_DEPT (r) */
#define SCU_MANID_DEPT_POS             _SCU_UL(0)
#define SCU_MANID_DEPT_LEN             _SCU_UL(5)

/* SCU_MANID_MANUF (r) */
#define SCU_MANID_MANUF_POS            _SCU_UL(5)
#define SCU_MANID_MANUF_LEN            _SCU_UL(11)

/* SCU_NMISR_NMIEXT (rh) */
#define SCU_NMISR_NMIEXT_POS           _SCU_UL(0)
#define SCU_NMISR_NMIEXT_LEN           _SCU_UL(1)

/* SCU_NMISR_NMIPER (rh) */
#define SCU_NMISR_NMIPER_POS           _SCU_UL(3)
#define SCU_NMISR_NMIPER_LEN           _SCU_UL(1)

/* SCU_NMISR_NMIPLL (rh) */
#define SCU_NMISR_NMIPLL_POS           _SCU_UL(1)
#define SCU_NMISR_NMIPLL_LEN           _SCU_UL(1)

/* SCU_NMISR_NMIWDT (rh) */
#define SCU_NMISR_NMIWDT_POS           _SCU_UL(2)
#define SCU_NMISR_NMIWDT_LEN           _SCU_UL(1)

/* SCU_OSC_CON_MOSC (rwh) */
#define SCU_OSC_CON_MOSC_POS           _SCU_UL(0)
#define SCU_OSC_CON_MOSC_LEN           _SCU_UL(1)

/* SCU_OSC_CON_OGC (rw) */
#define SCU_OSC_CON_OGC_POS            _SCU_UL(4)
#define SCU_OSC_CON_OGC_LEN            _SCU_UL(1)

/* SCU_OSC_CON_ORDRES (rwh) */
#define SCU_OSC_CON_ORDRES_POS         _SCU_UL(2)
#define SCU_OSC_CON_ORDRES_LEN         _SCU_UL(1)

/* SCU_OSC_CON_OSCR (rh) */
#define SCU_OSC_CON_OSCR_POS           _SCU_UL(1)
#define SCU_OSC_CON_OSCR_LEN           _SCU_UL(1)

/* SCU_PDRR_PDR0 (rh) */
#define SCU_PDRR_PDR0_POS              _SCU_UL(0)
#define SCU_PDRR_PDR0_LEN              _SCU_UL(1)

/* SCU_PDRR_PDR1 (rh) */
#define SCU_PDRR_PDR1_POS              _SCU_UL(1)
#define SCU_PDRR_PDR1_LEN              _SCU_UL(1)

/* SCU_PDRR_PDR2 (rh) */
#define SCU_PDRR_PDR2_POS              _SCU_UL(2)
#define SCU_PDRR_PDR2_LEN              _SCU_UL(1)

/* SCU_PDRR_PDR3 (rh) */
#define SCU_PDRR_PDR3_POS              _SCU_UL(3)
#define SCU_PDRR_PDR3_LEN              _SCU_UL(1)

/* SCU_PLL_CLC_BYPPIN (rh) */
#define SCU_PLL_CLC_BYPPIN_POS         _SCU_UL(29)
#define SCU_PLL_CLC_BYPPIN_LEN         _SCU_UL(1)

/* SCU_PLL_CLC_KDIV (rw) */
#define SCU_PLL_CLC_KDIV_POS           _SCU_UL(8)
#define SCU_PLL_CLC_KDIV_LEN           _SCU_UL(4)

/* SCU_PLL_CLC_LOCK (rh) */
#define SCU_PLL_CLC_LOCK_POS           _SCU_UL(0)
#define SCU_PLL_CLC_LOCK_LEN           _SCU_UL(1)

/* SCU_PLL_CLC_NDIV (rw) */
#define SCU_PLL_CLC_NDIV_POS           _SCU_UL(16)
#define SCU_PLL_CLC_NDIV_LEN           _SCU_UL(7)

/* SCU_PLL_CLC_OSCDISC (rwh) */
#define SCU_PLL_CLC_OSCDISC_POS        _SCU_UL(24)
#define SCU_PLL_CLC_OSCDISC_LEN        _SCU_UL(1)

/* SCU_PLL_CLC_PDIV (rw) */
#define SCU_PLL_CLC_PDIV_POS           _SCU_UL(13)
#define SCU_PLL_CLC_PDIV_LEN           _SCU_UL(3)

/* SCU_PLL_CLC_RESLD (rwh) */
#define SCU_PLL_CLC_RESLD_POS          _SCU_UL(1)
#define SCU_PLL_CLC_RESLD_LEN          _SCU_UL(1)

/* SCU_PLL_CLC_SYSFS (rw) */
#define SCU_PLL_CLC_SYSFS_POS          _SCU_UL(2)
#define SCU_PLL_CLC_SYSFS_LEN          _SCU_UL(1)

/* SCU_PLL_CLC_VCOBYP (rw) */
#define SCU_PLL_CLC_VCOBYP_POS         _SCU_UL(5)
#define SCU_PLL_CLC_VCOBYP_LEN         _SCU_UL(1)

/* SCU_PLL_CLC_VCOSEL (rw) */
#define SCU_PLL_CLC_VCOSEL_POS         _SCU_UL(6)
#define SCU_PLL_CLC_VCOSEL_LEN         _SCU_UL(2)

/* SCU_PMG_CSR_PMST (rh) */
#define SCU_PMG_CSR_PMST_POS           _SCU_UL(8)
#define SCU_PMG_CSR_PMST_LEN           _SCU_UL(3)

/* SCU_PMG_CSR_REQSLP (rwh) */
#define SCU_PMG_CSR_REQSLP_POS         _SCU_UL(0)
#define SCU_PMG_CSR_REQSLP_LEN         _SCU_UL(2)

/* SCU_RST_REQ_RREXT (rw) */
#define SCU_RST_REQ_RREXT_POS          _SCU_UL(2)
#define SCU_RST_REQ_RREXT_LEN          _SCU_UL(1)

/* SCU_RST_REQ_RRSTM (rw) */
#define SCU_RST_REQ_RRSTM_POS          _SCU_UL(0)
#define SCU_RST_REQ_RRSTM_LEN          _SCU_UL(1)

/* SCU_RST_REQ_SWBOOT (rw) */
#define SCU_RST_REQ_SWBOOT_POS         _SCU_UL(24)
#define SCU_RST_REQ_SWBOOT_LEN         _SCU_UL(1)

/* SCU_RST_REQ_SWBRKIN (rw) */
#define SCU_RST_REQ_SWBRKIN_POS        _SCU_UL(21)
#define SCU_RST_REQ_SWBRKIN_LEN        _SCU_UL(1)

/* SCU_RST_REQ_SWCFG (rw) */
#define SCU_RST_REQ_SWCFG_POS          _SCU_UL(16)
#define SCU_RST_REQ_SWCFG_LEN          _SCU_UL(4)

/* SCU_RST_SR_HDRST (rh) */
#define SCU_RST_SR_HDRST_POS           _SCU_UL(28)
#define SCU_RST_SR_HDRST_LEN           _SCU_UL(1)

/* SCU_RST_SR_HWBRKIN (rh) */
#define SCU_RST_SR_HWBRKIN_POS         _SCU_UL(21)
#define SCU_RST_SR_HWBRKIN_LEN         _SCU_UL(1)

/* SCU_RST_SR_HWCFG (rh) */
#define SCU_RST_SR_HWCFG_POS           _SCU_UL(16)
#define SCU_RST_SR_HWCFG_LEN           _SCU_UL(4)

/* SCU_RST_SR_PWORST (rh) */
#define SCU_RST_SR_PWORST_POS          _SCU_UL(27)
#define SCU_RST_SR_PWORST_LEN          _SCU_UL(1)

/* SCU_RST_SR_RSEXT (rh) */
#define SCU_RST_SR_RSEXT_POS           _SCU_UL(2)
#define SCU_RST_SR_RSEXT_LEN           _SCU_UL(1)

/* SCU_RST_SR_RSSTM (rh) */
#define SCU_RST_SR_RSSTM_POS           _SCU_UL(0)
#define SCU_RST_SR_RSSTM_LEN           _SCU_UL(1)

/* SCU_RST_SR_SFTRST (rh) */
#define SCU_RST_SR_SFTRST_POS          _SCU_UL(29)
#define SCU_RST_SR_SFTRST_LEN          _SCU_UL(1)

/* SCU_RST_SR_TMPLS (rh) */
#define SCU_RST_SR_TMPLS_POS          _SCU_UL(22)
#define SCU_RST_SR_TMPLS_LEN          _SCU_UL(1)

/* SCU_RST_SR_WDTRST (rh) */
#define SCU_RST_SR_WDTRST_POS          _SCU_UL(30)
#define SCU_RST_SR_WDTRST_LEN          _SCU_UL(1)

/* SCU_RTID_RT0 (r) */
#define SCU_RTID_RT0_POS               _SCU_UL(0)
#define SCU_RTID_RT0_LEN               _SCU_UL(1)

/* SCU_RTID_RT1 (r) */
#define SCU_RTID_RT1_POS               _SCU_UL(1)
#define SCU_RTID_RT1_LEN               _SCU_UL(1)

/* SCU_RTID_RT10 (r) */
#define SCU_RTID_RT10_POS              _SCU_UL(10)
#define SCU_RTID_RT10_LEN              _SCU_UL(1)

/* SCU_RTID_RT11 (r) */
#define SCU_RTID_RT11_POS              _SCU_UL(11)
#define SCU_RTID_RT11_LEN              _SCU_UL(1)

/* SCU_RTID_RT12 (r) */
#define SCU_RTID_RT12_POS              _SCU_UL(12)
#define SCU_RTID_RT12_LEN              _SCU_UL(1)

/* SCU_RTID_RT13 (r) */
#define SCU_RTID_RT13_POS              _SCU_UL(13)
#define SCU_RTID_RT13_LEN              _SCU_UL(1)

/* SCU_RTID_RT14 (r) */
#define SCU_RTID_RT14_POS              _SCU_UL(14)
#define SCU_RTID_RT14_LEN              _SCU_UL(1)

/* SCU_RTID_RT15 (r) */
#define SCU_RTID_RT15_POS              _SCU_UL(15)
#define SCU_RTID_RT15_LEN              _SCU_UL(1)

/* SCU_RTID_RT2 (r) */
#define SCU_RTID_RT2_POS               _SCU_UL(2)
#define SCU_RTID_RT2_LEN               _SCU_UL(1)

/* SCU_RTID_RT3 (r) */
#define SCU_RTID_RT3_POS               _SCU_UL(3)
#define SCU_RTID_RT3_LEN               _SCU_UL(1)

/* SCU_RTID_RT4 (r) */
#define SCU_RTID_RT4_POS               _SCU_UL(4)
#define SCU_RTID_RT4_LEN               _SCU_UL(1)

/* SCU_RTID_RT5 (r) */
#define SCU_RTID_RT5_POS               _SCU_UL(5)
#define SCU_RTID_RT5_LEN               _SCU_UL(1)

/* SCU_RTID_RT6 (r) */
#define SCU_RTID_RT6_POS               _SCU_UL(6)
#define SCU_RTID_RT6_LEN               _SCU_UL(1)

/* SCU_RTID_RT7 (r) */
#define SCU_RTID_RT7_POS               _SCU_UL(7)
#define SCU_RTID_RT7_LEN               _SCU_UL(1)

/* SCU_RTID_RT8 (r) */
#define SCU_RTID_RT8_POS               _SCU_UL(8)
#define SCU_RTID_RT8_LEN               _SCU_UL(1)

/* SCU_RTID_RT9 (r) */
#define SCU_RTID_RT9_POS               _SCU_UL(9)
#define SCU_RTID_RT9_LEN               _SCU_UL(1)

/* SCU_CON_AN7TM (rw) */
#define SCU_CON_AN7TM_POS              _SCU_UL(6)
#define SCU_CON_AN7TM_LEN              _SCU_UL(1)

/* SCU_CON_DTSON (rw) */
#define SCU_CON_DTSON_POS              _SCU_UL(9)
#define SCU_CON_DTSON_LEN              _SCU_UL(1)

/* SCU_CON_FIEN (rw) */
#define SCU_CON_FIEN_POS               _SCU_UL(0)
#define SCU_CON_FIEN_LEN               _SCU_UL(1)

/* SCU_CON_GIN1S (rw) */
#define SCU_CON_GIN1S_POS              _SCU_UL(18)
#define SCU_CON_GIN1S_LEN              _SCU_UL(2)

/* SCU_CON_LDEN (rw) */
#define SCU_CON_LDEN_POS               _SCU_UL(10)
#define SCU_CON_LDEN_LEN               _SCU_UL(1)

/* SCU_CON_NMIEN (rw) */
#define SCU_CON_NMIEN_POS              _SCU_UL(5)
#define SCU_CON_NMIEN_LEN              _SCU_UL(1)

/* SCU_CON_ONE (rw) */
#define SCU_CON_ONE_POS                _SCU_UL(24)
#define SCU_CON_ONE_LEN                _SCU_UL(8)

/* SCU_CON_RBOOTA (w) */
#define SCU_CON_RBOOTA_POS             _SCU_UL(7)
#define SCU_CON_RBOOTA_LEN             _SCU_UL(1)

/* SCU_CON_RFCBAE (w) */
#define SCU_CON_RFCBAE_POS             _SCU_UL(8)
#define SCU_CON_RFCBAE_LEN             _SCU_UL(1)

/* SCU_CON_RPARAV (rw) */
#define SCU_CON_RPARAV_POS             _SCU_UL(11)
#define SCU_CON_RPARAV_LEN             _SCU_UL(1)

/* SCU_CON_ZERO (rw) */
#define SCU_CON_ZERO_POS               _SCU_UL(20)
#define SCU_CON_ZERO_LEN               _SCU_UL(4)

/* SCU_CON_ZERO0 (rw) */
#define SCU_CON_ZERO0_POS              _SCU_UL(16)
#define SCU_CON_ZERO0_LEN              _SCU_UL(2)

/* SCU_DMARS_SEL0 (rw) */
#define SCU_DMARS_SEL0_POS             _SCU_UL(0)
#define SCU_DMARS_SEL0_LEN             _SCU_UL(1)

/* SCU_DMARS_SEL1 (rw) */
#define SCU_DMARS_SEL1_POS             _SCU_UL(1)
#define SCU_DMARS_SEL1_LEN             _SCU_UL(1)

/* SCU_DMARS_SEL2 (rw) */
#define SCU_DMARS_SEL2_POS             _SCU_UL(2)
#define SCU_DMARS_SEL2_LEN             _SCU_UL(1)

/* SCU_EMSR_EMSF (rh) */
#define SCU_EMSR_EMSF_POS              _SCU_UL(16)
#define SCU_EMSR_EMSF_LEN              _SCU_UL(1)

/* SCU_EMSR_EMSFM (w) */
#define SCU_EMSR_EMSFM_POS             _SCU_UL(24)
#define SCU_EMSR_EMSFM_LEN             _SCU_UL(2)

/* SCU_EMSR_ENON (rw) */
#define SCU_EMSR_ENON_POS              _SCU_UL(2)
#define SCU_EMSR_ENON_LEN              _SCU_UL(1)

/* SCU_EMSR_MODE (rw) */
#define SCU_EMSR_MODE_POS              _SCU_UL(1)
#define SCU_EMSR_MODE_LEN              _SCU_UL(1)

/* SCU_EMSR_POL (rw) */
#define SCU_EMSR_POL_POS               _SCU_UL(0)
#define SCU_EMSR_POL_LEN               _SCU_UL(1)

/* SCU_ID_MOD_NUMBER (r) */
#define SCU_ID_MOD_NUMBER_POS          _SCU_UL(16)
#define SCU_ID_MOD_NUMBER_LEN          _SCU_UL(16)

/* SCU_ID_MOD_REV (r) */
#define SCU_ID_MOD_REV_POS             _SCU_UL(0)
#define SCU_ID_MOD_REV_LEN             _SCU_UL(8)

/* SCU_ID_MOD_TYPE (r) */
#define SCU_ID_MOD_TYPE_POS            _SCU_UL(8)
#define SCU_ID_MOD_TYPE_LEN            _SCU_UL(8)

/* SCU_OTCON_OTMEN (rh) */
#define SCU_OTCON_OTMEN_POS            _SCU_UL(31)
#define SCU_OTCON_OTMEN_LEN            _SCU_UL(1)

/* SCU_OTCON_OTMLC (w) */
#define SCU_OTCON_OTMLC_POS            _SCU_UL(0)
#define SCU_OTCON_OTMLC_LEN            _SCU_UL(8)

/* SCU_OTDAT_T0 (rw) */
#define SCU_OTDAT_T0_POS               _SCU_UL(0)
#define SCU_OTDAT_T0_LEN               _SCU_UL(1)

/* SCU_OTDAT_T1 (rw) */
#define SCU_OTDAT_T1_POS               _SCU_UL(1)
#define SCU_OTDAT_T1_LEN               _SCU_UL(1)

/* SCU_OTDAT_T10 (rw) */
#define SCU_OTDAT_T10_POS              _SCU_UL(10)
#define SCU_OTDAT_T10_LEN              _SCU_UL(1)

/* SCU_OTDAT_T11 (rw) */
#define SCU_OTDAT_T11_POS              _SCU_UL(11)
#define SCU_OTDAT_T11_LEN              _SCU_UL(1)

/* SCU_OTDAT_T12 (rw) */
#define SCU_OTDAT_T12_POS              _SCU_UL(12)
#define SCU_OTDAT_T12_LEN              _SCU_UL(1)

/* SCU_OTDAT_T13 (rw) */
#define SCU_OTDAT_T13_POS              _SCU_UL(13)
#define SCU_OTDAT_T13_LEN              _SCU_UL(1)

/* SCU_OTDAT_T14 (rw) */
#define SCU_OTDAT_T14_POS              _SCU_UL(14)
#define SCU_OTDAT_T14_LEN              _SCU_UL(1)

/* SCU_OTDAT_T15 (rw) */
#define SCU_OTDAT_T15_POS              _SCU_UL(15)
#define SCU_OTDAT_T15_LEN              _SCU_UL(1)

/* SCU_OTDAT_T2 (rw) */
#define SCU_OTDAT_T2_POS               _SCU_UL(2)
#define SCU_OTDAT_T2_LEN               _SCU_UL(1)

/* SCU_OTDAT_T3 (rw) */
#define SCU_OTDAT_T3_POS               _SCU_UL(3)
#define SCU_OTDAT_T3_LEN               _SCU_UL(1)

/* SCU_OTDAT_T4 (rw) */
#define SCU_OTDAT_T4_POS               _SCU_UL(4)
#define SCU_OTDAT_T4_LEN               _SCU_UL(1)

/* SCU_OTDAT_T5 (rw) */
#define SCU_OTDAT_T5_POS               _SCU_UL(5)
#define SCU_OTDAT_T5_LEN               _SCU_UL(1)

/* SCU_OTDAT_T6 (rw) */
#define SCU_OTDAT_T6_POS               _SCU_UL(6)
#define SCU_OTDAT_T6_LEN               _SCU_UL(1)

/* SCU_OTDAT_T7 (rw) */
#define SCU_OTDAT_T7_POS               _SCU_UL(7)
#define SCU_OTDAT_T7_LEN               _SCU_UL(1)

/* SCU_OTDAT_T8 (rw) */
#define SCU_OTDAT_T8_POS               _SCU_UL(8)
#define SCU_OTDAT_T8_LEN               _SCU_UL(1)

/* SCU_OTDAT_T9 (rw) */
#define SCU_OTDAT_T9_POS               _SCU_UL(9)
#define SCU_OTDAT_T9_LEN               _SCU_UL(1)

/* SCU_PETCR_PEN0 (rw) */
#define SCU_PETCR_PEN0_POS             _SCU_UL(0)
#define SCU_PETCR_PEN0_LEN             _SCU_UL(1)

/* SCU_PETCR_PEN1 (rw) */
#define SCU_PETCR_PEN1_POS             _SCU_UL(1)
#define SCU_PETCR_PEN1_LEN             _SCU_UL(1)

/* SCU_PETCR_PEN2 (rw) */
#define SCU_PETCR_PEN2_POS             _SCU_UL(2)
#define SCU_PETCR_PEN2_LEN             _SCU_UL(1)

/* SCU_PETCR_PEN3 (rw) */
#define SCU_PETCR_PEN3_POS             _SCU_UL(3)
#define SCU_PETCR_PEN3_LEN             _SCU_UL(1)

/* SCU_PETCR_PEN4 (rw) */
#define SCU_PETCR_PEN4_POS             _SCU_UL(4)
#define SCU_PETCR_PEN4_LEN             _SCU_UL(1)

/* SCU_PETCR_PEN5 (rw) */
#define SCU_PETCR_PEN5_POS             _SCU_UL(5)
#define SCU_PETCR_PEN5_LEN             _SCU_UL(1)

/* SCU_PETSR_PFL0 (rh) */
#define SCU_PETSR_PFL0_POS             _SCU_UL(0)
#define SCU_PETSR_PFL0_LEN             _SCU_UL(1)

/* SCU_PETSR_PFL1 (rh) */
#define SCU_PETSR_PFL1_POS             _SCU_UL(1)
#define SCU_PETSR_PFL1_LEN             _SCU_UL(1)

/* SCU_PETSR_PFL2 (rh) */
#define SCU_PETSR_PFL2_POS             _SCU_UL(2)
#define SCU_PETSR_PFL2_LEN             _SCU_UL(1)

/* SCU_PETSR_PFL3 (rh) */
#define SCU_PETSR_PFL3_POS             _SCU_UL(3)
#define SCU_PETSR_PFL3_LEN             _SCU_UL(1)

/* SCU_PETSR_PFL4 (rh) */
#define SCU_PETSR_PFL4_POS             _SCU_UL(4)
#define SCU_PETSR_PFL4_LEN             _SCU_UL(1)

/* SCU_PETSR_PFL5 (rh) */
#define SCU_PETSR_PFL5_POS             _SCU_UL(5)
#define SCU_PETSR_PFL5_LEN             _SCU_UL(1)

/* SCU_PTCON_DISWRJ (rw) */
#define SCU_PTCON_DISWRJ_POS           _SCU_UL(18)
#define SCU_PTCON_DISWRJ_LEN           _SCU_UL(1)

/* SCU_PTCON_ENOUT0 (rw) */
#define SCU_PTCON_ENOUT0_POS           _SCU_UL(8)
#define SCU_PTCON_ENOUT0_LEN           _SCU_UL(1)

/* SCU_PTCON_PT1 (rw) */
#define SCU_PTCON_PT1_POS              _SCU_UL(17)
#define SCU_PTCON_PT1_LEN              _SCU_UL(1)

/* SCU_PTCON_PTMEN (rh) */
#define SCU_PTCON_PTMEN_POS            _SCU_UL(31)
#define SCU_PTCON_PTMEN_LEN            _SCU_UL(1)

/* SCU_PTCON_PTMLC (w) */
#define SCU_PTCON_PTMLC_POS            _SCU_UL(0)
#define SCU_PTCON_PTMLC_LEN            _SCU_UL(8)

/* SCU_PTCON_RDSS0 (rwh) */
#define SCU_PTCON_RDSS0_POS            _SCU_UL(12)
#define SCU_PTCON_RDSS0_LEN            _SCU_UL(1)

/* SCU_PTDAT0_BRKIN (rwh) */
#define SCU_PTDAT0_BRKIN_POS           _SCU_UL(7)
#define SCU_PTDAT0_BRKIN_LEN           _SCU_UL(1)

/* SCU_PTDAT0_BRKOUT (rwh) */
#define SCU_PTDAT0_BRKOUT_POS          _SCU_UL(8)
#define SCU_PTDAT0_BRKOUT_LEN          _SCU_UL(1)

/* SCU_PTDAT0_BYPASS (rwh) */
#define SCU_PTDAT0_BYPASS_POS          _SCU_UL(6)
#define SCU_PTDAT0_BYPASS_LEN          _SCU_UL(1)

/* SCU_PTDAT0_HDRST (rwh) */
#define SCU_PTDAT0_HDRST_POS           _SCU_UL(10)
#define SCU_PTDAT0_HDRST_LEN           _SCU_UL(1)

/* SCU_PTDAT0_NMI (rwh) */
#define SCU_PTDAT0_NMI_POS             _SCU_UL(11)
#define SCU_PTDAT0_NMI_LEN             _SCU_UL(1)

/* SCU_PTDAT0_TCK (rwh) */
#define SCU_PTDAT0_TCK_POS             _SCU_UL(1)
#define SCU_PTDAT0_TCK_LEN             _SCU_UL(1)

/* SCU_PTDAT0_TDI (rwh) */
#define SCU_PTDAT0_TDI_POS             _SCU_UL(2)
#define SCU_PTDAT0_TDI_LEN             _SCU_UL(1)

/* SCU_PTDAT0_TDO (rwh) */
#define SCU_PTDAT0_TDO_POS             _SCU_UL(3)
#define SCU_PTDAT0_TDO_LEN             _SCU_UL(1)

/* SCU_PTDAT0_TESTMODE (rh) */
#define SCU_PTDAT0_TESTMODE_POS        _SCU_UL(5)
#define SCU_PTDAT0_TESTMODE_LEN        _SCU_UL(1)

/* SCU_PTDAT0_TMS (rwh) */
#define SCU_PTDAT0_TMS_POS             _SCU_UL(4)
#define SCU_PTDAT0_TMS_LEN             _SCU_UL(1)

/* SCU_PTDAT0_TRCLK (rwh) */
#define SCU_PTDAT0_TRCLK_POS           _SCU_UL(9)
#define SCU_PTDAT0_TRCLK_LEN           _SCU_UL(1)

/* SCU_PTDAT0_TRST (rwh) */
#define SCU_PTDAT0_TRST_POS            _SCU_UL(0)
#define SCU_PTDAT0_TRST_LEN            _SCU_UL(1)

/* SCU_SCLIR_SW0PT0 (rh) */
#define SCU_SCLIR_SW0PT0_POS           _SCU_UL(0)
#define SCU_SCLIR_SW0PT0_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT1 (rh) */
#define SCU_SCLIR_SWOPT1_POS           _SCU_UL(1)
#define SCU_SCLIR_SWOPT1_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT10 (rh) */
#define SCU_SCLIR_SWOPT10_POS          _SCU_UL(10)
#define SCU_SCLIR_SWOPT10_LEN          _SCU_UL(1)

/* SCU_SCLIR_SWOPT11 (rh) */
#define SCU_SCLIR_SWOPT11_POS          _SCU_UL(11)
#define SCU_SCLIR_SWOPT11_LEN          _SCU_UL(1)

/* SCU_SCLIR_SWOPT12 (rh) */
#define SCU_SCLIR_SWOPT12_POS          _SCU_UL(12)
#define SCU_SCLIR_SWOPT12_LEN          _SCU_UL(1)

/* SCU_SCLIR_SWOPT13 (rh) */
#define SCU_SCLIR_SWOPT13_POS          _SCU_UL(13)
#define SCU_SCLIR_SWOPT13_LEN          _SCU_UL(1)

/* SCU_SCLIR_SWOPT14 (rh) */
#define SCU_SCLIR_SWOPT14_POS          _SCU_UL(14)
#define SCU_SCLIR_SWOPT14_LEN          _SCU_UL(1)

/* SCU_SCLIR_SWOPT15 (rh) */
#define SCU_SCLIR_SWOPT15_POS          _SCU_UL(15)
#define SCU_SCLIR_SWOPT15_LEN          _SCU_UL(1)

/* SCU_SCLIR_SWOPT2 (rh) */
#define SCU_SCLIR_SWOPT2_POS           _SCU_UL(2)
#define SCU_SCLIR_SWOPT2_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT3 (rh) */
#define SCU_SCLIR_SWOPT3_POS           _SCU_UL(3)
#define SCU_SCLIR_SWOPT3_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT4 (rh) */
#define SCU_SCLIR_SWOPT4_POS           _SCU_UL(4)
#define SCU_SCLIR_SWOPT4_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT5 (rh) */
#define SCU_SCLIR_SWOPT5_POS           _SCU_UL(5)
#define SCU_SCLIR_SWOPT5_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT6 (rh) */
#define SCU_SCLIR_SWOPT6_POS           _SCU_UL(6)
#define SCU_SCLIR_SWOPT6_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT7 (rh) */
#define SCU_SCLIR_SWOPT7_POS           _SCU_UL(7)
#define SCU_SCLIR_SWOPT7_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT8 (rh) */
#define SCU_SCLIR_SWOPT8_POS           _SCU_UL(8)
#define SCU_SCLIR_SWOPT8_LEN           _SCU_UL(1)

/* SCU_SCLIR_SWOPT9 (rh) */
#define SCU_SCLIR_SWOPT9_POS           _SCU_UL(9)
#define SCU_SCLIR_SWOPT9_LEN           _SCU_UL(1)

/* SCU_SCLKFDR_DISCLK (rwh) */
#define SCU_SCLKFDR_DISCLK_POS         _SCU_UL(31)
#define SCU_SCLKFDR_DISCLK_LEN         _SCU_UL(1)

/* SCU_SCLKFDR_DM (rw) */
#define SCU_SCLKFDR_DM_POS             _SCU_UL(14)
#define SCU_SCLKFDR_DM_LEN             _SCU_UL(2)

/* SCU_SCLKFDR_ENHW (rw) */
#define SCU_SCLKFDR_ENHW_POS           _SCU_UL(30)
#define SCU_SCLKFDR_ENHW_LEN           _SCU_UL(1)

/* SCU_SCLKFDR_RESULT (rh) */
#define SCU_SCLKFDR_RESULT_POS         _SCU_UL(16)
#define SCU_SCLKFDR_RESULT_LEN         _SCU_UL(10)

/* SCU_SCLKFDR_SC (rw) */
#define SCU_SCLKFDR_SC_POS             _SCU_UL(12)
#define SCU_SCLKFDR_SC_LEN             _SCU_UL(2)

/* SCU_SCLKFDR_SM (rw) */
#define SCU_SCLKFDR_SM_POS             _SCU_UL(11)
#define SCU_SCLKFDR_SM_LEN             _SCU_UL(1)

/* SCU_SCLKFDR_STEP (rw) */
#define SCU_SCLKFDR_STEP_POS           _SCU_UL(0)
#define SCU_SCLKFDR_STEP_LEN           _SCU_UL(10)

/* SCU_SCLKFDR_SUSACK (rh) */
#define SCU_SCLKFDR_SUSACK_POS         _SCU_UL(28)
#define SCU_SCLKFDR_SUSACK_LEN         _SCU_UL(1)

/* SCU_SCLKFDR_SUSREQ (rh) */
#define SCU_SCLKFDR_SUSREQ_POS         _SCU_UL(29)
#define SCU_SCLKFDR_SUSREQ_LEN         _SCU_UL(1)

/* SCU_STAT_BOOTA (rh) */
#define SCU_STAT_BOOTA_POS             _SCU_UL(15)
#define SCU_STAT_BOOTA_LEN             _SCU_UL(1)

/* SCU_STAT_DTSRDY (rh) */
#define SCU_STAT_DTSRDY_POS            _SCU_UL(13)
#define SCU_STAT_DTSRDY_LEN            _SCU_UL(1)

/* SCU_STAT_FCBAE (rh) */
#define SCU_STAT_FCBAE_POS             _SCU_UL(14)
#define SCU_STAT_FCBAE_LEN             _SCU_UL(1)

/* SCU_STAT_FII (rh) */
#define SCU_STAT_FII_POS               _SCU_UL(4)
#define SCU_STAT_FII_LEN               _SCU_UL(1)

/* SCU_STAT_FUI (rh) */
#define SCU_STAT_FUI_POS               _SCU_UL(1)
#define SCU_STAT_FUI_LEN               _SCU_UL(1)

/* SCU_STAT_FVI (rh) */
#define SCU_STAT_FVI_POS               _SCU_UL(3)
#define SCU_STAT_FVI_LEN               _SCU_UL(1)

/* SCU_STAT_FXI (rh) */
#define SCU_STAT_FXI_POS               _SCU_UL(0)
#define SCU_STAT_FXI_LEN               _SCU_UL(1)

/* SCU_STAT_FZI (rh) */
#define SCU_STAT_FZI_POS               _SCU_UL(2)
#define SCU_STAT_FZI_LEN               _SCU_UL(1)

/* SCU_STAT_PARAV (rh) */
#define SCU_STAT_PARAV_POS             _SCU_UL(12)
#define SCU_STAT_PARAV_LEN             _SCU_UL(1)

/* SCU_TCCON_TCC0 (rw) */
#define SCU_TCCON_TCC0_POS             _SCU_UL(4)
#define SCU_TCCON_TCC0_LEN             _SCU_UL(2)

/* SCU_TCCON_TCDIV (rw) */
#define SCU_TCCON_TCDIV_POS            _SCU_UL(8)
#define SCU_TCCON_TCDIV_LEN            _SCU_UL(8)

/* SCU_TCCON_TCE0 (rw) */
#define SCU_TCCON_TCE0_POS             _SCU_UL(3)
#define SCU_TCCON_TCE0_LEN             _SCU_UL(1)

/* SCU_TCCON_TCS0 (rw) */
#define SCU_TCCON_TCS0_POS             _SCU_UL(7)
#define SCU_TCCON_TCS0_LEN             _SCU_UL(1)

/* SCU_TCCON_TCV0 (rh) */
#define SCU_TCCON_TCV0_POS             _SCU_UL(0)
#define SCU_TCCON_TCV0_LEN             _SCU_UL(2)

/* SCU_TCLR0_THCOUNT (rh) */
#define SCU_TCLR0_THCOUNT_POS          _SCU_UL(24)
#define SCU_TCLR0_THCOUNT_LEN          _SCU_UL(8)

/* SCU_TCLR0_THMAX0 (rw) */
#define SCU_TCLR0_THMAX0_POS           _SCU_UL(16)
#define SCU_TCLR0_THMAX0_LEN           _SCU_UL(8)

/* SCU_TCLR0_THMED0 (rw) */
#define SCU_TCLR0_THMED0_POS           _SCU_UL(8)
#define SCU_TCLR0_THMED0_LEN           _SCU_UL(8)

/* SCU_TCLR0_THMIN0 (rw) */
#define SCU_TCLR0_THMIN0_POS           _SCU_UL(0)
#define SCU_TCLR0_THMIN0_LEN           _SCU_UL(8)

/* SCU_TGADC0_EGTSEL (rw) */
#define SCU_TGADC0_EGTSEL_POS          _SCU_UL(16)
#define SCU_TGADC0_EGTSEL_LEN          _SCU_UL(3)

/* SCU_TGADC0_ETRSEL (rw) */
#define SCU_TGADC0_ETRSEL_POS          _SCU_UL(0)
#define SCU_TGADC0_ETRSEL_LEN          _SCU_UL(3)

/* SCU_TGADC0_QTRSEL (rw) */
#define SCU_TGADC0_QTRSEL_POS          _SCU_UL(8)
#define SCU_TGADC0_QTRSEL_LEN          _SCU_UL(3)

/* SCU_TGADC0_SW0GTSEL (rw) */
#define SCU_TGADC0_SW0GTSEL_POS        _SCU_UL(20)
#define SCU_TGADC0_SW0GTSEL_LEN        _SCU_UL(3)

/* SCU_TGADC0_SW0TRSEL (rw) */
#define SCU_TGADC0_SW0TRSEL_POS        _SCU_UL(4)
#define SCU_TGADC0_SW0TRSEL_LEN        _SCU_UL(3)

/* SCU_TGADC0_TTRSEL (rw) */
#define SCU_TGADC0_TTRSEL_POS          _SCU_UL(12)
#define SCU_TGADC0_TTRSEL_LEN          _SCU_UL(3)

/* SCU_WDT_CON0_ENDINIT (rw) */
#define SCU_WDT_CON0_ENDINIT_POS       _SCU_UL(0)
#define SCU_WDT_CON0_ENDINIT_LEN       _SCU_UL(1)

/* SCU_WDT_CON0_WDTHPW0 (w) */
#define SCU_WDT_CON0_WDTHPW0_POS       _SCU_UL(2)
#define SCU_WDT_CON0_WDTHPW0_LEN       _SCU_UL(2)

/* SCU_WDT_CON0_WDTHPW1 (w) */
#define SCU_WDT_CON0_WDTHPW1_POS       _SCU_UL(4)
#define SCU_WDT_CON0_WDTHPW1_LEN       _SCU_UL(4)

/* SCU_WDT_CON0_WDTLCK (rw) */
#define SCU_WDT_CON0_WDTLCK_POS        _SCU_UL(1)
#define SCU_WDT_CON0_WDTLCK_LEN        _SCU_UL(1)

/* SCU_WDT_CON0_WDTPW (rw) */
#define SCU_WDT_CON0_WDTPW_POS         _SCU_UL(8)
#define SCU_WDT_CON0_WDTPW_LEN         _SCU_UL(8)

/* SCU_WDT_CON0_WDTREL (rw) */
#define SCU_WDT_CON0_WDTREL_POS        _SCU_UL(16)
#define SCU_WDT_CON0_WDTREL_LEN        _SCU_UL(16)

/* SCU_WDT_CON1_WDTDR (rw) */
#define SCU_WDT_CON1_WDTDR_POS         _SCU_UL(3)
#define SCU_WDT_CON1_WDTDR_LEN         _SCU_UL(1)

/* SCU_WDT_CON1_WDTIR (rw) */
#define SCU_WDT_CON1_WDTIR_POS         _SCU_UL(2)
#define SCU_WDT_CON1_WDTIR_LEN         _SCU_UL(1)

/* SCU_WDT_SR_WDTAE (r) */
#define SCU_WDT_SR_WDTAE_POS           _SCU_UL(0)
#define SCU_WDT_SR_WDTAE_LEN           _SCU_UL(1)

/* SCU_WDT_SR_WDTDS (r) */
#define SCU_WDT_SR_WDTDS_POS           _SCU_UL(3)
#define SCU_WDT_SR_WDTDS_LEN           _SCU_UL(1)

/* SCU_WDT_SR_WDTIS (r) */
#define SCU_WDT_SR_WDTIS_POS           _SCU_UL(2)
#define SCU_WDT_SR_WDTIS_LEN           _SCU_UL(1)

/* SCU_WDT_SR_WDTOE (r) */
#define SCU_WDT_SR_WDTOE_POS           _SCU_UL(1)
#define SCU_WDT_SR_WDTOE_LEN           _SCU_UL(1)

/* SCU_WDT_SR_WDTPR (r) */
#define SCU_WDT_SR_WDTPR_POS           _SCU_UL(5)
#define SCU_WDT_SR_WDTPR_LEN           _SCU_UL(1)

/* SCU_WDT_SR_WDTTIM (r) */
#define SCU_WDT_SR_WDTTIM_POS          _SCU_UL(16)
#define SCU_WDT_SR_WDTTIM_LEN          _SCU_UL(16)

/* SCU_WDT_SR_WDTTO (r) */
#define SCU_WDT_SR_WDTTO_POS           _SCU_UL(4)
#define SCU_WDT_SR_WDTTO_LEN           _SCU_UL(1)

#endif
