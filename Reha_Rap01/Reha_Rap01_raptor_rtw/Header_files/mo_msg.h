/********************************************************************************
FILE:         mo_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _MO_MSG_H
#define _MO_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __MO_STICOMSG_EXT__
#define __MO_STICOMSG_EXT__
extern uint8 Mo_stICOMsg;
#endif /* __MO_STICOMSG_EXT__ */

#ifndef __MO_STIRVERRREACMSG_EXT__
#define __MO_STIRVERRREACMSG_EXT__
extern uint8 Mo_stIrvErrReacMsg;
#endif /* __MO_STIRVERRREACMSG_EXT__ */

#ifndef __MO_FLGICOMSG_EXT__
#define __MO_FLGICOMSG_EXT__
extern _bit                     Mo_flgICOMsg;
#endif /* __MO_FLGICOMSG_EXT__ */

/* -------------- macro defintion of messages --------------------*/


#ifndef SET_Mo_flgICOMsg 
#define SET_Mo_flgICOMsg (Mo_flgICOMsg=TRUE)
#endif
#ifndef CLR_Mo_flgICOMsg 
#define CLR_Mo_flgICOMsg (Mo_flgICOMsg=FALSE)
#endif
#ifndef GET_Mo_flgICOMsg 
#define GET_Mo_flgICOMsg (Mo_flgICOMsg)
#endif
#ifndef PUT_Mo_flgICOMsg 
#define PUT_Mo_flgICOMsg(val) ((val) ? SET_Mo_flgICOMsg : CLR_Mo_flgICOMsg)
#endif

#endif
