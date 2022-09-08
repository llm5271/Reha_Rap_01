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
 * $Filename__:obs.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZW2FE$ 
 * $Date______:24.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:obs$ 
 * $Variant___:1.3.0$ 
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
 * 1.3.0; 0     24.06.2010 MZW2FE
 *   .
 * 
 * 1.2.0; 0     18.02.2010 MZW2FE
 *   modifications for the support of TriCore die-temperature
 * 
 * 1.0.0; 0     23.10.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: obs.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _OBS_H
#define _OBS_H



/*
 ***************************************************************************************************
 * FCT Section: include all atomic components inside the structural component
 ***************************************************************************************************
 */

/*================================================================================================*/
/* include section for all sensors, add here includes for new sensors                             */
/*================================================================================================*/
/*------------------------------------------------------------------------------------------------*/
/*------------> DON'T FORGET TO ADD NEW SENSORS ALSO INSIDE "obshal_confrules.xml!!! <------------*/
/*------------------------------------------------------------------------------------------------*/

/* for the die-temperature-sensor of the TriCore */
#include "cpu.h"

/* SMP480: atmospheric pressure and temperature sensor */
#include "smp480.h"

/*================================================================================================*/



/*================================================================================================*/
/* include obshal stuff                                                                          */
/*================================================================================================*/
#ifndef _LIBRARYABILITY_H
#include "obshal_auto_conf.h"
#endif

#include "obshal_pub.h"

/*================================================================================================*/


#endif   /* _OBS_H */
