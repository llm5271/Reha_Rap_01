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
 * $Filename__:i14229appl_rc_prot.h$
 *
 * $Author____:JEN1COB$
 *
 * $Function__:.$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:03.12.2012$
 * $Class_____:SWHDR$
 * $Name______:i14229appl_rc_prot$
 * $Variant___:29.1.0$
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
 * 29.1.0; 0     03.12.2012 JAG2ABT
 *   New routines for new routine ID 0xA007
 * 
 * 29.0.0_1; 1     19.01.2012 JAG2ABT
 *   Review findings
 * 
 * 29.0.0_1; 0     23.11.2011 JAG2ABT
 *   Application specific functions for srevice RC
 * 
 * 2.2.0; 0     06.06.2009 MAT1COB
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :i14229appl_rc_prot
 *        Variant :6.80
 *        Revision :0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _I14229APPL_RC_PROT_H
#define _I14229APPL_RC_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *         protected header file for constant definitions of service parameters
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* RC routine status information */
#define I14229APPL_RI_COMPLETED_E            0x00    /* The routine completed all requested functionality */
#define I14229APPL_RI_ACTIVE_E               0x01    /* The routine is currently active, no final results available */
#define I14229APPL_RI_ABORTED_E              0x02    /* The routine aborted before completion */

#define I14229APPL_RI_DATAAVLB_MSK           0x80    /* results still available */

#define I14229APPL_RC_POS_REQ_PARAM          0x03    /* Position of Routine Parameters */
#define I14229APPL_RC_POS_RESP_STAT1         0x03    /* Position of Routine Status Record Element #1 */
#define I14229APPL_RC_NUM_ABORTREASON        0x02    /* number of bytes of abort reason */

/* running status of a routine */
enum
{
    I14229APPL_ST_NOTSTARTED_E = 0,   /* routine was not started in this driving cycle */
    I14229APPL_ST_STOPPED_E,          /* routine has been stopped */
    I14229APPL_ST_STARTED_E,          /* routine has been started */
    I14229APPL_ST_1_E,                /* intermediate stage 1 */
    I14229APPL_ST_2_E,                /* intermediate stage 2 */
    I14229APPL_ST_3_E,                /* intermediate stage 3 */
    I14229APPL_ST_4_E,                /* intermediate stage 4 */
    I14229APPL_ST_5_E,                /* intermediate stage 5 */
    I14229APPL_ST_COMPLETED_E         /* routine has been completed */
};

/*===================================================================
  == This part is generated by the 'tkgen' tool.                   ==
  == according to the 'ReqPara' and 'ResData' columns in the       ==
  == requirement specification file.                               ==
  ===================================================================*/

#ifndef SY_STERVK
  #error >>>> 'SY_STERVK' undefined
#endif
#if (SY_STERVK > 0)
#define I14229APPL_RC_DDYLSU_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_DDYLSU_RESULTS_LENGTH 1
#endif /* (SY_STERVK > 0) */


#ifndef HEGOS2B2_SY
  #error >>>> 'HEGOS2B2_SY' undefined
#endif
#if (HEGOS2B2_SY == 1)
#define I14229APPL_RC_HEGOD_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_HEGOD_RESULTS_LENGTH 1
#endif /* (HEGOS2B2_SY == 1) */


#ifndef SY_STERVK
  #error >>>> 'SY_STERVK' undefined
#endif
#if (SY_STERVK > 0)
#define I14229APPL_RC_DPLLSU_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_DPLLSU_RESULTS_LENGTH 1
#endif /* (SY_STERVK > 0) */


#ifndef SY_STERVK
  #error >>>> 'SY_STERVK' undefined
#endif
#if (SY_STERVK > 0)
#define I14229APPL_RC_KOSLKH_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_KOSLKH_RESULTS_LENGTH 1
#endif /* (SY_STERVK > 0) */

#define I14229APPL_RC_DTEV_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_DTEV_RESULTS_LENGTH 1
#define I14229APPL_RC_DDMTLTC_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_DDMTLTC_RESULTS_LENGTH 1
#define I14229APPL_RC_EEP_EER_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_EEP_EER_RESULTS_LENGTH 0

#ifndef SHTRPTRBCHACTR_SC
  #error >>>> 'SHTRPTRBCHACTR_SC' undefined
#endif
#if (SHTRPTRBCHACTR_SC > 0)
#define I14229APPL_RC_WGDV_REQUEST_LENGTH (RC_MINMUM_REQUEST_LENGTH + 0)
#define I14229APPL_RC_WGDV_RESULTS_LENGTH 1
#endif /* (SY_STERVK > 0) */

/* ==================================================================*/

/* Extracts the length of an EEP element. */
/* MISRA RULE 19.7 VIOLATION: macro is sufficient here */
#define GET_EEP_LENGTH__(a,b,c)  (c)

/* Workarround for Preprocessor. In Code one argument is used. */
/* MISRA RULE 19.7 VIOLATION: macro used here for parameter format */
#define GET_EEP_LENGTH(x)         GET_EEP_LENGTH__(x)

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/*===================================================================
  == This part is generated by the 'tkgen' tool.                   ==
  ===================================================================*/

#if (SY_STERVK > 0)
extern uint16 I14229Appl_RC_DDYLSU_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DDYLSU_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DDYLSU_Result(DiagCom_Msg_t *Msg_ps);
#endif /* (SY_STERVK > 0) */


#if (HEGOS2B2_SY == 1)
extern uint16 I14229Appl_RC_HEGOD_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_HEGOD_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_HEGOD_Result(DiagCom_Msg_t *Msg_ps);
#endif /* (HEGOS2B2_SY == 1) */


#if (SY_STERVK > 0)
extern uint16 I14229Appl_RC_DPLLSU_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DPLLSU_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DPLLSU_Result(DiagCom_Msg_t *Msg_ps);
#endif /* (SY_STERVK > 0) */


#if (SY_STERVK > 0)
extern uint16 I14229Appl_RC_KOSLKH_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_KOSLKH_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_KOSLKH_Result(DiagCom_Msg_t *Msg_ps);
#endif /* (SY_STERVK > 0) */


#if (SHTRPTRBCHACTR_SC > 0)
extern uint16 I14229Appl_RC_WGDV_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_WGDV_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_WGDV_Result(DiagCom_Msg_t *Msg_ps);
#endif /* (SHTRPTRBCHACTR_SC > 0) */


extern uint16 I14229Appl_RC_DTEV_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DTEV_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DTEV_Result(DiagCom_Msg_t *Msg_ps);

extern uint16 I14229Appl_RC_DDMTLTC_Start(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DDMTLTC_Stop(DiagCom_Msg_t *Msg_ps);
extern uint16 I14229Appl_RC_DDMTLTC_Result(DiagCom_Msg_t *Msg_ps);

extern uint16 I14229Appl_RC_EEP_EER_Start(DiagCom_Msg_t *Msg_ps);

/* ==================================================================*/

/*
 ***************************************************************************************************
 * Prototypes for protected module functions
 ***************************************************************************************************
 */



/* _I14229APPL_RC_PROT_H */
#endif
