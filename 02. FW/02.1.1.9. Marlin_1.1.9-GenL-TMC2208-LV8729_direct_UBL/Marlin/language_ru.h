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
 * Russian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" Ð³Ð¾Ñ‚Ð¾Ð².")
#define MSG_BACK                            _UxGT("Ð�Ð°Ð·Ð°Ð´")
#define MSG_SD_INSERTED                     _UxGT("ÐšÐ°Ñ€Ñ‚Ð° Ð²Ñ�Ñ‚Ð°Ð²Ð»ÐµÐ½Ð°")
#define MSG_SD_REMOVED                      _UxGT("ÐšÐ°Ñ€Ñ‚Ð° Ð¸Ð·Ð²Ð»ÐµÑ‡ÐµÐ½Ð°")
#define MSG_LCD_ENDSTOPS                    _UxGT("Ð­Ð½Ð´Ñ�Ñ‚Ð¾Ð¿Ñ‹") // Max length 8 characters
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("ÐŸÑ€Ð¾Ð³Ñ€. Ñ�Ð½Ð´Ñ�Ñ‚Ð¾Ð¿Ñ‹")
#define MSG_MAIN                            _UxGT("ÐœÐµÐ½ÑŽ")
#define MSG_AUTOSTART                       _UxGT("Ð�Ð²Ñ‚Ð¾Ñ�Ñ‚Ð°Ñ€Ñ‚")
#define MSG_DISABLE_STEPPERS                _UxGT("Ð’Ñ‹ÐºÐ». Ð´Ð²Ð¸Ð³Ð°Ñ‚ÐµÐ»Ð¸")
#define MSG_DEBUG_MENU                      _UxGT("ÐœÐµÐ½ÑŽ Ð¾Ñ‚Ð»Ð°Ð´ÐºÐ¸")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Ð¢ÐµÑ�Ñ‚ Ð¸Ð½Ð´Ð¸ÐºÐ°Ñ‚Ð¾Ñ€Ð°")
#define MSG_AUTO_HOME                       _UxGT("Ð�Ð²Ñ‚Ð¾ Ð¿Ð°Ñ€ÐºÐ¾Ð²ÐºÐ°")
#define MSG_AUTO_HOME_X                     _UxGT("ÐŸÐ°Ñ€ÐºÐ¾Ð²ÐºÐ° X")
#define MSG_AUTO_HOME_Y                     _UxGT("ÐŸÐ°Ñ€ÐºÐ¾Ð²ÐºÐ° Y")
#define MSG_AUTO_HOME_Z                     _UxGT("ÐŸÐ°Ñ€ÐºÐ¾Ð²ÐºÐ° Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Ð�ÑƒÐ»ÐµÐ²Ð¾Ðµ Ð¿Ð¾Ð»Ð¾Ð¶ÐµÐ½Ð¸Ðµ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Ð�Ð°Ð¶Ð¼Ð¸Ñ‚Ðµ Ñ‡Ñ‚Ð¾Ð±Ñ‹ Ð½Ð°Ñ‡Ð°Ñ‚ÑŒ")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Ð¡Ð»ÐµÐ´ÑƒÑŽÑ‰Ð°Ñ� Ñ‚Ð¾Ñ‡ÐºÐ°")
#define MSG_LEVEL_BED_DONE                  _UxGT("Ð’Ñ‹Ñ€Ð°Ð²Ð½Ð¸Ð²Ð°Ð½Ð¸Ðµ Ð³Ð¾Ñ‚Ð¾Ð²Ð¾!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Ð’Ñ‹Ñ�Ð¾Ñ‚Ð° Ñ�Ð¿Ð°Ð´Ð°")
#define MSG_SET_HOME_OFFSETS                _UxGT("Ð—Ð°Ð¿Ð¾Ð¼Ð½Ð¸Ñ‚ÑŒ Ð¿Ð°Ñ€ÐºÐ¾Ð²ÐºÑƒ")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("ÐšÐ¾Ñ€Ñ€ÐµÐºÑ†Ð¸Ð¸ Ð¿Ñ€Ð¸Ð¼ÐµÐ½ÐµÐ½Ñ‹")
#define MSG_SET_ORIGIN                      _UxGT("Ð—Ð°Ð¿Ð¾Ð¼Ð½Ð¸Ñ‚ÑŒ Ð½Ð¾Ð»ÑŒ")
#define MSG_PREHEAT_1                       _UxGT("ÐŸÑ€ÐµÐ´Ð½Ð°Ð³Ñ€ÐµÐ² PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" Ð²Ñ�Ñ‘")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" Ñ�Ð¾Ð¿Ð»Ð¾")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Ñ�Ñ‚Ð¾Ð»")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Ð½Ð°Ñ�Ñ‚Ñ€.")
#define MSG_PREHEAT_2                       _UxGT("ÐŸÑ€ÐµÐ´Ð½Ð°Ð³Ñ€ÐµÐ² ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" Ð²Ñ�Ñ‘")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" Ñ�Ð¾Ð¿Ð»Ð¾")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Ñ�Ñ‚Ð¾Ð»")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Ð½Ð°Ñ�Ñ‚Ñ€.")
#define MSG_COOLDOWN                        _UxGT("ÐžÑ…Ð»Ð°Ð¶Ð´ÐµÐ½Ð¸Ðµ")
#define MSG_SWITCH_PS_ON                    _UxGT("Ð’ÐºÐ»ÑŽÑ‡Ð¸Ñ‚ÑŒ Ð¿Ð¸Ñ‚Ð°Ð½Ð¸Ðµ")
#define MSG_SWITCH_PS_OFF                   _UxGT("Ð’Ñ‹ÐºÐ»ÑŽÑ‡Ð¸Ñ‚ÑŒ Ð¿Ð¸Ñ‚Ð°Ð½Ð¸Ðµ")
#define MSG_EXTRUDE                         _UxGT("Ð­ÐºÑ�Ñ‚Ñ€ÑƒÐ·Ð¸Ñ�")
#define MSG_RETRACT                         _UxGT("Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ")
#define MSG_MOVE_AXIS                       _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Ð¾Ñ�Ñ�Ð¼")
#define MSG_BED_LEVELING                    _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Ñ�Ñ‚Ð¾Ð»Ð°")
#define MSG_LEVEL_BED                       _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Ñ�Ñ‚Ð¾Ð»")
#define MSG_LEVEL_CORNERS                   _UxGT("Ð’Ñ‹Ñ€Ð¾Ð²Ð½Ñ�Ñ‚ÑŒ ÑƒÐ³Ð»Ñ‹")
#define MSG_NEXT_CORNER                     _UxGT("Ð¡Ð»ÐµÐ´ÑƒÑŽÑ‰Ð¸Ð¹ ÑƒÐ³Ð¾Ð»")
#define MSG_EDITING_STOPPED                 _UxGT("Ð ÐµÐ´. Ñ�ÐµÑ‚ÐºÐ¸ Ð·Ð°Ð²ÐµÑ€ÑˆÐµÐ½Ð¾")
#define MSG_USER_MENU                       _UxGT("Ð¡Ð²Ð¾Ð¸ ÐºÐ¾Ð¼Ð¼Ð°Ð½Ð´Ñ‹")
#define MSG_UBL_DOING_G29                   _UxGT("Ð’Ñ‹Ð¿Ð¾Ð»Ð½Ñ�ÐµÐ¼ G29")
#define MSG_UBL_UNHOMED                     _UxGT("ÐŸÐ°Ñ€ÐºÑƒÐµÐ¼ Ñ�Ð½Ð°Ñ‡Ð°Ð»Ð° XYZ")
#define MSG_UBL_TOOLS                       _UxGT("Ð£Ñ‚Ð¸Ð»Ð¸Ñ‚Ñ‹ UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° UBL")
#define MSG_UBL_MANUAL_MESH                 _UxGT("ÐŸÐ¾Ñ�Ñ‚Ñ€. Ñ�ÐµÑ‚ÐºÑƒ Ð¾Ñ‚ Ñ€ÑƒÐºÐ¸")
#define MSG_UBL_BC_INSERT                   _UxGT("ÐŸÐ¾Ñ�Ñ‚. ÑˆÐ¸Ð¼Ð¼ Ð¸ Ð¸Ð·Ð¼ÐµÑ€.")
#define MSG_UBL_BC_INSERT2                  _UxGT("Ð˜Ð·Ð¼ÐµÑ€ÐµÐ½Ð¸Ðµ")
#define MSG_UBL_BC_REMOVE                   _UxGT("Ð£Ð´Ð°Ð». Ð¸ Ð¸Ð·Ð¼ÐµÑ€. Ñ�Ñ‚Ð¾Ð»")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Ð”Ð²Ð¸Ð³Ð°ÐµÐ¼Ñ�Ñ� Ð´Ð°Ð»ÑŒÑˆÐµ")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Ð�ÐºÑ‚Ð¸Ð²Ð¸Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Ð”ÐµÐ°ÐºÑ‚Ð¸Ð²Ð¸Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð° Ñ�Ñ‚Ð¾Ð»Ð°")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð° Ñ�Ð¾Ð¿Ð»Ð°")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Ð ÐµÐ´Ð°ÐºÑ‚Ð¾Ñ€ Ñ�ÐµÑ‚Ð¾Ðº")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Ð ÐµÐ´Ð°ÐºÑ‚. Ñ�Ð²Ð¾ÑŽ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Ð¢Ð¾Ñ‡Ð½Ð°Ñ� Ð½Ð°Ñ�Ñ‚Ñ€. Ñ�ÐµÑ‚ÐºÐ¸")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Ð ÐµÐ´. Ñ�ÐµÑ‚ÐºÐ¸ Ð·Ð°Ð²ÐµÑ€ÑˆÐµÐ½Ð¾")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("ÐŸÐ¾Ñ�Ñ‚Ñ€Ð¾Ð¸Ñ‚ÑŒ Ñ�Ð²Ð¾ÑŽ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("ÐŸÐ¾Ñ�Ñ‚Ñ€Ð¾Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("ÐŸÐ¾Ñ�Ñ‚Ñ€Ð¾Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("ÐŸÐ¾Ñ�Ñ‚Ñ€Ð¾Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("ÐŸÐ¾Ñ�Ñ‚Ñ€Ð¾Ð¸Ñ‚ÑŒ Ñ…Ð¾Ð». Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Ð£Ñ�Ñ‚Ð°Ð½. Ð²Ñ‹Ñ�Ð¾Ñ‚Ñƒ Ñ�ÐµÑ‚ÐºÐ¸")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Ð’Ñ‹Ñ�Ð¾Ñ‚Ð°")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("ÐŸÑ€Ð¾Ð²ÐµÑ€Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("ÐŸÑ€Ð¾Ð²ÐµÑ€Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("ÐŸÑ€Ð¾Ð²ÐµÑ€Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("ÐŸÑ€Ð¾Ð²ÐµÑ€Ð¸Ñ‚ÑŒ Ñ�Ð²Ð¾ÑŽ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_CONTINUE_MESH               _UxGT("ÐŸÑ€Ð¾Ð´Ð¾Ð»Ð¶Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_MESH_LEVELING               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Ñ�ÐµÑ‚ÐºÐ¸")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° 3-Ñ… Ñ‚Ð¾Ñ‡ÐµÐº")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Ñ€Ð°Ñ�Ñ‚ÐµÑ€Ð°")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Ð’Ñ‹Ñ€Ð¾Ð²Ð½Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_SIDE_POINTS                 _UxGT("ÐšÑ€Ð°Ð¹Ð½Ð¸Ðµ Ñ‚Ð¾Ñ‡ÐºÐ¸")
#define MSG_UBL_MAP_TYPE                    _UxGT("Ð¢Ð¸Ð¿ ÐºÐ°Ñ€Ñ‚Ñ‹")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Ð’Ñ‹Ð²ÐµÑ�Ñ‚Ð¸ ÐºÐ°Ñ€Ñ‚Ñƒ Ñ�ÐµÑ‚ÐºÐ¸")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Ð’Ñ‹Ð²ÐµÑ�Ñ‚Ð¸ Ð½Ð° Ñ…Ð¾Ñ�Ñ‚")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Ð’Ñ‹Ð²ÐµÑ�Ñ‚Ð¸ Ð² CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Ð—Ð°Ð±ÐµÐºÐ°Ð¿Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_INFO_UBL                    _UxGT("Ð’Ñ‹Ð²Ð¾Ð´ Ð¸Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ð¸Ð¸ UBL")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Ð ÐµÐ´Ð°ÐºÑ‚Ð¸Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("ÐšÐ¾Ð»-Ð²Ð¾ Ð·Ð°Ð¿Ð¾Ð»Ð½Ð¸Ñ‚ÐµÐ»Ñ�")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Ð ÑƒÑ‡Ð½Ð¾Ðµ Ð·Ð°Ð¿Ð¾Ð»Ð½ÐµÐ½Ð¸Ðµ")
#define MSG_UBL_SMART_FILLIN                _UxGT("Ð£Ð¼Ð½Ð¾Ðµ Ð·Ð°Ð¿Ð¾Ð»Ð½ÐµÐ½Ð¸Ðµ")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Ð—Ð°Ð¿Ð¾Ð»Ð½Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Ð�Ð½Ð½ÑƒÐ»Ð¸Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Ð²Ñ�Ñ‘")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Ð�Ð½Ð½ÑƒÐ»Ð¸Ñ€. Ð±Ð»Ð¸Ð¶. Ñ‚Ð¾Ñ‡ÐºÑƒ")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Ð¢Ð¾Ñ‡Ð½Ð°Ñ� Ð½Ð°Ñ�Ñ‚Ñ€. Ð²Ñ�ÐµÐ³Ð¾")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€. Ð±Ð»Ð¸Ð¶. Ñ‚Ð¾Ñ‡ÐºÐ¸")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Ð¥Ñ€Ð°Ð½Ð¸Ð»Ð¸Ñ‰Ðµ Ñ�ÐµÑ‚ÐµÐ¹")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Ð¡Ð»Ð¾Ñ‚ Ð¿Ð°Ð¼Ñ�Ñ‚Ð¸")
#define MSG_UBL_LOAD_MESH                   _UxGT("Ð—Ð°Ð³Ñ€ÑƒÐ·Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ Ñ�Ñ‚Ð¾Ð»Ð°")
#define MSG_UBL_SAVE_MESH                   _UxGT("Ð¡Ð¾Ñ…Ñ€Ð°Ð½Ð¸Ñ‚ÑŒ Ñ�ÐµÑ‚ÐºÑƒ Ñ�Ñ‚Ð¾Ð»Ð°")
#define MSG_MESH_LOADED                     _UxGT("Ð¡ÐµÑ‚ÐºÐ° %i Ð·Ð°Ð³Ñ€ÑƒÐ¶ÐµÐ½Ð°")
#define MSG_MESH_SAVED                      _UxGT("Ð¡ÐµÑ‚ÐºÐ° %i Ñ�Ð¾Ñ…Ñ€Ð°Ð½ÐµÐ½Ð°")
#define MSG_NO_STORAGE                      _UxGT("Ð�ÐµÑ‚ Ñ…Ñ€Ð°Ð½Ð¸Ð»Ð¸Ñ‰Ð°")
#define MSG_UBL_SAVE_ERROR                  _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¡Ð¾Ñ…Ñ€Ð°Ð½. UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð’Ð¾Ñ�Ñ�Ñ‚Ð°Ð½. UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Ð¡Ð¼ÐµÑ‰ÐµÐ½Ð¸Ðµ Z Ð¾Ñ�Ñ‚Ð°Ð½Ð¾Ð².")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("ÐŸÐ¾ÑˆÐ°Ð³Ð¾Ð²Ð¾Ðµ UBL")

#define MSG_LED_CONTROL                     _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ LED")
#define MSG_LEDS                            _UxGT("ÐŸÐ¾Ð´Ñ�Ð²ÐµÑ‚ÐºÑƒ")
#define MSG_LED_PRESETS                     _UxGT("ÐŸÑ€ÐµÐ´ÑƒÑ�Ñ‚Ð°Ð½Ð¾Ð²ÐºÐ¸ Ñ�Ð²ÐµÑ‚Ð°")
#define MSG_SET_LEDS_RED                    _UxGT("ÐšÑ€Ð°Ñ�Ð½Ñ‹Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_ORANGE                 _UxGT("ÐžÑ€Ð°Ð½Ð¶ÐµÐ²Ñ‹Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Ð–Ñ‘Ð»Ñ‚Ñ‹Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_GREEN                  _UxGT("Ð—ÐµÐ»Ñ‘Ð½Ñ‹Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_BLUE                   _UxGT("Ð¡Ð¸Ð½Ð¸Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Ð˜Ð½Ð´Ð¸Ð³Ð¾ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Ð¤Ð¸Ð¾Ð»ÐµÑ‚Ð¾Ð²Ñ‹Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_WHITE                  _UxGT("Ð‘ÐµÐ»Ñ‹Ð¹ Ñ�Ð²ÐµÑ‚")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Ð¡Ð²ÐµÑ‚ Ð¿Ð¾ ÑƒÐ¼Ð¾Ð»Ñ‡Ð°Ð½Ð¸ÑŽ")
#define MSG_CUSTOM_LEDS                     _UxGT("Ð¡Ð²Ð¾Ð¸ Ð½Ð°Ñ�Ñ‚Ñ€. Ñ�Ð²ÐµÑ‚Ð°")
#define MSG_INTENSITY_R                     _UxGT("Ð˜Ð½Ñ‚ÐµÐ½Ñ�Ð¸Ð²Ð½. ÐºÑ€Ð°Ñ�Ð½Ð¾Ð³Ð¾")
#define MSG_INTENSITY_G                     _UxGT("Ð˜Ð½Ñ‚ÐµÐ½Ñ�Ð¸Ð²Ð½. Ð·ÐµÐ»Ñ‘Ð½Ð¾Ð³Ð¾")
#define MSG_INTENSITY_B                     _UxGT("Ð˜Ð½Ñ‚ÐµÐ½Ñ�Ð¸Ð²Ð½. Ñ�Ð¸Ð½ÐµÐ³Ð¾")
#define MSG_INTENSITY_W                     _UxGT("Ð˜Ð½Ñ‚ÐµÐ½Ñ�Ð¸Ð²Ð½. Ð±ÐµÐ»Ð¾Ð³Ð¾")
#define MSG_LED_BRIGHTNESS                  _UxGT("Ð¯Ñ€ÐºÐ¾Ñ�Ñ‚ÑŒ")

#define MSG_MOVING                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ¼Ñ�Ñ�...")
#define MSG_FREE_XY                         _UxGT("ÐžÑ�Ð²Ð¾Ð±Ð¾Ð¶Ð´Ð°ÐµÐ¼ XY")
#define MSG_MOVE_X                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ X")
#define MSG_MOVE_Y                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Y")
#define MSG_MOVE_Z                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Z")
#define MSG_MOVE_E                          _UxGT("Ð­ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€")
#define MSG_MOVE_01MM                       _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ 0.1Ð¼Ð¼")
#define MSG_MOVE_1MM                        _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ 1Ð¼Ð¼")
#define MSG_MOVE_10MM                       _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ 10Ð¼Ð¼")
#define MSG_SPEED                           _UxGT("Ð¡ÐºÐ¾Ñ€Ð¾Ñ�Ñ‚ÑŒ")
#define MSG_BED_Z                           _UxGT("Z Ñ�Ñ‚Ð¾Ð»Ð°")
#define MSG_NOZZLE                          _UxGT("Ð¡Ð¾Ð¿Ð»Ð¾")
#define MSG_BED                             _UxGT("Ð¡Ñ‚Ð¾Ð»")
#define MSG_FAN_SPEED                       _UxGT("ÐšÑƒÐ»ÐµÑ€")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("ÐšÑƒÐ»ÐµÑ€ Ð´Ð¾Ð¿.")
#define MSG_FLOW                            _UxGT("ÐŸÐ¾Ñ‚Ð¾Ðº")
#define MSG_CONTROL                         _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ÐœÐ¸Ð½")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ÐœÐ°ÐºÑ�")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Ð¤Ð°ÐºÑ‚Ð¾Ñ€")
#define MSG_AUTOTEMP                        _UxGT("Ð�Ð²Ñ‚Ð¾Ñ‚ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°")
#define MSG_ON                              _UxGT("Ð’ÐºÐ».")
#define MSG_OFF                             _UxGT("Ð’Ñ‹ÐºÐ».")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Ð’Ñ‹Ð±Ð¾Ñ€")
#define MSG_ACC                             _UxGT("Ð£Ñ�ÐºÐ¾Ñ€ÐµÐ½Ð¸Ðµ")
#define MSG_JERK                            _UxGT("Ð Ñ‹Ð²Ð¾Ðº")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-Ñ€Ñ‹Ð²Ð¾Ðº")
  #define MSG_VB_JERK                       _UxGT("Vb-Ñ€Ñ‹Ð²Ð¾Ðº")
  #define MSG_VC_JERK                       _UxGT("Vc-Ñ€Ñ‹Ð²Ð¾Ðº")
#else
  #define MSG_VX_JERK                       _UxGT("Vx-Ñ€Ñ‹Ð²Ð¾Ðº")
  #define MSG_VY_JERK                       _UxGT("Vy-Ñ€Ñ‹Ð²Ð¾Ðº")
  #define MSG_VZ_JERK                       _UxGT("Vz-Ñ€Ñ‹Ð²Ð¾Ðº")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-Ñ€Ñ‹Ð²Ð¾Ðº")
#define MSG_VELOCITY                        _UxGT("Ð‘Ñ‹Ñ�Ñ‚Ñ€Ð¾Ñ‚Ð°")
#define MSG_VMAX                            _UxGT("VÐ¼Ð°ÐºÑ� ")
#define MSG_VMIN                            _UxGT("VÐ¼Ð¸Ð½")
#define MSG_VTRAV_MIN                       _UxGT("VÐ¿ÑƒÑ‚ÐµÑˆ. Ð¼Ð¸Ð½")
#define MSG_ACCELERATION                    _UxGT("Ð£Ñ�ÐºÐ¾Ñ€ÐµÐ½Ð¸Ðµ")
#define MSG_AMAX                            _UxGT("AÐ¼Ð°ÐºÑ� ")
#define MSG_A_RETRACT                       _UxGT("A-Ð²Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ")
#define MSG_A_TRAVEL                        _UxGT("A-Ð¿ÑƒÑ‚ÐµÑˆ.")
#define MSG_STEPS_PER_MM                    _UxGT("Ð¨Ð°Ð³/Ð¼Ð¼")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("AÑˆÐ°Ð³/Ð¼Ð¼")
  #define MSG_BSTEPS                        _UxGT("BÑˆÐ°Ð³/Ð¼Ð¼")
  #define MSG_CSTEPS                        _UxGT("CÑˆÐ°Ð³/Ð¼Ð¼")
#else
  #define MSG_ASTEPS                        _UxGT("XÑˆÐ°Ð³/Ð¼Ð¼")
  #define MSG_BSTEPS                        _UxGT("YÑˆÐ°Ð³/Ð¼Ð¼")
  #define MSG_CSTEPS                        _UxGT("ZÑˆÐ°Ð³/Ð¼Ð¼")
#endif
#define MSG_ESTEPS                          _UxGT("EÑˆÐ°Ð³/Ð¼Ð¼")
#define MSG_E1STEPS                         _UxGT("E1ÑˆÐ°Ð³/Ð¼Ð¼")
#define MSG_E2STEPS                         _UxGT("E2ÑˆÐ°Ð³/Ð¼Ð¼")
#define MSG_E3STEPS                         _UxGT("E3ÑˆÐ°Ð³/Ð¼Ð¼")
#define MSG_E4STEPS                         _UxGT("E4ÑˆÐ°Ð³/Ð¼Ð¼")
#define MSG_E5STEPS                         _UxGT("E5ÑˆÐ°Ð³/Ð¼Ð¼")
#define MSG_TEMPERATURE                     _UxGT("Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°")
#define MSG_MOTION                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ")
#define MSG_FILAMENT                        _UxGT("Ð¤Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E Ð² Ð¼Ð¼3")
#define MSG_FILAMENT_DIAM                   _UxGT("Ð”Ð¸Ð°Ð¼ÐµÑ‚Ñ€ Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Ð—Ð°Ð³Ñ€ÑƒÐ·ÐºÐ° Ð¼Ð¼")
#define MSG_FILAMENT_LOAD                   _UxGT("Ð’Ñ‹Ð³Ñ€ÑƒÐ·ÐºÐ° Ð¼Ð¼")
#define MSG_ADVANCE_K                       _UxGT("K Ð¿Ñ€Ð¾Ð´Ð²Ð¸Ð¶ÐµÐ½Ð¸Ñ�")
#define MSG_CONTRAST                        _UxGT("ÐšÐ¾Ð½Ñ‚Ñ€Ð°Ñ�Ñ‚ LCD")
#define MSG_STORE_EEPROM                    _UxGT("Ð¡Ð¾Ñ…Ñ€Ð°Ð½Ð¸Ñ‚ÑŒ Ð½Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸")
#define MSG_LOAD_EEPROM                     _UxGT("Ð—Ð°Ð³Ñ€ÑƒÐ·Ð¸Ñ‚ÑŒ Ð½Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸")
#define MSG_RESTORE_FAILSAFE                _UxGT("Ð’Ð¾Ñ�Ñ�Ñ‚Ð°Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ Ð½Ð°Ñ�Ñ‚Ñ€.")
#define MSG_INIT_EEPROM                     _UxGT("Ð˜Ð½Ð¸Ñ†Ð¸Ð°Ð»Ð¸Ð·Ð°Ñ†Ð¸Ñ� EEPROM")
#define MSG_REFRESH                         _UxGT("ÐžÐ±Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ")
#define MSG_WATCH                           _UxGT("Ð˜Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ð¸Ð¾Ð½Ð½Ñ‹Ð¹ Ñ�ÐºÑ€Ð°Ð½")
#define MSG_PREPARE                         _UxGT("ÐŸÐ¾Ð´Ð³Ð¾Ñ‚Ð¾Ð²Ð¸Ñ‚ÑŒ")
#define MSG_TUNE                            _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¸Ñ‚ÑŒ")
#define MSG_PAUSE_PRINT                     _UxGT("ÐŸÐ°ÑƒÐ·Ð° Ð¿ÐµÑ‡Ð°Ñ‚Ð¸")
#define MSG_RESUME_PRINT                    _UxGT("ÐŸÑ€Ð¾Ð´Ð¾Ð»Ð¶Ð¸Ñ‚ÑŒ Ð¿ÐµÑ‡Ð°Ñ‚ÑŒ")
#define MSG_STOP_PRINT                      _UxGT("ÐžÑ�Ñ‚Ð°Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ Ð¿ÐµÑ‡Ð°Ñ‚ÑŒ")
#define MSG_CARD_MENU                       _UxGT("ÐŸÐµÑ‡Ð°Ñ‚ÑŒ Ñ� SD ÐºÐ°Ñ€Ñ‚Ñ‹")
#define MSG_NO_CARD                         _UxGT("Ð�ÐµÑ‚ SD ÐºÐ°Ñ€Ñ‚Ñ‹")
#define MSG_DWELL                           _UxGT("Ð¡Ð¾Ð½...")
#define MSG_USERWAIT                        _UxGT("ÐŸÑ€Ð¾Ð´Ð¾Ð»Ð¶Ð¸Ñ‚ÑŒ...")
#define MSG_PRINT_PAUSED                    _UxGT("ÐŸÐµÑ‡Ð°Ñ‚ÑŒ Ð½Ð° Ð¿Ð°ÑƒÐ·Ðµ")
#define MSG_PRINTING                        _UxGT("ÐŸÐµÑ‡Ð°Ñ‚ÑŒ...")
#define MSG_PRINT_ABORTED                   _UxGT("ÐŸÐµÑ‡Ð°Ñ‚ÑŒ Ð¾Ñ‚Ð¼ÐµÐ½ÐµÐ½Ð°")
#define MSG_NO_MOVE                         _UxGT("Ð�ÐµÑ‚ Ð´Ð²Ð¸Ð¶ÐµÐ½Ð¸Ñ�.")
#define MSG_KILLED                          _UxGT("Ð£Ð‘Ð˜Ð¢Ðž. ")
#define MSG_STOPPED                         _UxGT("ÐžÐ¡Ð¢Ð�Ð�ÐžÐ’Ð›Ð•Ð�Ðž. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ Ð¼Ð¼")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ Ñ�Ð¼ÐµÐ½Ñ‹ Ð¼Ð¼")
#define MSG_CONTROL_RETRACTF                _UxGT("Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Ð’Ñ‚Ñ�Ð³. Ð¿Ñ€Ñ‹Ð¶ÐºÐ° Ð¼Ð¼")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ Ð¼Ð¼")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ Ñ�Ð¼ÐµÐ½Ñ‹ Ð¼Ð¼")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ Ñ�Ð¼ÐµÐ½Ñ‹ V")
#define MSG_AUTORETRACT                     _UxGT("Ð�Ð²Ñ‚Ð¾ Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ")
#define MSG_FILAMENTCHANGE                  _UxGT("Ð¡Ð¼ÐµÐ½Ð° Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
#define MSG_FILAMENTLOAD                    _UxGT("Ð—Ð°Ð³Ñ€ÑƒÐ·ÐºÐ° Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
#define MSG_FILAMENTUNLOAD                  _UxGT("Ð’Ñ‹Ð³Ñ€ÑƒÐ·ÐºÐ° Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Ð’Ñ‹Ð³Ñ€ÑƒÐ·Ð¸Ñ‚ÑŒ Ð²Ñ�Ñ‘")
#define MSG_INIT_SDCARD                     _UxGT("Ð˜Ð½Ð¸Ñ†. SD ÐºÐ°Ñ€Ñ‚Ñƒ")
#define MSG_CNG_SDCARD                      _UxGT("Ð¡Ð¼ÐµÐ½Ð¸Ñ‚ÑŒ SD ÐºÐ°Ñ€Ñ‚Ñƒ")
#define MSG_ZPROBE_OUT                      _UxGT("Z Ð´Ð°Ñ‚Ñ‡Ð¸Ðº Ð²Ð½Ðµ Ñ�Ñ‚Ð¾Ð»Ð°")
#define MSG_SKEW_FACTOR                     _UxGT("Ð¤Ð°ÐºÑ‚Ð¾Ñ€ Ð½Ð°ÐºÐ»Ð¾Ð½Ð°")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Ð¢ÐµÑ�Ñ‚Ð¸Ñ€Ð¾Ð²Ð°Ð½Ð¸Ðµ BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("Ð¡Ð±Ñ€Ð¾Ñ� BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Ð£Ñ�Ñ‚Ð°Ð½Ð¾Ð²ÐºÐ° BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Ð�Ð°Ð±Ð¸Ð²ÐºÐ° BLTouch")
#define MSG_HOME                            _UxGT("ÐŸÐ°Ñ€ÐºÑƒÐ¹") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("Ð¿ÐµÑ€Ð²Ñ‹Ð¹")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Ð¡Ð¼ÐµÑ‰ÐµÐ½Ð¸Ðµ Z")
#define MSG_BABYSTEP_X                      _UxGT("ÐœÐ¸ÐºÑ€Ð¾ÑˆÐ°Ð³ X")
#define MSG_BABYSTEP_Y                      _UxGT("ÐœÐ¸ÐºÑ€Ð¾ÑˆÐ°Ð³ Y")
#define MSG_BABYSTEP_Z                      _UxGT("ÐœÐ¸ÐºÑ€Ð¾ÑˆÐ°Ð³ Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Ð¡Ñ€Ð°Ð±Ð¾Ñ‚Ð°Ð» ÐºÐ¾Ð½Ñ†ÐµÐ²Ð¸Ðº")
#define MSG_HEATING_FAILED_LCD              _UxGT("Ð Ð°Ð·Ð¾Ð³Ñ€ÐµÐ² Ð½Ðµ ÑƒÐ´Ð°Ð»Ñ�Ñ�")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Ð Ð°Ð·Ð¾Ð³Ñ€. Ñ�Ñ‚Ð¾Ð»Ð° Ð½Ðµ ÑƒÐ´.")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð˜Ð·Ð±Ñ‹Ñ‚Ð¾Ñ‡Ð½Ð°Ñ� Ð¢")
#define MSG_THERMAL_RUNAWAY                 _UxGT("Ð£Ð‘Ð•Ð“Ð�Ð�Ð˜Ð• Ð¢Ð•ÐŸÐ›Ð�")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("Ð£Ð‘Ð•Ð“Ð�Ð�Ð˜Ð• Ð¢Ð•ÐŸÐ›Ð� Ð¡Ð¢ÐžÐ›Ð�")
#define MSG_ERR_MAXTEMP                     _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¢ Ð¼Ð°ÐºÑ�.")
#define MSG_ERR_MINTEMP                     _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¢ Ð¼Ð¸Ð½.")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¢ Ñ�Ñ‚Ð¾Ð»Ð° Ð¼Ð°ÐºÑ�")
#define MSG_ERR_MINTEMP_BED                 _UxGT("ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¢ Ñ�Ñ‚Ð¾Ð»Ð° Ð¼Ð¸Ð½.")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("ÐŸÐ Ð˜Ð�Ð¢Ð•Ð  ÐžÐ¡Ð¢Ð�Ð�ÐžÐ’Ð›Ð•Ð�")
#define MSG_PLEASE_RESET                    _UxGT("Ð¡Ð´ÐµÐ»Ð°Ð¹Ñ‚Ðµ Ñ�Ð±Ñ€Ð¾Ñ�")
#define MSG_SHORT_DAY                       _UxGT("Ð´") // One character only
#define MSG_SHORT_HOUR                      _UxGT("Ñ‡") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("Ð¼") // One character only
#define MSG_HEATING                         _UxGT("Ð�Ð°Ð³Ñ€ÐµÐ²...")
#define MSG_COOLING                         _UxGT("ÐžÑ…Ð»Ð°Ð¶Ð´ÐµÐ½Ð¸Ðµ...")
#define MSG_BED_HEATING                     _UxGT("Ð�Ð°Ð³Ñ€ÐµÐ² Ñ�Ñ‚Ð¾Ð»Ð°...")
#define MSG_BED_COOLING                     _UxGT("ÐžÑ…Ð»Ð°Ð¶Ð´ÐµÐ½Ð¸Ðµ Ñ�Ñ‚Ð¾Ð»Ð°...")
#define MSG_DELTA_CALIBRATE                 _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Ñ†ÐµÐ½Ñ‚Ñ€")
#define MSG_DELTA_SETTINGS                  _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ Delta")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Ð�Ð²Ñ‚Ð¾ ÐºÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ°")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Ð—Ð°Ð´Ð°Ñ‚ÑŒ Ð²Ñ‹Ñ�Ð¾Ñ‚Ñƒ Delta")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Ð—Ð°Ð´Ð°Ñ‚ÑŒ Z-Ñ�Ð¼ÐµÑ‰ÐµÐ½Ð¸Ðµ")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Ð”Ð¸Ð°Ð³. Ñ�Ñ‚ÐµÑ€Ð¶ÐµÐ½ÑŒ")
#define MSG_DELTA_HEIGHT                    _UxGT("Ð’Ñ‹Ñ�Ð¾Ñ‚Ð°")
#define MSG_DELTA_RADIUS                    _UxGT("Ð Ð°Ð´Ð¸ÑƒÑ�")
#define MSG_INFO_MENU                       _UxGT("Ðž Ð¿Ñ€Ð¸Ð½Ñ‚ÐµÑ€Ðµ")
#define MSG_INFO_PRINTER_MENU               _UxGT("Ð˜Ð½Ñ„. Ð¾ Ð¿Ñ€Ð¸Ð½Ñ‚ÐµÑ€Ðµ")
#define MSG_3POINT_LEVELING                 _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° 3-Ñ… Ñ‚Ð¾Ñ‡ÐµÐº")
#define MSG_LINEAR_LEVELING                 _UxGT("Ð›Ð¸Ð½ÐµÐ¹Ð½Ð°Ñ� ÐºÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ°")
#define MSG_BILINEAR_LEVELING               _UxGT("Ð‘Ð¸Ð»Ð¸Ð½ÐµÐ¹Ð½Ð°Ñ� ÐºÐ°Ð»Ð¸Ð±Ñ€.")
#define MSG_UBL_LEVELING                    _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° UBL")
#define MSG_MESH_LEVELING                   _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Ñ�ÐµÑ‚ÐºÐ¸")
#define MSG_INFO_STATS_MENU                 _UxGT("Ð¡Ñ‚Ð°Ñ‚Ð¸Ñ�Ñ‚Ð¸ÐºÐ° Ð¿Ñ€Ð¸Ð½Ñ‚ÐµÑ€Ð°")
#define MSG_INFO_BOARD_MENU                 _UxGT("Ð˜Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ð¸Ñ� Ð¾ Ð¿Ð»Ð°Ñ‚Ðµ")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Ð¢ÐµÑ€Ð¼Ð¸Ñ�Ñ‚Ð¾Ñ€Ñ‹")
#define MSG_INFO_EXTRUDERS                  _UxGT("Ð­ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€Ñ‹")
#define MSG_INFO_BAUDRATE                   _UxGT("Ð‘Ð¾Ð´")
#define MSG_INFO_PROTOCOL                   _UxGT("ÐŸÑ€Ð¾Ñ‚Ð¾ÐºÐ¾Ð»")
#define MSG_CASE_LIGHT                      _UxGT("ÐŸÐ¾Ð´Ñ�Ð²ÐµÑ‚ÐºÐ° ÐºÐ¾Ñ€Ð¿ÑƒÑ�Ð°")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Ð¯Ñ€ÐºÐ¾Ñ�Ñ‚ÑŒ Ð¿Ð¾Ð´Ñ�Ð²ÐµÑ‚ÐºÐ¸")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Ð¡Ñ‡Ñ‘Ñ‚Ñ‡Ð¸Ðº Ð¿ÐµÑ‡Ð°Ñ‚Ð¸")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Ð—Ð°ÐºÐ¾Ð½Ñ‡ÐµÐ½Ð¾")
  #define MSG_INFO_PRINT_TIME               _UxGT("ÐžÐ±Ñ‰ÐµÐµ Ð²Ñ€ÐµÐ¼Ñ� Ð¿ÐµÑ‡Ð°Ñ‚Ð¸")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Ð�Ð°Ð¸Ð´Ð¾Ð»ÑŒÑˆÐµÐµ Ð·Ð°Ð´Ð°Ð½Ð¸Ðµ")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Ð”Ð»Ð¸Ð½Ð½Ð° Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("ÐžÑ‚Ð¿ÐµÑ‡Ð°Ñ‚ÐºÐ¾Ð²")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Ð—Ð°ÐºÐ¾Ð½Ñ‡ÐµÐ½Ð¾")
  #define MSG_INFO_PRINT_TIME               _UxGT("Ð’Ñ�ÐµÐ³Ð¾")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Ð�Ð°Ð¸Ð´Ð¾Ð»ÑŒÑˆÐµÐµ")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Ð’Ñ‹Ð´Ð°Ð²Ð»ÐµÐ½Ð¾")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("ÐœÐ¸Ð½. Ð¢")
#define MSG_INFO_MAX_TEMP                   _UxGT("ÐœÐ°ÐºÑ�. Ð¢")
#define MSG_INFO_PSU                        _UxGT("Ð‘Ð»Ð¾Ðº Ð¿Ð¸Ñ‚Ð°Ð½Ð¸Ñ�")
#define MSG_DRIVE_STRENGTH                  _UxGT("Ð¡Ð¸Ð»Ð° Ð¿Ñ€Ð¸Ð²Ð¾Ð´Ð°")
#define MSG_DAC_PERCENT                     _UxGT("ÐŸÑ€Ð¸Ð²Ð¾Ð´ %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Ð—Ð°Ð¿Ð¸Ñ�ÑŒ DAC EEPROM")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("ÐŸÐ•Ð§Ð�Ð¢Ð¬ Ð�Ð� ÐŸÐ�Ð£Ð—Ð•")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("Ð—Ð�Ð“Ð Ð£Ð—ÐšÐ� Ð¤Ð˜Ð›Ð�ÐœÐ•Ð�Ð¢Ð�")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("Ð’Ð«Ð“Ð Ð£Ð—ÐšÐ� Ð¤Ð˜Ð›Ð�ÐœÐ•Ð�Ð¢Ð�")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("ÐžÐŸÐ¦Ð˜Ð˜ Ð’ÐžÐ—ÐžÐ‘Ð�ÐžÐ’Ð›Ð•Ð�Ð˜Ð¯:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Ð’Ñ‹Ð´Ð°Ð²Ð¸Ñ‚ÑŒ ÐµÑ‰Ñ‘")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Ð’Ð¾Ð·Ð¾Ð±Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ Ð¿ÐµÑ‡Ð°Ñ‚ÑŒ")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Ð¡Ð¾Ð¿Ð»Ð°: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ Ð½Ðµ ÑƒÐ´Ð°Ð»Ñ�Ñ�")
#define MSG_ERR_PROBING_FAILED              _UxGT("Ð�Ðµ ÑƒÐ´Ð°Ð»Ð¾Ñ�ÑŒ Ð¿Ñ€Ð¾Ñ‰ÑƒÐ¿Ð°Ñ‚ÑŒ")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Ð�Ð¸Ð·ÐºÐ°Ñ� Ð¢")

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("ÐžÐ¶Ð¸Ð´Ð°Ð¹Ñ‚Ðµ")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("Ð½Ð°Ñ‡Ð°Ð»Ð° Ñ�Ð¼ÐµÐ½Ñ‹")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("ÐžÐ¶Ð¸Ð´Ð°Ð¹Ñ‚Ðµ")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("Ð²Ñ‹Ð³Ñ€ÑƒÐ·ÐºÐ¸")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      _UxGT("Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Ð’Ñ�Ñ‚Ð°Ð²ÑŒÑ‚Ðµ Ð¿Ñ€ÑƒÑ‚Ð¾Ðº")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("Ð¸ Ð½Ð°Ð¶Ð¼Ð¸Ñ‚Ðµ ÐºÐ½Ð¾Ð¿ÐºÑƒ")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("Ð´Ð»Ñ� Ð¿Ñ€Ð¾Ð´Ð¾Ð»Ð¶ÐµÐ½Ð¸Ñ�")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Ð�Ð°Ð¶Ð¼Ð¸Ñ‚Ðµ ÐºÐ½Ð¾Ð¿ÐºÑƒ Ð´Ð»Ñ�")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("Ð½Ð°Ð³Ñ€ÐµÐ²Ð° Ñ�Ð¾Ð¿Ð»Ð°...")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Ð�Ð°Ð³Ñ€ÐµÐ² Ñ�Ð¾Ð¿Ð»Ð°")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Ð–Ð´Ð¸Ñ‚Ðµ...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("ÐžÐ¶Ð¸Ð´Ð°Ð¹Ñ‚Ðµ")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("Ð·Ð°Ð³Ñ€ÑƒÐ·ÐºÐ¸ Ð¿Ñ€ÑƒÑ‚ÐºÐ°")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("ÐžÐ¶Ð¸Ð´Ð°Ð¹Ñ‚Ðµ")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("Ñ�ÐºÑ�Ñ‚Ñ€ÑƒÐ·Ð¸Ð¸")
  #define MSG_FILAMENT_CHANGE_PURGE_3       _UxGT("Ñ„Ð¸Ð»Ð°Ð¼ÐµÐ½Ñ‚Ð°")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("ÐžÐ¶Ð¸Ð´Ð°Ð¹Ñ‚Ðµ")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("Ð²Ð¾Ð·Ð¾Ð±Ð½Ð¾Ð²Ð»ÐµÐ½Ð¸Ñ�")
  #define MSG_FILAMENT_CHANGE_RESUME_3      _UxGT("Ð¿ÐµÑ‡Ð°Ñ‚Ð¸")
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("ÐžÐ¶Ð¸Ð´Ð°Ð¹Ñ‚Ðµ...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Ð’Ñ‹Ð³Ñ€ÑƒÐ·ÐºÐ°...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Ð’Ñ�Ñ‚Ð°Ð²ÑŒ Ð¸ Ð½Ð°Ð¶Ð¼Ð¸")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Ð�Ð°Ð³Ñ€ÐµÐ²...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Ð—Ð°Ð³Ñ€ÑƒÐ·ÐºÐ°...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Ð’Ñ‹Ð´Ð°Ð²Ð»Ð¸Ð²Ð°Ð½Ð¸Ðµ...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Ð’Ð¾Ð·Ð¾Ð±Ð½Ð¾Ð²Ð»ÐµÐ½Ð¸Ðµ...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_RU_H
