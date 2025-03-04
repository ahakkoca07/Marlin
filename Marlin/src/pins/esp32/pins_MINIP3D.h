/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * MINIP3D pin assignments
 *
 * 3D printer control board based on the ESP32 microcontroller.
 * Supports 4 stepper drivers (using I2S stepper stream), heated bed,
 * single hotend, and OLED controller.
 */

#include "env_validate.h"

#if EXTRUDERS > 1 || E_STEPPERS > 1
  #error "MINIP3D supports only 1 E stepper."
#elif HAS_MULTI_HOTEND
  #error "MINIP3D only supports 1 hotend / E stepper."
#endif

#define BOARD_INFO_NAME      "MINIP3D"
#define BOARD_WEBSITE_URL    "github.com/ahakkoca07/minip_printer"
#define DEFAULT_MACHINE_NAME BOARD_INFO_NAME

//
// Limit Switches
//
#define X_STOP_PIN                            39
#define Y_STOP_PIN                            34
#define Z_STOP_PIN                            35

//
// Enable I2S stepper stream
//
#define I2S_STEPPER_STREAM
#if ENABLED(I2S_STEPPER_STREAM)
  #define I2S_WS                              26
  #define I2S_BCK                             25
  #define I2S_DATA                            27
#endif

//
// Steppers
//
#define X_STEP_PIN                           128
#define X_DIR_PIN                            129
#define X_ENABLE_PIN                         130

#define Y_STEP_PIN                           131
#define Y_DIR_PIN                            132
#define Y_ENABLE_PIN                         133

#define Z_STEP_PIN                           134
#define Z_DIR_PIN                            135
#define Z_ENABLE_PIN                         136

#define E0_STEP_PIN                          137
#define E0_DIR_PIN                           138
#define E0_ENABLE_PIN                        139

//
// Temperature Sensors
//
#define TEMP_0_PIN                            36  // Analog Input
//#define TEMP_BED_PIN                          -1  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                          19
#define FAN_PIN                               18
//#define HEATER_BED_PIN                        -1

//
// MicroSD card
//
#define SD_MOSI_PIN                           13
#define SD_MISO_PIN                           12
#define SD_SCK_PIN                            14
#define SDSS                                  15

//////////////////////////
// LCDs and Controllers //
//////////////////////////
#define I2C_SCL_PIN                           22
#define I2C_SDA_PIN                           21

#define BEEPER_PIN                            23

#define BTN_EN1                                5
#define BTN_EN2                               17
#define BTN_ENC                               16

//
//Miscellaneous
//
#define FIL_RUNOUT_PIN                         4
#define PS_ON_PIN                            140  // Power Supply
#define NEOPIXEL_PIN                         141  // Neopixels

