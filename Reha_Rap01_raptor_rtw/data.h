/*****************************************************************************
   data.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Thu Sep  8 15:37:03 2022
 *****************************************************************************/

#ifndef __DATA_H
#define __DATA_H
#include "core_env.h"
#include "sws_eep.h"
#include "gnu_pragma_conf.h"
#include "memlay_pub.h"
#include "machine.h"
#define uint64                         unsigned long
#include "sbreset.h"
#undef uint64
#include "reset_auto_conf.h"
#include "reset_pub.h"
#include "codegen_hwe_cpu.h"
#include "e_rtatr.h"
#include "cpu_pub.h"
#include "rtwtypes.h"
#include "raptor_types.h"

/*  SS_DOUBLE  =  0,    / real32_T    /
   SS_SINGLE  =  1,    / real32_T    /
   SS_INT8    =  2,    / int8_T      /
   SS_UINT8   =  3,    / uint8_T     /
   SS_INT16   =  4,    / int16_T     /
   SS_UINT16  =  5,    / uint16_T    /
   SS_INT32   =  6,    / int32_T     /
   SS_UINT32  =  7,    / uint32_T    /
   SS_BOOLEAN =  8     / boolean_T  */
/***** RAM Variables *************************************************/
#define RAMVARIABLES

typedef struct {
  uint8_T INIT_RAM_Variables;
  boolean_T FgndTasksStopped;          /* Type : boolean_T, Storage : RAM,  */
  boolean_T KeySw_Bgnd;                /* Type : boolean_T, Storage : RAM,  */
  boolean_T KeepModuleOn;              /* Type : boolean_T, Storage : RAM,  */
  real32_T Counter;                    /* Type : real32_T, Storage : RAM,  */
  uint32_T EcuAddr_RAM;                /* Type : uint32_T, Storage : RAM,  */
  uint8_T CAN1_CANTX_QueueOverrun;     /* Type : uint8_T, Storage : RAM,  */
  uint8_T CAN1_CANTX_QueueCount;       /* Type : uint8_T, Storage : RAM,  */
  uint8_T CAN1_CANTX_QueueMax;         /* Type : uint8_T, Storage : RAM,  */
  uint8_T CAN1_CANRX_QueueOverrun;     /* Type : uint8_T, Storage : RAM,  */
  uint8_T CAN1_CANRX_QueueCount;       /* Type : uint8_T, Storage : RAM,  */
  uint8_T CAN1_CANRX_QueueMax;         /* Type : uint8_T, Storage : RAM,  */
  uint8_T EEPROM_State;                /* Type : uint8_T, Storage : RAM,  */
} RAMVariables_T;

#define START_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

extern RAMVariables_T RAMVariables ;

#define STOP_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

extern void initRAMVariables(RAMVariables_T*);

/***** CONST Variables *************************************************/
#define CONSTVARIABLES

typedef struct {
  uint8_T const ModelName[10];         /* Type : uint8_T, Storage : CONST,  */
  uint32_T const BuildNumber;          /* Type : uint32_T, Storage : CONST,  */
  uint8_T const MatlabVersion[13];     /* Type : uint8_T, Storage : CONST,  */
  uint8_T const RaptorVersion[20];     /* Type : uint8_T, Storage : CONST,  */
  uint8_T const SwIdTxt[14];           /* Type : uint8_T, Storage : CONST,  */
  uint8_T const CalIdTxt[18];          /* Type : uint8_T, Storage : CONST,  */
  uint8_T const BuildUID[21];          /* Type : uint8_T, Storage : CONST,  */
  uint16_T const IdTableRev;           /* Type : uint16_T, Storage : CONST,  */
  uint32_T const HardwareType;         /* Type : uint32_T, Storage : CONST,  */
  uint8_T const DateStamp[20];         /* Type : uint8_T, Storage : CONST,  */
} CONSTVariables_T;

#define START_SECTION_Const_oem_32bit
#include "swsh_rb2oem.h"

extern const CONSTVariables_T CONSTVariables;

#define STOP_SECTION_Const_oem_32bit
#include "swsh_rb2oem.h"

extern void initCONSTVariables(const CONSTVariables_T*);
typedef enum {
  EE_INIT = 0,
  EE_LOADED_DEFAULTS = 1,
  EE_LOADED_DEFAULTS_AFTER_PROGRAMMING = 2,
  EE_LOADED_DEFAULTS_INCORRECT_CRC = 3,
  EE_LOADED_DEFAULTS_INCORRECT_EEID = 4,
  EE_LOADED_DEFAULTS_ERROR_READING = 5,
  EE_LOADED_DEFAULTS_FAILED_DRV_INIT = 6,
  EE_LOADED_SAVED_VALUES_AFTER_PROGRAMMING = 7,
  EE_LOADED_SAVED_VALUES = 8,
  EE_LOADED_BACKUP_VALUES = 9,
  EE_STORE_IN_PROGESS = 10,
  EE_STORE_FAILED = 11,
  EE_STORE_SUCCESS = 12,
} EE_STATES;

/***** EE Variables *************************************************/
#define EEVARIABLES

typedef struct {
  uint32_T WriteCnt;                  /* Write Count: Identifies active Copy 	*/
  uint32_T EE_UniqID;
  real32_T KeySwHiTimeThr;             /* Type : real32_T, Storage : CAL */
  real32_T KeySwLoTimeThr;             /* Type : real32_T, Storage : CAL */
  uint32_T CAN1__XCP_BC_ID;            /* Type : uint32_T, Storage : CAL */
  uint32_T CAN1__XCP_RX_ID;            /* Type : uint32_T, Storage : CAL */
  uint32_T CAN1__XCP_TX_ID;            /* Type : uint32_T, Storage : CAL */
  uint16_T CAN1__XCP_Security;         /* Type : uint16_T, Storage : CAL */
  uint16_T CAN1_Startup_Delay;         /* Type : uint16_T, Storage : CAL */
  uint8_T CAN1_ErrorCheck_Interval;    /* Type : uint8_T, Storage : CAL */
  uint8_T CAN1_ErrorPassive_Delay;     /* Type : uint8_T, Storage : CAL */
  uint8_T InjCDrv_EndOfStart;          /* Type : uint8_T, Storage : CAL */
  uint8_T EndOfStart;                  /* Type : uint8_T, Storage : CAL */
  uint16_T CRC;
         /* CRC - Last two bytes per SDK spec for CRC Calc (Parker Specific) 	*/
} EEVariables_T;

extern const EEVariables_T EEVariables_DEFAULT;

#define START_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

extern EEVariables_T EEVariables_RAMShadow;

#define STOP_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

extern void App_EE_WriteAsync(uint8_T);
extern uint16_T Reset_xHistBuf[8] __attribute__ ((asection(".bss.earlycleared",
  "f=aw")));
extern struct Reset_Environment Reset_Env;
extern void App_EE_Store(void);
extern void App_EE_Defaults(void);

/***** #DEFINES Accessors *************************************************/
#define FgndTasksStopped_Data()        (RAMVariables.FgndTasksStopped)
#define FgndTasksStopped_Ptr()         (&(RAMVariables.FgndTasksStopped))
#define FgndTasksStopped_ELEMENTS()    (1 * 1)
#define KeySwHiTimeThr_Data()          (EEVariables_RAMShadow.KeySwHiTimeThr)
#define KeySwHiTimeThr_Ptr()           (&(EEVariables_RAMShadow.KeySwHiTimeThr))
#define KeySwHiTimeThr_ELEMENTS()      (1 * 1)
#define KeySwLoTimeThr_Data()          (EEVariables_RAMShadow.KeySwLoTimeThr)
#define KeySwLoTimeThr_Ptr()           (&(EEVariables_RAMShadow.KeySwLoTimeThr))
#define KeySwLoTimeThr_ELEMENTS()      (1 * 1)
#define KeySw_Bgnd_Data()              (RAMVariables.KeySw_Bgnd)
#define KeySw_Bgnd_Ptr()               (&(RAMVariables.KeySw_Bgnd))
#define KeySw_Bgnd_ELEMENTS()          (1 * 1)
#define KeepModuleOn_Data()            (RAMVariables.KeepModuleOn)
#define KeepModuleOn_Ptr()             (&(RAMVariables.KeepModuleOn))
#define KeepModuleOn_ELEMENTS()        (1 * 1)
#define Counter_Data()                 (RAMVariables.Counter)
#define Counter_Ptr()                  (&(RAMVariables.Counter))
#define Counter_ELEMENTS()             (1 * 1)
#define CAN1__XCP_BC_ID_Data()         (EEVariables_RAMShadow.CAN1__XCP_BC_ID)
#define CAN1__XCP_BC_ID_Ptr()          (&(EEVariables_RAMShadow.CAN1__XCP_BC_ID))
#define CAN1__XCP_BC_ID_ELEMENTS()     (1 * 1)
#define CAN1__XCP_RX_ID_Data()         (EEVariables_RAMShadow.CAN1__XCP_RX_ID)
#define CAN1__XCP_RX_ID_Ptr()          (&(EEVariables_RAMShadow.CAN1__XCP_RX_ID))
#define CAN1__XCP_RX_ID_ELEMENTS()     (1 * 1)
#define CAN1__XCP_TX_ID_Data()         (EEVariables_RAMShadow.CAN1__XCP_TX_ID)
#define CAN1__XCP_TX_ID_Ptr()          (&(EEVariables_RAMShadow.CAN1__XCP_TX_ID))
#define CAN1__XCP_TX_ID_ELEMENTS()     (1 * 1)
#define ModelName_Data()               (CONSTVariables.ModelName)
#define ModelName_Ptr()                (&(CONSTVariables.ModelName))
#define ModelName_ELEMENTS()           (1 * 10)
#define BuildNumber_Data()             (CONSTVariables.BuildNumber)
#define BuildNumber_Ptr()              (&(CONSTVariables.BuildNumber))
#define BuildNumber_ELEMENTS()         (1 * 1)
#define MatlabVersion_Data()           (CONSTVariables.MatlabVersion)
#define MatlabVersion_Ptr()            (&(CONSTVariables.MatlabVersion))
#define MatlabVersion_ELEMENTS()       (1 * 13)
#define RaptorVersion_Data()           (CONSTVariables.RaptorVersion)
#define RaptorVersion_Ptr()            (&(CONSTVariables.RaptorVersion))
#define RaptorVersion_ELEMENTS()       (1 * 20)
#define SwIdTxt_Data()                 (CONSTVariables.SwIdTxt)
#define SwIdTxt_Ptr()                  (&(CONSTVariables.SwIdTxt))
#define SwIdTxt_ELEMENTS()             (1 * 14)
#define CalIdTxt_Data()                (CONSTVariables.CalIdTxt)
#define CalIdTxt_Ptr()                 (&(CONSTVariables.CalIdTxt))
#define CalIdTxt_ELEMENTS()            (1 * 18)
#define BuildUID_Data()                (CONSTVariables.BuildUID)
#define BuildUID_Ptr()                 (&(CONSTVariables.BuildUID))
#define BuildUID_ELEMENTS()            (1 * 21)
#define IdTableRev_Data()              (CONSTVariables.IdTableRev)
#define IdTableRev_Ptr()               (&(CONSTVariables.IdTableRev))
#define IdTableRev_ELEMENTS()          (1 * 1)
#define HardwareType_Data()            (CONSTVariables.HardwareType)
#define HardwareType_Ptr()             (&(CONSTVariables.HardwareType))
#define HardwareType_ELEMENTS()        (1 * 1)
#define EcuAddr_RAM_Data()             (RAMVariables.EcuAddr_RAM)
#define EcuAddr_RAM_Ptr()              (&(RAMVariables.EcuAddr_RAM))
#define EcuAddr_RAM_ELEMENTS()         (1 * 1)
#define DateStamp_Data()               (CONSTVariables.DateStamp)
#define DateStamp_Ptr()                (&(CONSTVariables.DateStamp))
#define DateStamp_ELEMENTS()           (1 * 20)
#define CAN1__XCP_Security_Data()      (EEVariables_RAMShadow.CAN1__XCP_Security)
#define CAN1__XCP_Security_Ptr()       (&(EEVariables_RAMShadow.CAN1__XCP_Security))
#define CAN1__XCP_Security_ELEMENTS()  (1 * 1)
#define CAN1_CANTX_QueueOverrun_Data() (RAMVariables.CAN1_CANTX_QueueOverrun)
#define CAN1_CANTX_QueueOverrun_Ptr()  (&(RAMVariables.CAN1_CANTX_QueueOverrun))
#define CAN1_CANTX_QueueOverrun_ELEMENTS() (1 * 1)
#define CAN1_CANTX_QueueCount_Data()   (RAMVariables.CAN1_CANTX_QueueCount)
#define CAN1_CANTX_QueueCount_Ptr()    (&(RAMVariables.CAN1_CANTX_QueueCount))
#define CAN1_CANTX_QueueCount_ELEMENTS() (1 * 1)
#define CAN1_CANTX_QueueMax_Data()     (RAMVariables.CAN1_CANTX_QueueMax)
#define CAN1_CANTX_QueueMax_Ptr()      (&(RAMVariables.CAN1_CANTX_QueueMax))
#define CAN1_CANTX_QueueMax_ELEMENTS() (1 * 1)
#define CAN1_CANRX_QueueOverrun_Data() (RAMVariables.CAN1_CANRX_QueueOverrun)
#define CAN1_CANRX_QueueOverrun_Ptr()  (&(RAMVariables.CAN1_CANRX_QueueOverrun))
#define CAN1_CANRX_QueueOverrun_ELEMENTS() (1 * 1)
#define CAN1_CANRX_QueueCount_Data()   (RAMVariables.CAN1_CANRX_QueueCount)
#define CAN1_CANRX_QueueCount_Ptr()    (&(RAMVariables.CAN1_CANRX_QueueCount))
#define CAN1_CANRX_QueueCount_ELEMENTS() (1 * 1)
#define CAN1_CANRX_QueueMax_Data()     (RAMVariables.CAN1_CANRX_QueueMax)
#define CAN1_CANRX_QueueMax_Ptr()      (&(RAMVariables.CAN1_CANRX_QueueMax))
#define CAN1_CANRX_QueueMax_ELEMENTS() (1 * 1)
#define CAN1_Startup_Delay_Data()      (EEVariables_RAMShadow.CAN1_Startup_Delay)
#define CAN1_Startup_Delay_Ptr()       (&(EEVariables_RAMShadow.CAN1_Startup_Delay))
#define CAN1_Startup_Delay_ELEMENTS()  (1 * 1)
#define CAN1_ErrorCheck_Interval_Data() (EEVariables_RAMShadow.CAN1_ErrorCheck_Interval)
#define CAN1_ErrorCheck_Interval_Ptr() (&(EEVariables_RAMShadow.CAN1_ErrorCheck_Interval))
#define CAN1_ErrorCheck_Interval_ELEMENTS() (1 * 1)
#define CAN1_ErrorPassive_Delay_Data() (EEVariables_RAMShadow.CAN1_ErrorPassive_Delay)
#define CAN1_ErrorPassive_Delay_Ptr()  (&(EEVariables_RAMShadow.CAN1_ErrorPassive_Delay))
#define CAN1_ErrorPassive_Delay_ELEMENTS() (1 * 1)
#define InjCDrv_EndOfStart_Data()      (EEVariables_RAMShadow.InjCDrv_EndOfStart)
#define InjCDrv_EndOfStart_Ptr()       (&(EEVariables_RAMShadow.InjCDrv_EndOfStart))
#define InjCDrv_EndOfStart_ELEMENTS()  (1 * 1)
#define EndOfStart_Data()              (EEVariables_RAMShadow.EndOfStart)
#define EndOfStart_Ptr()               (&(EEVariables_RAMShadow.EndOfStart))
#define EndOfStart_ELEMENTS()          (1 * 1)
#define EEPROM_State_Data()            (RAMVariables.EEPROM_State)
#define EEPROM_State_Ptr()             (&(RAMVariables.EEPROM_State))
#define EEPROM_State_ELEMENTS()        (1 * 1)
#define NonVolatileCRC_Data()          (EEVariables_RAMShadow.CRC)
#define NonVolatileCRC_Ptr()           (&(EEVariables_RAMShadow.CRC))

/***** CAL Locator ********************************************************/
#define CALLOC_START                   ((void*)KeySwHiTimeThr_Ptr())
#define CALLOC_LENGTH                  ( sizeof(KeySwHiTimeThr_Data()) + sizeof(KeySwLoTimeThr_Data()) + sizeof(CAN1__XCP_BC_ID_Data()) + sizeof(CAN1__XCP_RX_ID_Data()) + sizeof(CAN1__XCP_TX_ID_Data()) + sizeof(CAN1__XCP_Security_Data()) + sizeof(CAN1_Startup_Delay_Data()) + sizeof(CAN1_ErrorCheck_Interval_Data()) + sizeof(CAN1_ErrorPassive_Delay_Data()) + sizeof(InjCDrv_EndOfStart_Data()) + sizeof(EndOfStart_Data()) + 0)
#endif
