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
 * $Filename__:epmcas_ofsdiag_prot.h$
 *
 * $Author____:NF72FE$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:IOM2FE$
 * $Date______:25.07.2012$
 * $Class_____:SWHDR$
 * $Name______:epmcas_ofsdiag_prot$
 * $Variant___:1.28.0$
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
 * 1.28.0; 0     25.07.2012 IOM2FE
 *   Declaration of an external variable in header-file (removal of QAC-warning)
 * 
 * 1.23.0; 0     27.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCAS_OFSDIAG_PROT_H
#define _EPMCAS_OFSDIAG_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * protected header-file for camshaft offset diagnosis
 *
 * \scope               INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Messages
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Extern declarations for owned messages
 ***************************************************************************************************
 */

//**************************************************************************************************
//** Extern declarations of camshaft offset diagnosis
//**************************************************************************************************
__PRAGMA_USE__epm__nsync__RAM__arr8__START
extern enum   EpmCaS_stOfsErr_t EpmCaS_stOfsErr[NUMCASMAX];
extern enum   EpmCaS_stOfs_t EpmCaS_stOfs[NUMCASMAX];
__PRAGMA_USE__epm__nsync__RAM__arr8__END

extern sint32 EpmCaS_phiCaSOfsAvg[NUMCASMAX];

/*
 ***************************************************************************************************
 *Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern bool EpmCaS_ChkMntErr (sint16 phiAdapDiffAvrg, enum EpmHCaS_numCaS_t numCaS);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

#endif
