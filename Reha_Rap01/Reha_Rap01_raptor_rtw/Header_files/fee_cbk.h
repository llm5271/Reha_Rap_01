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
 * $Filename__:fee_cbk.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:initial version (migrated from CC)$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:fee_cbk$ 
 * $Variant___:1.0.0$ 
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
 * 1.0.0; 0     25.06.2010 JWI2SI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
#ifndef  FEE_CBK_H_
#define  FEE_CBK_H_

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/

/*******************************************************************************
**                      Function Like Macro Definitions                       **
*******************************************************************************/
 
/*******************************************************************************
**                      Private Macro Definitions                             **
*******************************************************************************/

/*******************************************************************************
**                      Global Type Definitions                               **
*******************************************************************************/


/*******************************************************************************
**                      Global Constant Declarations                          **
*******************************************************************************/


/*******************************************************************************
**                      Global Variable Declarations                          **
*******************************************************************************/

 
/*******************************************************************************
**                      Global Function Declarations                          **
*******************************************************************************/

/*******************************************************************************
** Syntax : void Fee_JobEndNotification(void)                                 **
**                                                                            **
** Service ID: 16                                                             **
**                                                                            **
** Sync/Async:  Synchronous                                                   **
**                                                                            **
** Reentrancy:  Non reentrant                                                 **
**                                                                            **
** Parameters (in) :  None                                                    **
**                                                                            **
** Parameters (out):  None                                                    **
**                                                                            **
** Return value    :  None                                                    **
**                                                                            **
** Description : FEE051: This routine shall be called by the underlying flash **
** driver to report the successful end of an asynchronous operation.          **
*******************************************************************************/
extern FUNC(void ,FEE_CODE) Fee_JobEndNotification (void);



/*******************************************************************************
** Syntax : void Fee_JobErrorNotification(void)                               **
**                                                                            **
** Service ID: 17                                                             **
**                                                                            **
** Sync/Async:  Synchronous                                                   **
**                                                                            **
** Reentrancy:  Non reentrant                                                 **
**                                                                            **
** Parameters (in) :  None                                                    **
**                                                                            **
** Parameters (out):  None                                                    **
**                                                                            **
** Return value    :  None                                                    **
**                                                                            **
** Description : FEE053: This routine shall be called by the underlying flash **
** driver to report the failure of an asynchronous operation.                 **
*******************************************************************************/
extern FUNC(void ,FEE_CODE) Fee_JobErrorNotification (void);

#endif  /* FEE_CBK_H_ */
