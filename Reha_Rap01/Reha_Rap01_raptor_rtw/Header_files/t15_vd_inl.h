
/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************  
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:t15_vd_inl.h$
 *
 * $Author____:KDD2FE$
 *
 * $Function__:Initial import from Nestor 
 *                  Object in Nestor : 
 *                  Domain :MX17
 *                  Class :FS
 *                  Object name :T15_VD
 *                  Variant :20.20
 *                  Revision :3$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:KUM6COB$
 * $Date______:23.05.2013$
 * $Class_____:SWHDR$
 * $Name______:t15_vd_inl$
 * $Variant___:10.2.1$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 10.2.1; 0     23.05.2013 KUM6COB
 *   1)T15_ATS_SY and with XDI_SC in pavast file to avoid creating ATS block.
 *   2)Warning Removal
 *   RQONE00194684
 * 
 * 10.2.0; 2     17.05.2011 VIY3KOR
 *   Review changes.
 * 
 * 10.2.0; 1     16.05.2011 VIY3KOR
 *   Add Debug mode.
 *   Add new requirements.
 * 
 * 10.2.0; 0     11.05.2011 VIY3KOR
 *   T15 validation over CAN.
 *   RCMS00789958.
 * 
 * 10.1.0; 0     08.07.2010 KDD2FE
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :t15_vd_inl
 *        Variant :20.30
 *        Revision :0
 * 
 * $
 *
 ***************************************************************************************************
 *
 *   T H I S   I S   A   G E N E R A T E D   F I L E   F R O M      A  S  C  E  T
 *
 ***************************************************************************************************
 * Autor:              kum6cob
 * Date:               5/22/2013  17:00:04
 * Modulname:          T15_VD
 * Filename:           t15_vd_inl.h
 * Filetype:           inlheader
 * Implementation:     Impl
 *
 * $Generated by ASCET-SD: V6.1.3 RB-DGS 2.1
 * Expander:           Generic  CID: 610
 * Codegenerator:      ASCET-SE-RBPT V6.1.3.59.14
 * Target:             Generic:MEDC17 [V6.1.3.59.14]
 * CgenOptions:
 *             Allow Double bit Size for Division Numerators=true
 *             Generate Round Operation on float to integer Assignment=false
 *             Generate Access Methods for dT (Alternative: use OS dT directly)=false
 *             Temp Vars always 32 bit (integer)=false
 *             Generate Limiters (may be changed locally)=true
 *             Use SHIFT Operation on Signed Values instead of DIV Operation=true
 *             Optimize Direct Access Methods (Multiple Levels)=true
 *             Protected Vector Indices=false
 *             Optimize Direct Access Methods (One Level)=true
 *             Add Comment with Generation Information for each Component=false
 *             Add Comment with Implementation Information for each Assignment Statement=true
 *             Add Comment with Specification Source for each Statement=true
 *             Add Implementation Definitions=true
 *             Add parenthesis for readability=true
 *             Allow Limit Service for Assignment Limitation=true
 *             Arithmetic Service Set=rb-services
 *             Auto-inline private methods (Smaller code-size - may be changed locally)=false
 *             Casting=Legacy
 *             Code Generator=Object Based Controller Implementation
 *             Compiler=MEDC17 (dummy compiler)
 *             Division truncation direction=Zero (T-division)
 *             Force Parenthesis for Binary Logical Operators=true
 *             Generate Access Macros for=()
 *             Generate Data Structures=YESALL
 *             Generate Define Directives for Enum Values=true
 *             Generate Map File=false
 *             Generate OS Configuration=false
 *             Generate well-formed switch=true
 *             Hierarchical Code-Generation (may be changed locally)=false
 *             Initialise history variable with zero=true
 *             Inline directive=INLINE_FUNCTION
 *             Integer Bit Size=32
 *             Maximum bit Length (float)=32
 *             Maximum bit Length (int)=32
 *             Operating System=GENERIC_OSEK
 *             Optimize Static Actions (Restricted Modelling)=false
 *             Outline Generated Methods (may be changed locally)=false
 *             Prefix for Component Names=
 *             Private directive=static
 *             Protected against division by zero=false
 *             Protected Division against Signed Overflow=false
 *             Public directive=
 *             Result on Division by Zero=numerator
 *             Target=Generic:MEDC17
 *             Use Customized Data Type Names=false
 *             Use power of 2 approximations of literals=false
 *             Use SHIFT Operation on Signed Values instead of MUL Operation=true
 *
 ***************************************************************************************************
</RBHead>*/
#ifndef _T15_VD_INL_H
#define _T15_VD_INL_H

#ifndef __CCODEHEADER_OF_T15_ATSSUBSVAL8_IMPL__
#define __CCODEHEADER_OF_T15_ATSSUBSVAL8_IMPL__

/*-----------------------------------------------------------------------------

 *    Internal header code

 *----------------------------------------------------------------------------*/

/* include ats service only if ATS_SubsVal_ASCETU8 interface is used*/
#if ((T15_ATS_SY != 0))
#include "ats.h"
#endif
#endif /* #define __CCODEHEADER_OF_T15_ATSSUBSVAL8_IMPL__ */

/* begin of public inline code for T15_ATSSUBSVAL8_IMPL */
#if (T15_ATS_SY != 0)

INLINE_FUNCTION uint8 T15_ATSSUBSVAL8_IMPL_ATS_SubsVal8(uint8 actrVal_u8, uint8 numActrId_u8)
{

  /* Code is copied from SWSRC_ATSADAPT_2.0.0_0, because ATSADAPT isn't avaiable in all DS - Projects */

  /* Create lokal copy of actuator value */
  uint8 _u8_actrVal_tmp;

  _u8_actrVal_tmp = actrVal_u8;

  /* substitute tester value */
  ATS_SubsVal8(&_u8_actrVal_tmp, numActrId_u8);
  return (_u8_actrVal_tmp);

}

#endif

/* end of public inline code for T15_ATSSUBSVAL8_IMPL */

/* _T15_VD_INL_H */
#endif
