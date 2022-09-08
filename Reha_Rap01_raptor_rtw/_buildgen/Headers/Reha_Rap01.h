/*
 * File: Reha_Rap01.h
 *
 * Code generated for Simulink model 'Reha_Rap01'.
 *
 * Model version                  : 9.2
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Sep  8 15:37:03 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Reha_Rap01_h_
#define RTW_HEADER_Reha_Rap01_h_
#include <string.h>
#ifndef Reha_Rap01_COMMON_INCLUDES_
#define Reha_Rap01_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "data.h"
#include "sws_dio.h"
#include "gnu_pragma_conf.h"
#include "memlay_pub.h"
#include "syc_postdrv_pub.h"
#include "sws_pwmout.h"
#include "swadp_pub.h"
#include "xcp_protocol.h"
#include "math_defines.h"
#include "can_CAN1.h"
#endif                                 /* Reha_Rap01_COMMON_INCLUDES_ */

#include "Reha_Rap01_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay_DSTATE_b;           /* '<S5>/Unit Delay' */
  uint32_T raptor_delta_time_DWORK1;   /* '<S5>/raptor_delta_time' */
  boolean_T DelayInput1_DSTATE;        /* '<S9>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S5>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_e;        /* '<S4>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE;         /* '<S4>/Unit Delay1' */
} D_Work_Reha_Rap01;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState StoreEEPROM_Trig_ZCE;     /* '<S4>/Store EEPROM' */
  ZCSigState RaiseStartupEvent_Trig_ZCE;/* '<S4>/Raise Startup Event' */
  ZCSigState RaiseShutdownEvent_Trig_ZCE;/* '<S4>/Raise Shutdown Event' */
} PrevZCSigStates_Reha_Rap01;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S5>/Logic'
   */
  boolean_T Logic_table[8];
} ConstParam_Reha_Rap01;

/* Block states (default storage) */
extern D_Work_Reha_Rap01 Reha_Rap01_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_Reha_Rap01 Reha_Rap01_PrevZCSigState;

/* Constant parameters (default storage) */
extern const ConstParam_Reha_Rap01 Reha_Rap01_ConstP;

/* Model entry point functions */
extern void Reha_Rap01_initialize(void);
extern void Reha_Rap01_step(void);
extern void Reha_Rap01_terminate(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Reha_Rap01'
 * '<S1>'   : 'Reha_Rap01/Foreground'
 * '<S2>'   : 'Reha_Rap01/Power Up_Down'
 * '<S3>'   : 'Reha_Rap01/raptor_xcp_def'
 * '<S4>'   : 'Reha_Rap01/Power Up_Down/Background'
 * '<S5>'   : 'Reha_Rap01/Power Up_Down/Background/Debounce'
 * '<S6>'   : 'Reha_Rap01/Power Up_Down/Background/Raise Shutdown Event'
 * '<S7>'   : 'Reha_Rap01/Power Up_Down/Background/Raise Startup Event'
 * '<S8>'   : 'Reha_Rap01/Power Up_Down/Background/Store EEPROM'
 * '<S9>'   : 'Reha_Rap01/Power Up_Down/Background/Debounce/Detect Change'
 * '<S10>'  : 'Reha_Rap01/Power Up_Down/Background/Raise Shutdown Event/raptor_shutdown'
 * '<S11>'  : 'Reha_Rap01/Power Up_Down/Background/Raise Startup Event/raptor_startup'
 * '<S12>'  : 'Reha_Rap01/Power Up_Down/Background/Store EEPROM/raptor_store_nv'
 */
#endif                                 /* RTW_HEADER_Reha_Rap01_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
