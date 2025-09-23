// clang-format off
// upload_speed 115200
// board esp32dev

#ifndef _CYD24_H
#define _CYD24_H

#include <stdint.h>

// Hardware related definitions for CYD 2.4 inch board

#define DISABLE_BROWNOUT 1 // comment out if you want to keep brownout feature

#define HAS_LED (16) // on board  LED
#define HAS_BUTTON (0) // on board button

#endif // _CYD24_H