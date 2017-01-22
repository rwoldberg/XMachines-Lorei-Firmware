//XMachines Edits

/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * English
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_EN_H
#define LANGUAGE_EN_H

#if DISABLED(MAPPER_NON) && DISABLED(MAPPER_C2C3) && DISABLED(MAPPER_D0D1) && DISABLED(MAPPER_D0D1_MOD) && DISABLED(MAPPER_E382E383)
  #define MAPPER_NON         // For direct ascii codes
#endif

//#define SIMULATE_ROMFONT //Comment in to see what is seen on the character based displays
#if DISABLED(SIMULATE_ROMFONT) && DISABLED(DISPLAY_CHARSET_ISO10646_1) && DISABLED(DISPLAY_CHARSET_ISO10646_5) && DISABLED(DISPLAY_CHARSET_ISO10646_KANA) && DISABLED(DISPLAY_CHARSET_ISO10646_CN)
  #define DISPLAY_CHARSET_ISO10646_1 // use the better font on full graphic displays.
#endif


#ifndef WELCOME_MSG
  #define WELCOME_MSG                         MACHINE_NAME " ready."
#endif
#ifndef MSG_SD_INSERTED
  #define MSG_SD_INSERTED                     "Card inserted"
#endif
#ifndef MSG_SD_REMOVED
  #define MSG_SD_REMOVED                      "Card removed"
#endif
#ifndef MSG_LCD_ENDSTOPS
  #define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#endif
#ifndef MSG_MAIN
  #define MSG_MAIN                            "Main"
#endif
#ifndef MSG_AUTOSTART
  #define MSG_AUTOSTART                       "Autostart"
#endif
#ifndef MSG_DISABLE_STEPPERS
  #define MSG_DISABLE_STEPPERS                "Disable steppers"
#endif
#ifndef MSG_AUTO_HOME
  #define MSG_AUTO_HOME                       "Home Printer" //Was Auto home
#endif

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Library XMachines Have Added
#ifndef MSG_HOTEND_OFFSET
	#define MSG_HOTEND_OFFSET					"Set Hotend Offset"
#endif
#ifndef MSG_HOTEND_OFFSET_X
	#define MSG_HOTEND_OFFSET_X					"Set X Offset"
#endif
#ifndef MSG_HOTEND_OFFSET_Y
	#define MSG_HOTEND_OFFSET_Y					"Set Y Offset"
#endif
#ifndef MSG_PRINTING
  #define MSG_PRINTING                         "Printing"
#endif
#ifndef MSG_CALIBRATE_Z
  #define MSG_CALIBRATE_Z                      "Calibrate Z"
#endif
#ifndef MSG_CLEAR_Z
  #define MSG_CLEAR_Z                         "Start Sequence"
#endif
#ifndef MSG_PAUSE
  #define MSG_PAUSE                           "Print Paused"
#endif
#ifndef MSG_RETRACT_FIL
  #define MSG_RETRACT_FIL                     "Retract Filament"
#endif
#ifndef MSG_LOAD_UNLOAD_FIL
  #define MSG_LOAD_UNLOAD_FIL                 "Load Filament"
#endif

#ifndef MSG_SUMMARY
  #define MSG_SUMMARY                         "Turn Knob Till" "Nozzle Touches Bed"
#endif
#ifndef MSG_START_SEQUENCE
  #define MSG_START_SEQUENCE                  "Click to Begin"
#endif
#ifndef MSG_CONTINUE
  #define MSG_CONTINUE                        "Click to continue"
#endif
#ifndef MSG_LOAD_UNLOAD
  #define MSG_LOAD_UNLOAD                     "Load/Unload Filament"
#endif
#ifndef MSG_LOAD
  #define MSG_LOAD                            "Load Filament"
#endif
#ifndef MSG_UNLOAD
  #define MSG_UNLOAD                          "Unload Filament"
#endif
#ifndef MSG_EXT1
  #define MSG_EXT1                            "Left Extruder"
#endif
#ifndef MSG_EXT2
  #define MSG_EXT2                            "Right Extruder"
#endif
#ifndef MSG_UTILITIES
  #define MSG_UTILITIES                       "Utilities"
#endif 
#ifndef MSG_LOADED
  #define MSG_LOADED                          "Filament Loaded"
#endif
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef MSG_LEVEL_BED_HOMING
  #define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#endif
#ifndef MSG_LEVEL_BED_WAITING
  #define MSG_LEVEL_BED_WAITING               "Click to Begin"
#endif
#ifndef MSG_LEVEL_BED_NEXT_POINT
  #define MSG_LEVEL_BED_NEXT_POINT            "Next Point"
#endif
#ifndef MSG_LEVEL_BED_DONE
  #define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#endif
#ifndef MSG_LEVEL_BED_CANCEL
  #define MSG_LEVEL_BED_CANCEL                "Cancel"
#endif
#ifndef MSG_SET_HOME_OFFSETS
  #define MSG_SET_HOME_OFFSETS                "Set home offsets"
#endif
#ifndef MSG_HOME_OFFSETS_APPLIED
  #define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#endif
#ifndef MSG_SET_ORIGIN
  #define MSG_SET_ORIGIN                      "Set origin"
#endif
#ifndef MSG_PREHEAT_PLA
  #define MSG_PREHEAT_PLA                     "Preheat PLA"
#endif
#ifndef MSG_PREHEAT_PLA_N
  #define MSG_PREHEAT_PLA_N                   MSG_PREHEAT_PLA " "
#endif
#ifndef MSG_PREHEAT_PLA_ALL
  #define MSG_PREHEAT_PLA_ALL                 MSG_PREHEAT_PLA " All"
#endif
#ifndef MSG_PREHEAT_PLA_BEDONLY
  #define MSG_PREHEAT_PLA_BEDONLY             MSG_PREHEAT_PLA " Bed"
#endif
#ifndef MSG_PREHEAT_PLA_SETTINGS
  #define MSG_PREHEAT_PLA_SETTINGS            MSG_PREHEAT_PLA " conf"
#endif
#ifndef MSG_PREHEAT_ABS
  #define MSG_PREHEAT_ABS                     "Preheat ABS"
#endif
#ifndef MSG_PREHEAT_ABS_N
  #define MSG_PREHEAT_ABS_N                   MSG_PREHEAT_ABS " "
#endif
#ifndef MSG_PREHEAT_ABS_ALL
  #define MSG_PREHEAT_ABS_ALL                 MSG_PREHEAT_ABS " All"
#endif
#ifndef MSG_PREHEAT_ABS_BEDONLY
  #define MSG_PREHEAT_ABS_BEDONLY             MSG_PREHEAT_ABS " Bed"
#endif
#ifndef MSG_PREHEAT_ABS_SETTINGS
  #define MSG_PREHEAT_ABS_SETTINGS            MSG_PREHEAT_ABS " conf"
#endif
#ifndef MSG_H1
  #define MSG_H1                              "Left"   
#endif
#ifndef MSG_H2
  #define MSG_H2                              "Right"  
#endif
#ifndef MSG_H3
  #define MSG_H3                              "3"
#endif
#ifndef MSG_H4
  #define MSG_H4                              "4"
#endif
#ifndef MSG_COOLDOWN
  #define MSG_COOLDOWN                        "Cooldown"
#endif
#ifndef MSG_SWITCH_PS_ON
  #define MSG_SWITCH_PS_ON                    "Switch power on"
#endif
#ifndef MSG_SWITCH_PS_OFF
  #define MSG_SWITCH_PS_OFF                   "Switch power off"
#endif
#ifndef MSG_EXTRUDE
  #define MSG_EXTRUDE                         "Extrude"
#endif
#ifndef MSG_RETRACT
  #define MSG_RETRACT                         "Retract"
#endif
#ifndef MSG_MOVE_AXIS
  #define MSG_MOVE_AXIS                       "Move axis"
#endif
#ifndef MSG_LEVEL_BED
  #define MSG_LEVEL_BED                       "Level bed"
#endif
#ifndef MSG_MOVE_X
  #define MSG_MOVE_X                          "Move X"
#endif
#ifndef MSG_MOVE_Y
  #define MSG_MOVE_Y                          "Move Y"
#endif
#ifndef MSG_MOVE_Z
  #define MSG_MOVE_Z                          "Move Z"
#endif
#ifndef MSG_MOVE_E
  #define MSG_MOVE_E                          "Extruder "
#endif
#ifndef MSG_MOVE_E1
  #define MSG_MOVE_E1                         "Left"   
#endif
#ifndef MSG_MOVE_E2
  #define MSG_MOVE_E2                         "Right"      
#endif
#ifndef MSG_MOVE_E3
  #define MSG_MOVE_E3                         "3"
#endif
#ifndef MSG_MOVE_E4
  #define MSG_MOVE_E4                         "4"
#endif
#ifndef MSG_MOVE_01MM
  #define MSG_MOVE_01MM                       "Move 0.1mm"
#endif
#ifndef MSG_MOVE_1MM
  #define MSG_MOVE_1MM                        "Move 1mm"
#endif
#ifndef MSG_MOVE_10MM
  #define MSG_MOVE_10MM                       "Move 10mm"
#endif
#ifndef MSG_SPEED
  #define MSG_SPEED                           "Speed"
#endif
#ifndef MSG_BED_Z
  #define MSG_BED_Z                           "Bed Z"
#endif
#ifndef MSG_NOZZLE
  #define MSG_NOZZLE                          "Nozzle"
#endif
#ifndef MSG_N1
  #define MSG_N1                              " Left"       
#endif
#ifndef MSG_N2
  #define MSG_N2                              " Right"    
#endif
#ifndef MSG_N3
  #define MSG_N3                              " 3"
#endif
#ifndef MSG_N4
  #define MSG_N4                              " 4"
#endif
#ifndef MSG_BED
  #define MSG_BED                             "Bed"
#endif
#ifndef MSG_FAN_SPEED
  #define MSG_FAN_SPEED                       "Fan Speed"
#endif
#ifndef MSG_FLOW
  #define MSG_FLOW                            "Flow"
#endif
#ifndef MSG_CONTROL
  #define MSG_CONTROL                         "Control"
#endif
#ifndef MSG_MIN
  #define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#endif
#ifndef MSG_MAX
  #define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#endif
#ifndef MSG_FACTOR
  #define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#endif
#ifndef MSG_AUTOTEMP
  #define MSG_AUTOTEMP                        "Autotemp"
#endif
#ifndef MSG_ON
  #define MSG_ON                              "On "
#endif
#ifndef MSG_OFF
  #define MSG_OFF                             "Off"
#endif
#ifndef MSG_PID_P
  #define MSG_PID_P                           "PID-P"
#endif
#ifndef MSG_PID_I
  #define MSG_PID_I                           "PID-I"
#endif
#ifndef MSG_PID_D
  #define MSG_PID_D                           "PID-D"
#endif
#ifndef MSG_PID_C
  #define MSG_PID_C                           "PID-C"
#endif
#ifndef MSG_E1
  #define MSG_E1                              " E1"
#endif
#ifndef MSG_E2
  #define MSG_E2                              " E2"
#endif
#ifndef MSG_E3
  #define MSG_E3                              " E3"
#endif
#ifndef MSG_E4
  #define MSG_E4                              " E4"
#endif
#ifndef MSG_ACC
  #define MSG_ACC                             "Accel"
#endif
#ifndef MSG_VXY_JERK
  #define MSG_VXY_JERK                        "Vxy-jerk"
#endif
#ifndef MSG_VZ_JERK
  #define MSG_VZ_JERK                         "Vz-jerk"
#endif
#ifndef MSG_VE_JERK
  #define MSG_VE_JERK                         "Ve-jerk"
#endif
#ifndef MSG_VMAX
  #define MSG_VMAX                            "Vmax "
#endif
#ifndef MSG_X
  #define MSG_X                               "X"
#endif
#ifndef MSG_Y
  #define MSG_Y                               "Y"
#endif
#ifndef MSG_Z
  #define MSG_Z                               "Z"
#endif
#ifndef MSG_E
  #define MSG_E                               "E"
#endif
#ifndef MSG_VMIN
  #define MSG_VMIN                            "Vmin"
#endif
#ifndef MSG_VTRAV_MIN
  #define MSG_VTRAV_MIN                       "VTrav min"
#endif
#ifndef MSG_AMAX
  #define MSG_AMAX                            "Amax "
#endif
#ifndef MSG_A_RETRACT
  #define MSG_A_RETRACT                       "A-retract"
#endif
#ifndef MSG_A_TRAVEL
  #define MSG_A_TRAVEL                        "A-travel"
#endif
#ifndef MSG_XSTEPS
  #define MSG_XSTEPS                          "Xsteps/mm"
#endif
#ifndef MSG_YSTEPS
  #define MSG_YSTEPS                          "Ysteps/mm"
#endif
#ifndef MSG_ZSTEPS
  #define MSG_ZSTEPS                          "Zsteps/mm"
#endif
#ifndef MSG_ESTEPS
  #define MSG_ESTEPS                          "Esteps/mm"
#endif
#ifndef MSG_TEMPERATURE
  #define MSG_TEMPERATURE                     "Temperature"
#endif
#ifndef MSG_MOTION
  #define MSG_MOTION                          "Motion"
#endif
#ifndef MSG_VOLUMETRIC
  #define MSG_VOLUMETRIC                      "Filament"
#endif
#ifndef MSG_VOLUMETRIC_ENABLED
  #define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#endif
#ifndef MSG_FILAMENT_DIAM
  #define MSG_FILAMENT_DIAM                   "Fil. Dia."
#endif
#ifndef MSG_DIAM_E1
  #define MSG_DIAM_E1                         " 1"
#endif
#ifndef MSG_DIAM_E2
  #define MSG_DIAM_E2                         " 2"
#endif
#ifndef MSG_DIAM_E3
  #define MSG_DIAM_E3                         " 3"
#endif
#ifndef MSG_DIAM_E4
  #define MSG_DIAM_E4                         " 4"
#endif
#ifndef MSG_CONTRAST
  #define MSG_CONTRAST                        "LCD contrast"
#endif
#ifndef MSG_STORE_EPROM
  #define MSG_STORE_EPROM                     "Store memory"
#endif
#ifndef MSG_LOAD_EPROM
  #define MSG_LOAD_EPROM                      "Load memory"
#endif
#ifndef MSG_RESTORE_FAILSAFE
  #define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#endif
#ifndef MSG_REFRESH
  #define MSG_REFRESH                         "Refresh"
#endif
#ifndef MSG_WATCH
  #define MSG_WATCH                           "Info screen"
#endif
#ifndef MSG_PREPARE
  #define MSG_PREPARE                         "Prepare"
#endif
#ifndef MSG_TUNE
  #define MSG_TUNE                            "Tune"
#endif
#ifndef MSG_PAUSE_PRINT
  #define MSG_PAUSE_PRINT                     "Pause print"
#endif
#ifndef MSG_RESUME_PRINT
  #define MSG_RESUME_PRINT                    "Resume print"
#endif
#ifndef MSG_STOP_PRINT
  #define MSG_STOP_PRINT                      "Stop print"
#endif
#ifndef MSG_CARD_MENU
  #define MSG_CARD_MENU                       "Print from SD"
#endif
#ifndef MSG_NO_CARD
  #define MSG_NO_CARD                         "No SD card"
#endif
#ifndef MSG_DWELL
  #define MSG_DWELL                           "Sleep..."
#endif
#ifndef MSG_USERWAIT
  #define MSG_USERWAIT                        "Wait for user..."
#endif
#ifndef MSG_RESUMING
  #define MSG_RESUMING                        "Resuming print"
#endif
#ifndef MSG_PRINT_ABORTED
  #define MSG_PRINT_ABORTED                   "Print aborted"
#endif
#ifndef MSG_NO_MOVE
  #define MSG_NO_MOVE                         "No move."
#endif
#ifndef MSG_KILLED
  #define MSG_KILLED                          "KILLED. "
#endif
#ifndef MSG_STOPPED
  #define MSG_STOPPED                         "STOPPED. "
#endif
#ifndef MSG_CONTROL_RETRACT
  #define MSG_CONTROL_RETRACT                 "Retract mm"
#endif
#ifndef MSG_CONTROL_RETRACT_SWAP
  #define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#endif
#ifndef MSG_CONTROL_RETRACTF
  #define MSG_CONTROL_RETRACTF                "Retract  V"
#endif
#ifndef MSG_CONTROL_RETRACT_ZLIFT
  #define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER
  #define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAP
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVERF
  #define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#endif
#ifndef MSG_AUTORETRACT
  #define MSG_AUTORETRACT                     "AutoRetr."
#endif
#ifndef MSG_FILAMENTCHANGE
  #define MSG_FILAMENTCHANGE                  "Change filament"
#endif
#ifndef MSG_INIT_SDCARD
  #define MSG_INIT_SDCARD                     "Init. SD card"
#endif
#ifndef MSG_CNG_SDCARD
  #define MSG_CNG_SDCARD                      "Change SD card"
#endif
#ifndef MSG_ZPROBE_OUT
  #define MSG_ZPROBE_OUT                      "Z probe out. bed"
#endif
#ifndef MSG_YX_UNHOMED
  #define MSG_YX_UNHOMED                      "Home X/Y before Z"
#endif
#ifndef MSG_ZPROBE_ZOFFSET
  #define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#endif
#ifndef MSG_BABYSTEP_X
  #define MSG_BABYSTEP_X                      "Babystep X"
#endif
#ifndef MSG_BABYSTEP_Y
  #define MSG_BABYSTEP_Y                      "Babystep Y"
#endif
#ifndef MSG_BABYSTEP_Z
  #define MSG_BABYSTEP_Z                      "Babystep Z"
#endif
#ifndef MSG_ENDSTOP_ABORT
  #define MSG_ENDSTOP_ABORT                   "Endstop abort"
#endif
#ifndef MSG_HEATING_FAILED_LCD
  #define MSG_HEATING_FAILED_LCD              "Heating failed"
#endif
#ifndef MSG_ERR_REDUNDANT_TEMP
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#endif
#ifndef MSG_THERMAL_RUNAWAY
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#endif
#ifndef MSG_ERR_MAXTEMP
  #define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#endif
#ifndef MSG_ERR_MINTEMP
  #define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#endif
#ifndef MSG_ERR_MAXTEMP_BED
  #define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#endif
#ifndef MSG_ERR_MINTEMP_BED
  #define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#endif
#ifndef MSG_END_HOUR
  #define MSG_END_HOUR                        "hours"
#endif
#ifndef MSG_END_MINUTE
  #define MSG_END_MINUTE                      "minutes"
#endif
#ifndef MSG_HEATING
  #define MSG_HEATING                         "Heating..."
#endif
#ifndef MSG_HEATING_COMPLETE
  #define MSG_HEATING_COMPLETE                "Heating Done" ///////"Heating Done"///////change///////Can you get it to say "Printing" File_Name
#endif
#ifndef MSG_BED_HEATING
  #define MSG_BED_HEATING                     "Bed Heating."
#endif
#ifndef MSG_BED_DONE
  #define MSG_BED_DONE                        "Bed done." 
#endif
#ifndef MSG_DELTA_CALIBRATE
  #define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#endif
#ifndef MSG_DELTA_CALIBRATE_X
  #define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#endif
#ifndef MSG_DELTA_CALIBRATE_Y
  #define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#endif
#ifndef MSG_DELTA_CALIBRATE_Z
  #define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#endif
#ifndef MSG_DELTA_CALIBRATE_CENTER
  #define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"
#endif

#endif // LANGUAGE_EN_H
