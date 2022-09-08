/*****************************************************************************
   can_general.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Thu Sep  8 15:20:17 2022
 *****************************************************************************/

#ifndef CAN_GENERAL_H
#define CAN_GENERAL_H
#include "core_env.h"
#include "sws_can.h"
#ifndef UNUSED
#define UNUSED(x)                      (void)x
#endif                                 /* UNUSED */

#define CAN_BUS_A                      0x00
#define CAN_BUS_B                      0x01
#define CAN_BUS_C                      0x02

struct MESSAGEDATA
{
  uint32 message_id;
  uint32 parameter1;
  uint8* parameter2;
};

typedef struct MESSAGEDATA MessageData;
struct CAN_TRANSMIT_MESSAGE
{
  uint8* data;
  uint8 data_size;
  uint32 identifier;
  boolean extended;
};

typedef struct CAN_TRANSMIT_MESSAGE *CANTransmitMessagePtr;
extern volatile can_msg_id_init_t canMsgInfo[];
extern volatile can_msg_init_t can_init[];
extern volatile uint8 canMsgBuffInUse[];

#endif