/********************************************************************************
FILE:         med2bassvr_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _MED2BASSVR_MSG_H
#define _MED2BASSVR_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __BASSVR_BACTRTSTREQ_EXT__
#define __BASSVR_BACTRTSTREQ_EXT__
extern _bit                     BasSvr_bActrTstReq;
#endif /* __BASSVR_BACTRTSTREQ_EXT__ */

#ifndef __BASSVR_BFUNCTSTREQ_EXT__
#define __BASSVR_BFUNCTSTREQ_EXT__
extern _bit                     BasSvr_bFuncTstReq;
#endif /* __BASSVR_BFUNCTSTREQ_EXT__ */

/* -------------- macro defintion of messages --------------------*/


#ifndef SET_BasSvr_bActrTstReq 
#define SET_BasSvr_bActrTstReq (BasSvr_bActrTstReq=TRUE)
#endif
#ifndef CLR_BasSvr_bActrTstReq 
#define CLR_BasSvr_bActrTstReq (BasSvr_bActrTstReq=FALSE)
#endif
#ifndef GET_BasSvr_bActrTstReq 
#define GET_BasSvr_bActrTstReq (BasSvr_bActrTstReq)
#endif
#ifndef PUT_BasSvr_bActrTstReq 
#define PUT_BasSvr_bActrTstReq(val) ((val) ? SET_BasSvr_bActrTstReq : CLR_BasSvr_bActrTstReq)
#endif


#ifndef SET_BasSvr_bFuncTstReq 
#define SET_BasSvr_bFuncTstReq (BasSvr_bFuncTstReq=TRUE)
#endif
#ifndef CLR_BasSvr_bFuncTstReq 
#define CLR_BasSvr_bFuncTstReq (BasSvr_bFuncTstReq=FALSE)
#endif
#ifndef GET_BasSvr_bFuncTstReq 
#define GET_BasSvr_bFuncTstReq (BasSvr_bFuncTstReq)
#endif
#ifndef PUT_BasSvr_bFuncTstReq 
#define PUT_BasSvr_bFuncTstReq(val) ((val) ? SET_BasSvr_bFuncTstReq : CLR_BasSvr_bFuncTstReq)
#endif

#endif
