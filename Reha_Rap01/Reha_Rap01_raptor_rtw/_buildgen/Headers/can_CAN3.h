/*****************************************************************************
   can_CAN3.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Sat Sep 10 17:18:14 2022
 *****************************************************************************/

#ifndef __CAN_CAN3_H
#define __CAN_CAN3_H

/*  CAN Bus : CAN3 	*/
/*  Resource: CAN3 	*/
/*  Bus Enum: CAN_BUS_C */
/* Baud Rate: 250k 	*/

/* FUNCTION PROTOTYPES */
/* CAN initialization */
extern void pre_start_CAN_CAN3(void);
extern void post_start_CAN_CAN3(void);
extern void can_process_CAN3(void);
extern void can_errorCheck_CAN3(void);
extern void CAN3_TX_Queue_Get_Status(uint8_T* queueSize, uint8_T* depth, uint8_T*
  maxDepth, uint32_T* overruns );
extern void CAN3_RX_Queue_Get_Status(uint8_T* queueSize, uint8_T* depth, uint8_T*
  maxDepth, uint32_T* overruns );

/* Receive CAN object declarations */
extern void can_update_CAN3(uint32_T id, uint8_T extended, uint8_T length, const
  uint8_T *data);

/* Transmit CAN object declarations */
#endif
