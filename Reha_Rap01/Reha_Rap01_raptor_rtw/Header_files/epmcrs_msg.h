/********************************************************************************
FILE:         epmcrs_msg.h
DESCRIPTION:  Component wise header file for Copy process.
              DAMOS V5.8.3 WinServer 2008 R2
              Format N_MsgH
              Message Concept Version V2.3.1
              Do not edit this file

COPYRIGHT:    All rights reserved by ROBERT BOSCH GMBH, STUTTGART


*********************************************************************************/
#ifndef _EPMCRS_MSG_H
#define _EPMCRS_MSG_H
/* --------------extern Declaration of Original Messages--------------------*/


#ifndef __EPMCRS_CTREVSTRTEXTD_EXT__
#define __EPMCRS_CTREVSTRTEXTD_EXT__
extern sint32 EpmCrS_ctRevStrtExtd;
#endif /* __EPMCRS_CTREVSTRTEXTD_EXT__ */

#ifndef __EPMCRS_TIINCPER_EXT__
#define __EPMCRS_TIINCPER_EXT__
extern sint32 EpmCrS_tiIncPer;
#endif /* __EPMCRS_TIINCPER_EXT__ */

#ifndef __EPMCRS_TISEG_EXT__
#define __EPMCRS_TISEG_EXT__
extern sint32 EpmCrS_tiSeg;
#endif /* __EPMCRS_TISEG_EXT__ */

#ifndef __EPMCRS_TISEGCURR_EXT__
#define __EPMCRS_TISEGCURR_EXT__
extern sint32 EpmCrS_tiSegCurr;
#endif /* __EPMCRS_TISEGCURR_EXT__ */

#ifndef __EPMCAS_NENG_EXT__
#define __EPMCAS_NENG_EXT__
extern sint16 EpmCaS_nEng;
#endif /* __EPMCAS_NENG_EXT__ */

#ifndef __EPMCRS_CTREVINI_EXT__
#define __EPMCRS_CTREVINI_EXT__
extern sint16 EpmCrS_ctRevIni;
#endif /* __EPMCRS_CTREVINI_EXT__ */

#ifndef __EPMCRS_CTREVSTRT_EXT__
#define __EPMCRS_CTREVSTRT_EXT__
extern sint16 EpmCrS_ctRevStrt;
#endif /* __EPMCRS_CTREVSTRT_EXT__ */

#ifndef __EPMCRS_PHIAGCLK_EXT__
#define __EPMCRS_PHIAGCLK_EXT__
extern sint16 EpmCrS_phiAgClk;
#endif /* __EPMCRS_PHIAGCLK_EXT__ */

#ifndef __EPMCRS_PHIINC_EXT__
#define __EPMCRS_PHIINC_EXT__
extern sint16 EpmCrS_phiInc;
#endif /* __EPMCRS_PHIINC_EXT__ */

#ifndef __EPMCRS_PHIINTSEG_EXT__
#define __EPMCRS_PHIINTSEG_EXT__
extern sint16 EpmCrS_phiIntSeg;
#endif /* __EPMCRS_PHIINTSEG_EXT__ */

#ifndef __EPMCRS_PHISEG_EXT__
#define __EPMCRS_PHISEG_EXT__
extern sint16 EpmCrS_phiSeg;
#endif /* __EPMCRS_PHISEG_EXT__ */

#ifndef __EPMSEQ_NUMINCDIFFINT_EXT__
#define __EPMSEQ_NUMINCDIFFINT_EXT__
extern sint16 EpmSeq_numIncDiffInt[];
#endif /* __EPMSEQ_NUMINCDIFFINT_EXT__ */

#ifndef __EPMSYN_PHIINT_EXT__
#define __EPMSYN_PHIINT_EXT__
extern sint16 EpmSyn_phiInt;
#endif /* __EPMSYN_PHIINT_EXT__ */

#ifndef __EPM_DNENGFLT_EXT__
#define __EPM_DNENGFLT_EXT__
extern sint16 Epm_dnEngFlt;
#endif /* __EPM_DNENGFLT_EXT__ */

#ifndef __EPM_NENG_EXT__
#define __EPM_NENG_EXT__
extern sint16 Epm_nEng;
#endif /* __EPM_NENG_EXT__ */

#ifndef __EPM_PHIDIFFRRS_EXT__
#define __EPM_PHIDIFFRRS_EXT__
extern sint16 Epm_phiDiffRRS;
#endif /* __EPM_PHIDIFFRRS_EXT__ */

#ifndef __EPMCRS_NUMINCPERSEG_EXT__
#define __EPMCRS_NUMINCPERSEG_EXT__
extern uint16 EpmCrS_numIncPerSeg;
#endif /* __EPMCRS_NUMINCPERSEG_EXT__ */

#ifndef __EPMCRS_TIINC_EXT__
#define __EPMCRS_TIINC_EXT__
extern uint16 EpmCrS_tiInc[];
#endif /* __EPMCRS_TIINC_EXT__ */

#ifndef __COENG_ST_EXT__
#define __COENG_ST_EXT__
extern uint8                    CoEng_st;
#endif /* __COENG_ST_EXT__ */

#ifndef __EPMCAS_STNENG_EXT__
#define __EPMCAS_STNENG_EXT__
extern uint8                    EpmCaS_stNEng;
#endif /* __EPMCAS_STNENG_EXT__ */

#ifndef __EPMCRS_CTINC_EXT__
#define __EPMCRS_CTINC_EXT__
extern uint8                    EpmCrS_ctInc;
#endif /* __EPMCRS_CTINC_EXT__ */

#ifndef __EPMCRS_NUMNEWINCOUTP_EXT__
#define __EPMCRS_NUMNEWINCOUTP_EXT__
extern uint8                    EpmCrS_numNewIncOutp;
#endif /* __EPMCRS_NUMNEWINCOUTP_EXT__ */

#ifndef __EPMCRS_NUMSEG_EXT__
#define __EPMCRS_NUMSEG_EXT__
extern uint8                    EpmCrS_numSeg;
#endif /* __EPMCRS_NUMSEG_EXT__ */

#ifndef __EPMCRS_STDIAG_EXT__
#define __EPMCRS_STDIAG_EXT__
extern uint8                    EpmCrS_stDiag;
#endif /* __EPMCRS_STDIAG_EXT__ */

#ifndef __EPMCRS_STSIGMODE_EXT__
#define __EPMCRS_STSIGMODE_EXT__
extern uint8                    EpmCrS_stSigMode;
#endif /* __EPMCRS_STSIGMODE_EXT__ */

#ifndef __EPMSEQ_NUMINT_EXT__
#define __EPMSEQ_NUMINT_EXT__
extern uint8                    EpmSeq_numInt;
#endif /* __EPMSEQ_NUMINT_EXT__ */

#ifndef __EPMSEQ_NUMINTTYP_EXT__
#define __EPMSEQ_NUMINTTYP_EXT__
extern uint8                    EpmSeq_numIntTyp;
#endif /* __EPMSEQ_NUMINTTYP_EXT__ */

#ifndef __EPMSYN_STRR_EXT__
#define __EPMSYN_STRR_EXT__
extern uint8 EpmSyn_stRR[];
#endif /* __EPMSYN_STRR_EXT__ */

#ifndef __EPM_CTCYL_EXT__
#define __EPM_CTCYL_EXT__
extern uint8                    Epm_ctCyl;
#endif /* __EPM_CTCYL_EXT__ */

#ifndef __EPM_STCMBTESTREQ_EXT__
#define __EPM_STCMBTESTREQ_EXT__
extern uint8                    Epm_stCmbTestReq;
#endif /* __EPM_STCMBTESTREQ_EXT__ */

#ifndef __EPM_STOPMODE_EXT__
#define __EPM_STOPMODE_EXT__
extern uint8                    Epm_stOpMode;
#endif /* __EPM_STOPMODE_EXT__ */

#ifndef __EPM_STSYNC_EXT__
#define __EPM_STSYNC_EXT__
extern uint8                    Epm_stSync;
#endif /* __EPM_STSYNC_EXT__ */

#ifndef __EPM_STTOOTHCKCOR_EXT__
#define __EPM_STTOOTHCKCOR_EXT__
extern uint8                    Epm_stToothCkCor;
#endif /* __EPM_STTOOTHCKCOR_EXT__ */

#ifndef __T15_ST_EXT__
#define __T15_ST_EXT__
extern bool                     T15_st;
#endif /* __T15_ST_EXT__ */

/* -------------- macro defintion of messages --------------------*/


#ifndef SET_CoEng_st 
#define SET_CoEng_st (CoEng_st=TRUE)
#endif
#ifndef CLR_CoEng_st 
#define CLR_CoEng_st (CoEng_st=FALSE)
#endif
#ifndef GET_CoEng_st 
#define GET_CoEng_st (CoEng_st)
#endif
#ifndef PUT_CoEng_st 
#define PUT_CoEng_st(val) ((val) ? SET_CoEng_st : CLR_CoEng_st)
#endif


#ifndef SET_EpmCaS_stNEng 
#define SET_EpmCaS_stNEng (EpmCaS_stNEng=TRUE)
#endif
#ifndef CLR_EpmCaS_stNEng 
#define CLR_EpmCaS_stNEng (EpmCaS_stNEng=FALSE)
#endif
#ifndef GET_EpmCaS_stNEng 
#define GET_EpmCaS_stNEng (EpmCaS_stNEng)
#endif
#ifndef PUT_EpmCaS_stNEng 
#define PUT_EpmCaS_stNEng(val) ((val) ? SET_EpmCaS_stNEng : CLR_EpmCaS_stNEng)
#endif


#ifndef SET_EpmCrS_ctInc 
#define SET_EpmCrS_ctInc (EpmCrS_ctInc=TRUE)
#endif
#ifndef CLR_EpmCrS_ctInc 
#define CLR_EpmCrS_ctInc (EpmCrS_ctInc=FALSE)
#endif
#ifndef GET_EpmCrS_ctInc 
#define GET_EpmCrS_ctInc (EpmCrS_ctInc)
#endif
#ifndef PUT_EpmCrS_ctInc 
#define PUT_EpmCrS_ctInc(val) ((val) ? SET_EpmCrS_ctInc : CLR_EpmCrS_ctInc)
#endif


#ifndef SET_EpmCrS_numNewIncOutp 
#define SET_EpmCrS_numNewIncOutp (EpmCrS_numNewIncOutp=TRUE)
#endif
#ifndef CLR_EpmCrS_numNewIncOutp 
#define CLR_EpmCrS_numNewIncOutp (EpmCrS_numNewIncOutp=FALSE)
#endif
#ifndef GET_EpmCrS_numNewIncOutp 
#define GET_EpmCrS_numNewIncOutp (EpmCrS_numNewIncOutp)
#endif
#ifndef PUT_EpmCrS_numNewIncOutp 
#define PUT_EpmCrS_numNewIncOutp(val) ((val) ? SET_EpmCrS_numNewIncOutp : CLR_EpmCrS_numNewIncOutp)
#endif


#ifndef SET_EpmCrS_numSeg 
#define SET_EpmCrS_numSeg (EpmCrS_numSeg=TRUE)
#endif
#ifndef CLR_EpmCrS_numSeg 
#define CLR_EpmCrS_numSeg (EpmCrS_numSeg=FALSE)
#endif
#ifndef GET_EpmCrS_numSeg 
#define GET_EpmCrS_numSeg (EpmCrS_numSeg)
#endif
#ifndef PUT_EpmCrS_numSeg 
#define PUT_EpmCrS_numSeg(val) ((val) ? SET_EpmCrS_numSeg : CLR_EpmCrS_numSeg)
#endif


#ifndef SET_EpmCrS_stDiag 
#define SET_EpmCrS_stDiag (EpmCrS_stDiag=TRUE)
#endif
#ifndef CLR_EpmCrS_stDiag 
#define CLR_EpmCrS_stDiag (EpmCrS_stDiag=FALSE)
#endif
#ifndef GET_EpmCrS_stDiag 
#define GET_EpmCrS_stDiag (EpmCrS_stDiag)
#endif
#ifndef PUT_EpmCrS_stDiag 
#define PUT_EpmCrS_stDiag(val) ((val) ? SET_EpmCrS_stDiag : CLR_EpmCrS_stDiag)
#endif


#ifndef SET_EpmCrS_stSigMode 
#define SET_EpmCrS_stSigMode (EpmCrS_stSigMode=TRUE)
#endif
#ifndef CLR_EpmCrS_stSigMode 
#define CLR_EpmCrS_stSigMode (EpmCrS_stSigMode=FALSE)
#endif
#ifndef GET_EpmCrS_stSigMode 
#define GET_EpmCrS_stSigMode (EpmCrS_stSigMode)
#endif
#ifndef PUT_EpmCrS_stSigMode 
#define PUT_EpmCrS_stSigMode(val) ((val) ? SET_EpmCrS_stSigMode : CLR_EpmCrS_stSigMode)
#endif


#ifndef SET_EpmSeq_numInt 
#define SET_EpmSeq_numInt (EpmSeq_numInt=TRUE)
#endif
#ifndef CLR_EpmSeq_numInt 
#define CLR_EpmSeq_numInt (EpmSeq_numInt=FALSE)
#endif
#ifndef GET_EpmSeq_numInt 
#define GET_EpmSeq_numInt (EpmSeq_numInt)
#endif
#ifndef PUT_EpmSeq_numInt 
#define PUT_EpmSeq_numInt(val) ((val) ? SET_EpmSeq_numInt : CLR_EpmSeq_numInt)
#endif


#ifndef SET_EpmSeq_numIntTyp 
#define SET_EpmSeq_numIntTyp (EpmSeq_numIntTyp=TRUE)
#endif
#ifndef CLR_EpmSeq_numIntTyp 
#define CLR_EpmSeq_numIntTyp (EpmSeq_numIntTyp=FALSE)
#endif
#ifndef GET_EpmSeq_numIntTyp 
#define GET_EpmSeq_numIntTyp (EpmSeq_numIntTyp)
#endif
#ifndef PUT_EpmSeq_numIntTyp 
#define PUT_EpmSeq_numIntTyp(val) ((val) ? SET_EpmSeq_numIntTyp : CLR_EpmSeq_numIntTyp)
#endif


#ifndef SET_Epm_ctCyl 
#define SET_Epm_ctCyl (Epm_ctCyl=TRUE)
#endif
#ifndef CLR_Epm_ctCyl 
#define CLR_Epm_ctCyl (Epm_ctCyl=FALSE)
#endif
#ifndef GET_Epm_ctCyl 
#define GET_Epm_ctCyl (Epm_ctCyl)
#endif
#ifndef PUT_Epm_ctCyl 
#define PUT_Epm_ctCyl(val) ((val) ? SET_Epm_ctCyl : CLR_Epm_ctCyl)
#endif


#ifndef SET_Epm_stCmbTestReq 
#define SET_Epm_stCmbTestReq (Epm_stCmbTestReq=TRUE)
#endif
#ifndef CLR_Epm_stCmbTestReq 
#define CLR_Epm_stCmbTestReq (Epm_stCmbTestReq=FALSE)
#endif
#ifndef GET_Epm_stCmbTestReq 
#define GET_Epm_stCmbTestReq (Epm_stCmbTestReq)
#endif
#ifndef PUT_Epm_stCmbTestReq 
#define PUT_Epm_stCmbTestReq(val) ((val) ? SET_Epm_stCmbTestReq : CLR_Epm_stCmbTestReq)
#endif


#ifndef SET_Epm_stOpMode 
#define SET_Epm_stOpMode (Epm_stOpMode=TRUE)
#endif
#ifndef CLR_Epm_stOpMode 
#define CLR_Epm_stOpMode (Epm_stOpMode=FALSE)
#endif
#ifndef GET_Epm_stOpMode 
#define GET_Epm_stOpMode (Epm_stOpMode)
#endif
#ifndef PUT_Epm_stOpMode 
#define PUT_Epm_stOpMode(val) ((val) ? SET_Epm_stOpMode : CLR_Epm_stOpMode)
#endif


#ifndef SET_Epm_stSync 
#define SET_Epm_stSync (Epm_stSync=TRUE)
#endif
#ifndef CLR_Epm_stSync 
#define CLR_Epm_stSync (Epm_stSync=FALSE)
#endif
#ifndef GET_Epm_stSync 
#define GET_Epm_stSync (Epm_stSync)
#endif
#ifndef PUT_Epm_stSync 
#define PUT_Epm_stSync(val) ((val) ? SET_Epm_stSync : CLR_Epm_stSync)
#endif


#ifndef SET_Epm_stToothCkCor 
#define SET_Epm_stToothCkCor (Epm_stToothCkCor=TRUE)
#endif
#ifndef CLR_Epm_stToothCkCor 
#define CLR_Epm_stToothCkCor (Epm_stToothCkCor=FALSE)
#endif
#ifndef GET_Epm_stToothCkCor 
#define GET_Epm_stToothCkCor (Epm_stToothCkCor)
#endif
#ifndef PUT_Epm_stToothCkCor 
#define PUT_Epm_stToothCkCor(val) ((val) ? SET_Epm_stToothCkCor : CLR_Epm_stToothCkCor)
#endif


#ifndef SET_T15_st 
#define SET_T15_st (T15_st=TRUE)
#endif
#ifndef CLR_T15_st 
#define CLR_T15_st (T15_st=FALSE)
#endif
#ifndef GET_T15_st 
#define GET_T15_st (T15_st)
#endif
#ifndef PUT_T15_st 
#define PUT_T15_st(val) ((val) ? SET_T15_st : CLR_T15_st)
#endif

#endif
