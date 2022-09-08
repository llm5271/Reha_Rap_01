@echo off
if exist *.a move /Y *.a .\Object_files > nul
if exist *.o move /Y *.o .\Object_files > nul
if exist *.hex del *.hex > nul
echo ### Beginning Build for Reha_Rap01_002 ...
SET BUILD_SCRIPTS_DIR=.\Build_Scripts
SET MAKE="C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\GCM-1793-196-1503\tools\make\bin\make.exe"
SET PERL="C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\GCM-1793-196-1503\tools\perl\perl\bin\perl.exe"
SET HEXMOD="C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\GCM-1793-196-1503\tools\hexmod17\3.9.6.3\bin\hexmod.exe"
if exist .\Hex_files\cb_int_250.hex copy .\Hex_files\cb_int_250.hex .\Hex_files\cb_int.hex /Y
if exist .\Hex_files\cb_int_125.hex del .\Hex_files\cb_int_125.hex /Q /F
if exist .\Hex_files\cb_int_250.hex del .\Hex_files\cb_int_250.hex /Q /F
if exist .\Hex_files\cb_int_500.hex del .\Hex_files\cb_int_500.hex /Q /F
if exist .\Hex_files\cb_int_1000.hex del .\Hex_files\cb_int_1000.hex /Q /F
%MAKE% -f %BUILD_SCRIPTS_DIR%\build.mak rebuild -s
copy .\_buildgen\Output\absolute.elf Reha_Rap01.elf
C:\\HighTec\\TriCore\bin\tricore-nm.exe -a Reha_Rap01.elf > Reha_Rap01.sym
copy .\_buildgen\Output\NewEagle_ME1735_810D0_8A13.hex "C:\MATLAB\Reha_Rap_01\Reha_Rap01_raptor_rtw\Reha_Rap01_002.hex" /Y
