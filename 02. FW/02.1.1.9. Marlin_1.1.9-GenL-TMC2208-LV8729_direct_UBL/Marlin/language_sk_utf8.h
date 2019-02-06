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
 * Slovak
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Michal HoleÅ¡, Farma MaM
 * http://www.facebook.com/farmamam
 *
 */
#ifndef LANGUAGE_SK_UTF_H
#define LANGUAGE_SK_UTF_H

#define MAPPER_C3C4C5_SK
#define DISPLAY_CHARSET_ISO10646_SK
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pripravenÃ¡.")
#define MSG_BACK                            _UxGT("NaspaÅ¥")
#define MSG_SD_INSERTED                     _UxGT("Karta vloÅ¾enÃ¡")
#define MSG_SD_REMOVED                      _UxGT("Karta vybratÃ¡")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstopy") // max 8 znakov
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Soft.endstopy")
#define MSG_MAIN                            _UxGT("HlavnÃ¡ ponuka")
#define MSG_AUTOSTART                       _UxGT("AutoÅ¡tart")
#define MSG_DISABLE_STEPPERS                _UxGT("UvolniÅ¥ motory")
#define MSG_DEBUG_MENU                      _UxGT("Ponuka ladenia")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test uk. priebehu")
#define MSG_AUTO_HOME                       _UxGT("DomovskÃ¡ pozÃ­cia")
#define MSG_AUTO_HOME_X                     _UxGT("Domov os X")
#define MSG_AUTO_HOME_Y                     _UxGT("Domov os Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Domov os Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("KalibrovaÅ¥ Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Meranie podloÅ¾ky")
#define MSG_LEVEL_BED_WAITING               _UxGT("KliknutÃ­m spusÅ¥te")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("ÄŽalÅ¡Ã­ bod")
#define MSG_LEVEL_BED_DONE                  _UxGT("Meranie hotovÃ©!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("VÃ½Å¡ka merania")
#define MSG_SET_HOME_OFFSETS                _UxGT("NastaviÅ¥ offsety")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offsety nastavenÃ©")
#define MSG_SET_ORIGIN                      _UxGT("NastaviÅ¥ zaÄ�iatok")
#define MSG_PREHEAT_1                       _UxGT("ZahriaÅ¥ PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" vÅ¡etko")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" hotend")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" podloÅ¾")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" nast")
#define MSG_PREHEAT_2                       _UxGT("ZahriaÅ¥ ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" vÅ¡etko")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" hotend")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" podloÅ¾")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" nast")
#define MSG_COOLDOWN                        _UxGT("SchladiÅ¥")
#define MSG_SWITCH_PS_ON                    _UxGT("ZapnÃºÅ¥ napÃ¡janie")
#define MSG_SWITCH_PS_OFF                   _UxGT("VypnÃºÅ¥ napÃ¡janie")
#define MSG_EXTRUDE                         _UxGT("VytlaÄ�iÅ¥ (extr.)")
#define MSG_RETRACT                         _UxGT("VytiahnuÅ¥ (retr.)")
#define MSG_MOVE_AXIS                       _UxGT("PosunÃºÅ¥ osy")
#define MSG_BED_LEVELING                    _UxGT("VyrovnaÅ¥ podloÅ¾ku")
#define MSG_LEVEL_BED                       _UxGT("VyrovnaÅ¥ podloÅ¾ku")
#define MSG_LEVEL_CORNERS                   _UxGT("VyrovnaÅ¥ rohy")
#define MSG_NEXT_CORNER                     _UxGT("ÄŽalÅ¡Ã­ roh")
#define MSG_EDITING_STOPPED                 _UxGT("Koniec Ãºprav siete")

#define MSG_UBL_DOING_G29                   _UxGT("VykonÃ¡vam G29")
#define MSG_UBL_UNHOMED                     _UxGT("Prejdite domov")
#define MSG_UBL_TOOLS                       _UxGT("UBL nÃ¡stroje")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH                 _UxGT("ManuÃ¡lna sieÅ¥ bodov")
#define MSG_UBL_BC_INSERT                   _UxGT("VloÅ¾te kartu, zmerajte")
#define MSG_UBL_BC_INSERT2                  _UxGT("Zmerajte")
#define MSG_UBL_BC_REMOVE                   _UxGT("OdstrÃ¡Åˆte a zmerajte")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Presun na Ä�alÅ¡Ã­")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("AktivovaÅ¥ UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("DeaktivovaÅ¥ UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Teplota podloÅ¾ky")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Teplota hotendu")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Ãšprava sieÅ¥e bodov")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("UpraviÅ¥ vlastnÃº sieÅ¥")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("DoladiÅ¥ sieÅ¥ bodov")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Koniec Ãºprav siete")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("VlastnÃ¡ sieÅ¥")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("VytvoriÅ¥ sieÅ¥")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("SieÅ¥ bodov PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("SieÅ¥ bodov ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("StudenÃ¡ sieÅ¥ bodov")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("UpraviÅ¥ vÃ½Å¡ku siete")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("VÃ½Å¡ka")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("SkontrolovaÅ¥ sieÅ¥")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Kontrola siete PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Kontrola siete ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Kontrola vlast. siete")
#define MSG_UBL_CONTINUE_MESH               _UxGT("PokraÄ�ovaÅ¥ v sieti")
#define MSG_UBL_MESH_LEVELING               _UxGT("SieÅ¥ovÃ© rovnanie")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-bodove rovnanie")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("MrieÅ¾kovÃ© rovnanie")
#define MSG_UBL_MESH_LEVEL                  _UxGT("VyrovnaÅ¥ podloÅ¾ku")
#define MSG_UBL_SIDE_POINTS                 _UxGT("PostrannÃ© body")
#define MSG_UBL_MAP_TYPE                    _UxGT("Typ siete bodov")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("ExportovaÅ¥ sieÅ¥")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("ExportovaÅ¥ do PC")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("ExportovaÅ¥ do CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("ZÃ¡loha do PC")
#define MSG_UBL_INFO_UBL                    _UxGT("Info o UBL do PC")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("UpraviÅ¥ sieÅ¥ bodov")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Hustota mrieÅ¾ky")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("RuÄ�nÃ¡ hustota")
#define MSG_UBL_SMART_FILLIN                _UxGT("Smart hustota")
#define MSG_UBL_FILLIN_MESH                 _UxGT("ZaplniÅ¥ mrieÅ¾ku")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("ZruÅ¡iÅ¥ vÅ¡etko")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("ZruÅ¡iÅ¥ poslednÃ½")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("UpraviÅ¥ vÅ¡etky")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("UpraviÅ¥ poslednÃ½")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("UloÅ¾isko sietÃ­")
#define MSG_UBL_STORAGE_SLOT                _UxGT("PamaÅ¥ovÃ½ slot")
#define MSG_UBL_LOAD_MESH                   _UxGT("NaÄ�Ã­taÅ¥ sieÅ¥ bodov")
#define MSG_UBL_SAVE_MESH                   _UxGT("UloÅ¾iÅ¥ sieÅ¥ bodov")
#define MSG_MESH_LOADED                     _UxGT("SieÅ¥ %i naÄ�Ã­tanÃ¡")
#define MSG_MESH_SAVED                      _UxGT("SieÅ¥ %i uloÅ¾enÃ¡")
#define MSG_NO_STORAGE                      _UxGT("Nedostatok miesta")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: UloÅ¾iÅ¥ UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: ObnoviÅ¥ UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Koniec Z-Offsetu")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL Postupne")

#define MSG_LED_CONTROL                     _UxGT("Nastavenie LED")
#define MSG_LEDS                            _UxGT("Svetlo")
#define MSG_LED_PRESETS                     _UxGT("PrednastavenÃ© farby")
#define MSG_SET_LEDS_RED                    _UxGT("ÄŒervenÃ¡")
#define MSG_SET_LEDS_ORANGE                 _UxGT("OranÅ¾ovÃ¡")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Å½ltÃ¡")
#define MSG_SET_LEDS_GREEN                  _UxGT("ZelenÃ¡")
#define MSG_SET_LEDS_BLUE                   _UxGT("ModrÃ¡")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("FialovÃ¡")
#define MSG_SET_LEDS_WHITE                  _UxGT("Biela")
#define MSG_SET_LEDS_DEFAULT                _UxGT("ObnoviÅ¥ nastavenie")
#define MSG_CUSTOM_LEDS                     _UxGT("VlastnÃ¡ farba")
#define MSG_INTENSITY_R                     _UxGT("Inten. Ä�ervenej")
#define MSG_INTENSITY_G                     _UxGT("Inten. zelenej")
#define MSG_INTENSITY_B                     _UxGT("Inten. modrej")
#define MSG_INTENSITY_W                     _UxGT("Inten. bielej")
#define MSG_LED_BRIGHTNESS                  _UxGT("Jas")

#define MSG_USER_MENU                       _UxGT("VlastnÃ© prÃ­kazy")
#define MSG_MOVING                          _UxGT("Posun...")
#define MSG_FREE_XY                         _UxGT("UvolniÅ¥ XY")
#define MSG_MOVE_X                          _UxGT("PosunÃºÅ¥ X")
#define MSG_MOVE_Y                          _UxGT("PosunÃºÅ¥ Y")
#define MSG_MOVE_Z                          _UxGT("PosunÃºÅ¥ Z")
#define MSG_MOVE_E                          _UxGT("ExtrÃºder")
#define MSG_MOVE_01MM                       _UxGT("PosunÃºÅ¥ o 0,1mm")
#define MSG_MOVE_1MM                        _UxGT("PosunÃºÅ¥ o 1mm")
#define MSG_MOVE_10MM                       _UxGT("PosunÃºÅ¥ o 10mm")
#define MSG_SPEED                           _UxGT("RÃ½chlosÅ¥")
#define MSG_BED_Z                           _UxGT("VÃ½Å¡ka podl.")
#define MSG_NOZZLE                          _UxGT("Tryska")
#define MSG_BED                             _UxGT("PodloÅ¾ka")
#define MSG_FAN_SPEED                       _UxGT("RÃ½chlosÅ¥ vent.")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("RÃ½chlosÅ¥ ex. vent.")
#define MSG_FLOW                            _UxGT("Prietok")
#define MSG_CONTROL                         _UxGT("OvlÃ¡danie")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fakt")
#define MSG_AUTOTEMP                        _UxGT("Autoteplota")
#define MSG_ON                              _UxGT("Zap")
#define MSG_OFF                             _UxGT("Vyp")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("VybraÅ¥")
#define MSG_ACC                             _UxGT("ZrÃ½chl")
#define MSG_JERK                            _UxGT("Skok")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-skok")
  #define MSG_VB_JERK                       _UxGT("Vb-skok")
  #define MSG_VC_JERK                       _UxGT("Vc-skok")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-skok")
  #define MSG_VB_JERK                       _UxGT("Vy-skok")
  #define MSG_VC_JERK                       _UxGT("Vz-skok")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-skok")
#define MSG_JUNCTION_DEVIATION              _UxGT("Junction Dev")
#define MSG_VELOCITY                        _UxGT("RÃ½chlosÅ¥")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#define MSG_ACCELERATION                    _UxGT("AkcelerÃ¡cia")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-retrakt")
#define MSG_A_TRAVEL                        _UxGT("A-prejazd")
#define MSG_STEPS_PER_MM                    _UxGT("Krokov/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Akrokov/mm")
  #define MSG_BSTEPS                        _UxGT("Bkrokov/mm")
  #define MSG_CSTEPS                        _UxGT("Ckrokov/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Xkrokov/mm")
  #define MSG_BSTEPS                        _UxGT("Ykrokov/mm")
  #define MSG_CSTEPS                        _UxGT("Zkrokov/mm")
#endif
#define MSG_ESTEPS                          _UxGT("Ekrokov/mm")
#define MSG_E1STEPS                         _UxGT("E1krokov/mm")
#define MSG_E2STEPS                         _UxGT("E2krokov/mm")
#define MSG_E3STEPS                         _UxGT("E3krokov/mm")
#define MSG_E4STEPS                         _UxGT("E4krokov/mm")
#define MSG_E5STEPS                         _UxGT("E5krokÅ¯/mm")
#define MSG_TEMPERATURE                     _UxGT("Teplota")
#define MSG_MOTION                          _UxGT("Pohyb")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E na mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Priem.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("VysunÃºÅ¥ mm")
#define MSG_FILAMENT_LOAD                   _UxGT("ZaviesÅ¥ mm")
#define MSG_ADVANCE_K                       _UxGT("K pro posun")
#define MSG_CONTRAST                        _UxGT("Kontrast LCD")
#define MSG_STORE_EEPROM                    _UxGT("UloÅ¾iÅ¥ nastavenie")
#define MSG_LOAD_EEPROM                     _UxGT("NaÄ�Ã­taÅ¥ nastavenÃ­e")
#define MSG_RESTORE_FAILSAFE                _UxGT("ObnoviÅ¥ nastavenie")
#define MSG_INIT_EEPROM                     _UxGT("Inic. EEPROM")
#define MSG_REFRESH                         _UxGT("ObnoviÅ¥")
#define MSG_WATCH                           _UxGT("Info obrazovka")
#define MSG_PREPARE                         _UxGT("PrÃ­prava tlaÄ�e")
#define MSG_TUNE                            _UxGT("Doladenie tlaÄ�e")
#define MSG_PAUSE_PRINT                     _UxGT("PozastaviÅ¥ tlaÄ�")
#define MSG_RESUME_PRINT                    _UxGT("ObnoviÅ¥ tlaÄ�")
#define MSG_STOP_PRINT                      _UxGT("ZastaviÅ¥ tlaÄ�")
#define MSG_CARD_MENU                       _UxGT("TlaÄ�iÅ¥ z SD")
#define MSG_NO_CARD                         _UxGT("Å½iadna SD karta")
#define MSG_DWELL                           _UxGT("SpÃ­m...")
#define MSG_USERWAIT                        _UxGT("KliknutÃ­m pokraÄ�.")
#define MSG_PRINT_PAUSED                    _UxGT("TlaÄ� pozastavenÃ¡")
#define MSG_PRINTING                        _UxGT("TlaÄ�Ã­m...")
#define MSG_PRINT_ABORTED                   _UxGT("TlaÄ� zruÅ¡enÃ¡")
#define MSG_NO_MOVE                         _UxGT("Å½iadny pohyb.")
#define MSG_KILLED                          _UxGT("PRERUÅ ENÃ‰. ")
#define MSG_STOPPED                         _UxGT("ZASTAVENÃ‰. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrakt mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("VÃ½mena Re.mm")
#define MSG_CONTROL_RETRACTF                _UxGT("RetraktovaÅ¥  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Zdvih Z mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")
#define MSG_FILAMENTCHANGE                  _UxGT("VymeniÅ¥ filament")
#define MSG_FILAMENTLOAD                    _UxGT("ZaviesÅ¥ filament")
#define MSG_FILAMENTUNLOAD                  _UxGT("VysunÃºÅ¥ filament")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("VysunÃºÅ¥ vÅ¡etko")

#define MSG_INIT_SDCARD                     _UxGT("NaÄ�Ã­taÅ¥ SD kartu")
#define MSG_CNG_SDCARD                      _UxGT("VymeniÅ¥ SD kartu")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda Z mimo podl")
#define MSG_SKEW_FACTOR                     _UxGT("Faktor skosenia")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch Reset")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLTouch VysunÃºÅ¥")
#define MSG_BLTOUCH_STOW                    _UxGT("BLTouch ZasunÃºÅ¥")
#define MSG_HOME                            _UxGT("Najprv")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("domov")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z offset")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop zastavil")
#define MSG_HEATING_FAILED_LCD              _UxGT("Chyba ohrevu")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Chyba ohrevu podl.")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("REDUND. TEPLOTA")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TEPLOTNÃ� SKOK")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("TEPLOTNÃ� SKOK PODL.")
#define MSG_ERR_MAXTEMP                     _UxGT("VYSOKÃ� TEPLOTA")
#define MSG_ERR_MINTEMP                     _UxGT("NÃ�ZKA TEPLOTA")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("VYS. TEPL. PODL.")
#define MSG_ERR_MINTEMP_BED                 _UxGT("NÃ�Z. TEPL. PODL.")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("TLAÄŒ. ZASTAVENÃ�")
#define MSG_PLEASE_RESET                    _UxGT("Spravte reset")
#define MSG_SHORT_DAY                       _UxGT("d")
#define MSG_SHORT_HOUR                      _UxGT("h")
#define MSG_SHORT_MINUTE                    _UxGT("m")
#define MSG_HEATING                         _UxGT("Ohrev...")
#define MSG_COOLING                         _UxGT("Ochladzovanie...")
#define MSG_BED_HEATING                     _UxGT("Ohrev podl...")
#define MSG_BED_COOLING                     _UxGT("Ochladzovanie podl...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta KalibrÃ¡cia")
#define MSG_DELTA_CALIBRATE_X               _UxGT("KalibrovaÅ¥ X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("KalibrovaÅ¥ Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("KalibrovaÅ¥ Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("KalibrovaÅ¥ Stred")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta nastavenia")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("AutokalibrÃ¡cia")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Nast.vÃ½Å¡ku delty")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Offset sondy Z")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag rameno")
#define MSG_DELTA_HEIGHT                    _UxGT("VÃ½Å¡ka")
#define MSG_DELTA_RADIUS                    _UxGT("Polomer")
#define MSG_INFO_MENU                       _UxGT("O tlaÄ�iarni")
#define MSG_INFO_PRINTER_MENU               _UxGT("Info o tlaÄ�iarni")
#define MSG_3POINT_LEVELING                 _UxGT("3-bodovÃ© rovnanie")
#define MSG_LINEAR_LEVELING                 _UxGT("LineÃ¡rne rovnanie")
#define MSG_BILINEAR_LEVELING               _UxGT("BilineÃ¡rne rovnanie")
#define MSG_UBL_LEVELING                    _UxGT("Unified Bed Leveling")
#define MSG_MESH_LEVELING                   _UxGT("MrieÅ¾kovÃ© rovnanie")
#define MSG_INFO_STATS_MENU                 _UxGT("Å tatistika")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info o doske")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistory")
#define MSG_INFO_EXTRUDERS                  _UxGT("ExtrudÃ©ry")
#define MSG_INFO_BAUDRATE                   _UxGT("RÃ½chlosÅ¥")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")
#define MSG_CASE_LIGHT                      _UxGT("Osvetlenie")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Jas svetla")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("PoÄ�et tlaÄ�Ã­")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("DokonÄ�enÃ©")
  #define MSG_INFO_PRINT_TIME               _UxGT("CelkovÃ½ Ä�as")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("NajdlhÅ¡ia tlaÄ�")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Celkom vytlaÄ�enÃ©")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("TlaÄ�e")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Hotovo")
  #define MSG_INFO_PRINT_TIME               _UxGT("ÄŒas")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("NajdlhÅ¡ia")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("VytlaÄ�enÃ©")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Teplota min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Teplota max")
#define MSG_INFO_PSU                        _UxGT("Nap. zdroj")
#define MSG_DRIVE_STRENGTH                  _UxGT("Budenie motorov")
#define MSG_DAC_PERCENT                     _UxGT("Motor %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("UloÅ¾iÅ¥ do EEPROM")

#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("PAUZA TLAÄŒE")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("ZAVEDENIE FILAMENTU")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("VYSUNUTIE FILAMENTU")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("MOÅ½N. POKRAÄŒ.:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("VytlaÄ�iÅ¥ viacej")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("ObnoviÅ¥ tlaÄ�")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Tryska: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("Parkovanie zlyhalo")
#define MSG_ERR_PROBING_FAILED              _UxGT("KalibrÃ¡cia zlyhala")
#define MSG_M600_TOO_COLD                   _UxGT("M600: PrÃ­liÅ¾ studenÃ½")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ÄŒakajte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("na spustenie")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("vÃ½meny filamentu")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("ÄŒakejte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("na vysunutie")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("VloÅ¾te filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("a stlaÄ�te")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("tlaÄ�idlo...")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Kliknite pre")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("ohrev trysky")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("ÄŒakajte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("na teplotu tr.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ÄŒakajte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("na zavedenie")
  #define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("ÄŒakajte na")
  #define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("vytlaÄ�enie")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("ÄŒakajte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("na pokraÄ�ovanie")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("tlaÄ�e")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ÄŒakajte...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("VysÃºvanie...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("VloÅ¾te, kliknite")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Ohrev...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ZavÃ¡dzanie...")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("VytlaÄ�ovanie...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("PokraÄ�ovanie...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_SK_UTF_H

