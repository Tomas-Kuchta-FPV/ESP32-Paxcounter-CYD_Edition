// clang-format off
// upload_speed 115200
// board esp32dev

#ifndef _CYD24_H
#define _CYD24_H

#include <stdint.h>

// Hardware related definitions for CYD boards

// Display Settings
#define HAS_DISPLAY 2   // TFT-LCD
// uncomment one of the following to select the CYD type
// #define TFT_TYPE DISPLAY_CYD        // For classic CYD (commented out by default)
#define TFT_TYPE DISPLAY_CYD_24R    // For newer CYD 2.4" (defined below)

// Provide a header-side definition for DISPLAY_CYD_24R so it matches
// the newer bb_spi_lcd init signature for the CYD 2.4" module.
// This way users can simply toggle the TFT_TYPE line above to pick the panel.
#ifndef DISPLAY_CYD_24R
// Display dimensions (native orientation)
#define MY_DISPLAY_WIDTH 320
#define MY_DISPLAY_HEIGHT 240

// SPI pins for CYD 2.4" module (match newer bb_spi_lcd DISPLAY_CYD_24R)
#define TFT_MOSI GPIO_NUM_13   // SPI MOSI
#define TFT_MISO GPIO_NUM_12   // SPI MISO
#define TFT_SCLK GPIO_NUM_14   // SPI SCLK
#define TFT_CS   GPIO_NUM_15   // Chip select control (CS)
#define TFT_DC   GPIO_NUM_2      // Data/Command control (DC)
// Module does not use a reset pin; indicate with -1 in init
#define TFT_RST -1
#define TFT_BL   GPIO_NUM_27   // LED back-light
#define TFT_FREQUENCY 40000000

#define DISPLAY_CYD_24R LCD_ST7789, FLAGS_INVERT, TFT_FREQUENCY, TFT_CS, TFT_DC, TFT_RST, TFT_BL, TFT_MISO, TFT_MOSI, TFT_SCLK
#endif

// If the user didn't uncomment a TFT_TYPE above, default to the classic preset
#ifndef TFT_TYPE
#define TFT_TYPE DISPLAY_CYD
#endif


#define DISABLE_BROWNOUT 1 // comment out if you want to keep brownout feature

#define HAS_LED (16) // on board  LED
#define HAS_BUTTON (0) // on board button

#endif // _CYD24_H