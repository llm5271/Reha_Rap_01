/*
 * File: Reha_Rap01.c
 *
 * Code generated for Simulink model 'Reha_Rap01'.
 *
 * Model version                  : 9.32
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sat Sep 10 17:18:14 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Reha_Rap01.h"
#include "Reha_Rap01_private.h"

/* Block states (default storage) */
D_Work_Reha_Rap01 Reha_Rap01_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Reha_Rap01 Reha_Rap01_PrevZCSigState;

/* System initialize for function-call system: '<S2>/Background' */
void Reha_Rap01_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_digital_in): '<S5>/raptor_digital_in' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S5>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S6>/raptor_delta_time' */
  Reha_Rap01_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay2' */
  Reha_Rap01_DWork.UnitDelay2_DSTATE = true;
}

/* System reset for function-call system: '<S2>/Background' */
void Reha_Rap01_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S6>/raptor_delta_time' */
  Reha_Rap01_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay2' */
  Reha_Rap01_DWork.UnitDelay2_DSTATE = true;
}

/* Output and update for function-call system: '<S2>/Background' */
void Reha_Rap01_Background(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_delta_time;
  boolean_T rtb_raptor_digital_in;
  boolean_T rtb_raptor_sfun_nv_status;
  real_T rtb_MultiportSwitch1;
  boolean_T rtb_Logic;
  boolean_T rtb_LogicalOperator1_h;
  boolean_T rtb_LogicalOperator2;
  boolean_T rtb_LogicalOperator2_c;

  /* S-Function (raptor_sfun_digital_in): '<S5>/raptor_digital_in' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_digital_in = swsh_ignswSt();
  }

  /* S-Function (raptor_sfun_delta_time): '<S6>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = (GetDeltaTime_ms
      (&Reha_Rap01_DWork.raptor_delta_time_DWORK1) * 0.001f);
  }

  /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S10>/FixPt Relational Operator'
   *  Sum: '<S6>/Add'
   *  UnitDelay: '<S10>/Delay Input1'
   *  UnitDelay: '<S6>/Unit Delay'
   */
  if (rtb_raptor_digital_in == Reha_Rap01_DWork.DelayInput1_DSTATE) {
    rtb_MultiportSwitch1 = rtb_raptor_delta_time +
      Reha_Rap01_DWork.UnitDelay_DSTATE_b;
  } else {
    rtb_MultiportSwitch1 = 0.0;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch1' */
  /* S-Function (raptor_sfun_nv_status): '<S5>/raptor_sfun_nv_status' incorporates:
   *  UnitDelay: '<S6>/Unit Delay2'
   */
  rtb_raptor_sfun_nv_status = Reha_Rap01_DWork.UnitDelay2_DSTATE;

  /* CombinatorialLogic: '<S6>/Logic' incorporates:
   *  Logic: '<S6>/Logical Operator1'
   *  Logic: '<S6>/Logical Operator2'
   *  Logic: '<S6>/Logical Operator3'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S6>/raptor_adjustment3'
   *  S-Function (raptor_sfun_adjustment): '<S6>/raptor_adjustment4'
   */
  rtb_Logic = Reha_Rap01_ConstP.Logic_table[((((uint32_T)(rtb_raptor_digital_in &&
    (rtb_MultiportSwitch1 >= (KeySwHiTimeThr_Data()))) << 1) +
    ((!rtb_raptor_digital_in) && (rtb_MultiportSwitch1 >= (KeySwLoTimeThr_Data()))))
    << 1) + rtb_raptor_sfun_nv_status];

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S5>/raptor_data_read1'
   */
  rtb_LogicalOperator1_h = (rtb_Logic || KeepModuleOn_Data());

  /* Outputs for Triggered SubSystem: '<S5>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S7>/Trigger'
   */
  if ((!rtb_LogicalOperator1_h) &&
      (Reha_Rap01_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S7>/raptor_data_write' incorporates:
     *  Constant: '<S7>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S7>/Function-Call Generator' incorporates:
     *  SubSystem: '<S7>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S11>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S7>/Function-Call Generator' */
  }

  Reha_Rap01_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = rtb_LogicalOperator1_h;

  /* End of Outputs for SubSystem: '<S5>/Raise Shutdown Event' */
  /* Outputs for Enabled and Triggered SubSystem: '<S5>/Raise Startup Event' incorporates:
   *  EnablePort: '<S8>/Enable'
   *  TriggerPort: '<S8>/Trigger'
   */
  if (FgndTasksStopped_Data()) {
    if (rtb_LogicalOperator1_h &&
        (Reha_Rap01_PrevZCSigState.RaiseStartupEvent_Trig_ZCE != POS_ZCSIG)) {
      /* S-Function (fcgen): '<S8>/Function-Call Generator' incorporates:
       *  SubSystem: '<S8>/raptor_startup'
       */
      /* S-Function (raptor_sfun_startup): '<S12>/raptor_data_write' */
      /* S-Function Block */
      {
        extern void App_Startup(void);
        App_Startup();
      }

      /* End of Outputs for S-Function (fcgen): '<S8>/Function-Call Generator' */
    }

    /* Outputs for Triggered SubSystem: '<S5>/Raise Shutdown Event' incorporates:
     *  TriggerPort: '<S7>/Trigger'
     */
    Reha_Rap01_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
      rtb_LogicalOperator1_h;

    /* End of Outputs for SubSystem: '<S5>/Raise Shutdown Event' */
  }

  /* End of S-Function (raptor_sfun_data_read): '<S5>/raptor_data_read' */

  /* Outputs for Triggered SubSystem: '<S5>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S7>/Trigger'
   */
  Reha_Rap01_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = rtb_LogicalOperator1_h;

  /* End of Outputs for SubSystem: '<S5>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S5>/Raise Startup Event' */

  /* UnitDelay: '<S5>/Unit Delay' */
  rtb_LogicalOperator2_c = Reha_Rap01_DWork.UnitDelay_DSTATE_e;

  /* Outputs for Triggered SubSystem: '<S5>/Store EEPROM' incorporates:
   *  TriggerPort: '<S9>/Trigger'
   */
  if ((!Reha_Rap01_DWork.UnitDelay_DSTATE_e) &&
      (Reha_Rap01_PrevZCSigState.StoreEEPROM_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (fcgen): '<S9>/Function-Call Generator' incorporates:
     *  SubSystem: '<S9>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S13>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S9>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S5>/Unit Delay' */
  Reha_Rap01_PrevZCSigState.StoreEEPROM_Trig_ZCE = rtb_LogicalOperator2_c;

  /* End of Outputs for SubSystem: '<S5>/Store EEPROM' */

  /* S-Function (raptor_sfun_data_write): '<S5>/raptor_data_write' */
  KeySw_Bgnd_Data() = rtb_Logic;

  /* S-Function (raptor_sfun_nv_status): '<S5>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S5>/Logical Operator2' incorporates:
   *  UnitDelay: '<S5>/Unit Delay1'
   */
  rtb_LogicalOperator2 = (rtb_raptor_sfun_nv_status || rtb_LogicalOperator1_h ||
    Reha_Rap01_DWork.UnitDelay1_DSTATE);

  /* S-Function (raptor_sfun_digital_out): '<S5>/raptor_digital_out' */
  /* S-Function Block: POWER_HOLD */
  {
    {
      if (rtb_LogicalOperator2 && !swsh_ignswSt()) {
        SyC_WaitPostDrv();
      }
    }
  }

  /* Update for UnitDelay: '<S10>/Delay Input1' */
  Reha_Rap01_DWork.DelayInput1_DSTATE = rtb_raptor_digital_in;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  Reha_Rap01_DWork.UnitDelay_DSTATE_b = rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S6>/Unit Delay2' */
  Reha_Rap01_DWork.UnitDelay2_DSTATE = rtb_Logic;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  Reha_Rap01_DWork.UnitDelay_DSTATE_e = rtb_LogicalOperator1_h;

  /* Update for UnitDelay: '<S5>/Unit Delay1' */
  Reha_Rap01_DWork.UnitDelay1_DSTATE = rtb_LogicalOperator2_c;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Reha_Rap01_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_adjustment;
  real_T rtb_Add_j;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_Add_j = Reha_Rap01_DWork.UnitDelay_DSTATE + 1.0;

  /* S-Function (raptor_sfun_measurement): '<S1>/raptor_measurement' */
  Counter_Data() = rtb_Add_j;

  /* S-Function (raptor_sfun_measurement): '<S4>/raptor_measurement' incorporates:
   *  Constant: '<S4>/Constant'
   */
  my_val3_moni_Data() = (my_val3_Data());

  /* S-Function (raptor_sfun_measurement): '<S4>/raptor_measurement2' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  my_val5_moni_Data() = (my_val5_Data());

  /* S-Function (raptor_sfun_measurement): '<S4>/raptor_measurement1' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  my_val4_moni_Data() = (my_val4_Data());

  /* S-Function (raptor_sfun_adjustment): '<S4>/raptor_adjustment' */
  rtb_raptor_adjustment = (CalByRap_Data());

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Reha_Rap01_DWork.UnitDelay_DSTATE = rtb_Add_j;
}

/* Model step function */
void Reha_Rap01_step(void)
{
  /* S-Function (raptor_sfun_target_def): '<Root>/raptor_target_def' */

  /*
   * New Eagle LLC 2011
   */
}

/* Model initialize function */
void Reha_Rap01_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)&Reha_Rap01_DWork, 0,
                sizeof(D_Work_Reha_Rap01));
  Reha_Rap01_DWork.UnitDelay_DSTATE = 0.0;
  Reha_Rap01_DWork.UnitDelay_DSTATE_b = 0.0;

  /* Start for S-Function (raptor_sfun_xcp): '<S3>/raptor_xcp_update' */

  /* S-Function Block - Start: <S3>/raptor_xcp_update */
  {
    CAN1_XCP_CAN_PreStart(CAN1__XCP_BC_ID_Data(), CAN1__XCP_RX_ID_Data(),
                          CAN1__XCP_TX_ID_Data());
  }

  Reha_Rap01_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = ZERO_ZCSIG;
  Reha_Rap01_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = POS_ZCSIG;
  Reha_Rap01_PrevZCSigState.StoreEEPROM_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  Reha_Rap01_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void Reha_Rap01_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
