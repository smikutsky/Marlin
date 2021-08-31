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
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'Status.png'
 */
#pragma once

#define STATUS_LOGO_WIDTH 24

const unsigned char status_logo_bmp[] PROGMEM = {
  B00011111,B11111111,B11100000,
  B01110101,B01010101,B01000000,
  B01101010,B10101010,B11000000,
  B11010101,B01010101,B10000000,
  B10101111,B11111111,B00000000,
  B11011000,B11111000,B00000000,
  B10101111,B11111110,B00000000,
  B11010101,B11111101,B11000000,
  B10101010,B11111010,B11000000,
  B01010101,B11111101,B01100000,
  B00111010,B11111010,B10100000,
  B00001111,B11111111,B01100000,
  B00000000,B11111001,B10010000,
  B00000000,B11111011,B01110000,
  B00011111,B11111110,B10100000,
  B00110101,B01010101,B01100000,
  B01101010,B10101010,B10100000,
  B01010101,B01010101,B11000000,
  B11111111,B11111111,B00000000,
  B00000000,B11111111,B11111111,
  B00000000,B11111111,B11111111,
  B00000000,B11111111,B11111110,
  B00000000,B11111111,B11111100,
  B00000000,B11111111,B11111100
};



//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
