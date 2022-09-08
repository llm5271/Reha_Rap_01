/*****************************************************************************
   can_CAN1.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Thu Sep  8 15:37:03 2022
 *****************************************************************************/

#ifndef __CAN_CAN1_H
#define __CAN_CAN1_H

/*  CAN Bus : CAN1 	*/
/*  Resource: CAN1 	*/
/*  Bus Enum: CAN_BUS_A */
/* Baud Rate: 250k 	*/

/* FUNCTION PROTOTYPES */
/* CAN initialization */
extern void pre_start_CAN_CAN1(void);
extern void post_start_CAN_CAN1(void);
extern void can_process_CAN1(void);
extern void can_errorCheck_CAN1(void);
extern void CAN1_TX_Queue_Get_Status(uint8_T* queueSize, uint8_T* depth, uint8_T*
  maxDepth, uint32_T* overruns );
extern void CAN1_RX_Queue_Get_Status(uint8_T* queueSize, uint8_T* depth, uint8_T*
  maxDepth, uint32_T* overruns );

/* Receive CAN object declarations */
extern void can_init_rxIdRxTrig_XCP_BC_CAN1(uint32_T id, uint8_T extended);
extern uint32_T RxTrig_XCP_BC_CAN1_msgID;
extern uint8_T RxTrig_XCP_BC_CAN1_msgExtended;
extern uint8_T can_get_RxTrig_XCP_BC_CAN1(uint16_T *age, uint32_T* id, uint8_T
  * extended, uint8_T *data, uint8_T length);
extern void can_init_rxIdRxTrig_XCP_CMD_CAN1(uint32_T id, uint8_T extended);
extern uint32_T RxTrig_XCP_CMD_CAN1_msgID;
extern uint8_T RxTrig_XCP_CMD_CAN1_msgExtended;
extern uint8_T can_get_RxTrig_XCP_CMD_CAN1(uint16_T *age, uint32_T* id, uint8_T*
  extended, uint8_T *data, uint8_T length);
extern void can_update_CAN1(uint32_T id, uint8_T extended, uint8_T length, const
  uint8_T *data);

/* Transmit CAN object declarations */
extern void can_send_Tx_XCP_CAN1(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);

#endif
