MAKECMD         = "%MATLAB%\bin\win32\gmake"
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = raptor.tlc
SHELL           = cmd

MODEL_NAME		= Reha_Rap01
MODULES			= Reha_Rap01_data.c Timer_BGND_G6Wyo.c Timer_ooqlV.c XCP_App.c can_CAN1.c can_general.c data.c hw_user.c raptorCRC.c raptor_delta_time.c time.c xcp_protocol.c XCP_App.c.c
NUMST           = 
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS =
NCSTATES =

$(MODEL_NAME).mot: 
	@echo ### Created Makefile ...

DO_NOT_USE_CHECKSUMS = 1

# EOF: raptor.tmf