/*****************************************************************************
   raptor_delta_time.c
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Sat Sep 10 10:56:17 2022
 *****************************************************************************/

#include "Reha_Rap01.h"
#include "Reha_Rap01_private.h"
#include "rtwtypes.h"

uint32_T GetDeltaTime_us(uint32_T* last)
{
  uint32_T current_ticks = ticks_us();
  uint32_T delta = 0;
  if (*last > current_ticks) {
    delta = (0xFFFFFFFF - *last) + current_ticks + 1;
  } else {
    delta = current_ticks - *last;
  }

  *last = current_ticks;
  return delta;
}

uint32_T GetDeltaTime_ms(uint32_T* last)
{
  uint32_T current_ticks = ticks();
  uint32_T delta = 0;
  if (*last > current_ticks) {
    delta = (0xFFFFFFFF - *last) + current_ticks + 1;
  } else {
    delta = current_ticks - *last;
  }

  *last = current_ticks;
  return delta;
}
