/*
 * File: Reha_Rap01_private.h
 *
 * Code generated for Simulink model 'Reha_Rap01'.
 *
 * Model version                  : 9.1
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Sep  8 15:20:17 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Reha_Rap01_private_h_
#define RTW_HEADER_Reha_Rap01_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "Reha_Rap01.h"

extern uint16_T crc16_spd(void* in, uint32_T length, uint16_T prevCRC);
boolean_T is_crc_valid(void * buffer, uint32_T buffer_size, uint16_T checkCrc);
extern char *__NE_CODE0_START __attribute__ ((asection (".asw0_prolog","f=aw")));

#define CODESTART0                     ((char*)&__NE_CODE0_START)

extern char *__NE_CODE0_END __attribute__ ((asection (".asw0_free","f=aw")));

#define CODEEND0                       ((char*)&__NE_CODE0_END)

extern char *__NE_CODE1_START __attribute__ ((asection (".asw0_epilog","f=aw")));

#define CODESTART1                     ((char*)&__NE_CODE1_START)

extern char *__NE_CODE1_END __attribute__ ((asection (".asw0_epilog","f=aw")));

#define CODEEND1                       ((char*)&__NE_CODE1_END)

extern uint32_T GetDeltaTime_us(uint32_T*);
extern uint32_T GetDeltaTime_ms(uint32_T*);
extern void Timer_ooqlV(void);
extern void Timer_BGND_G6Wyo(void);
extern void Timed_Trigger_XCP(void);
extern void RxTrig_XCP_BC_CAN1(void);
extern void RxTrig_XCP_CMD_CAN1(void);
extern void CAN1_XCP_CAN_PreStart(uint32_T, uint32_T, uint32_T);
extern void can_process_rx_queue_CAN1(void);
extern void Reha_Rap01_Background_Init(void);
extern void Reha_Rap01_Background_Reset(void);
extern void Reha_Rap01_Background(void);
extern void Reha_Rap01_Foreground(void);

#endif                                 /* RTW_HEADER_Reha_Rap01_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
