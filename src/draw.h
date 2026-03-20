#ifndef PET_DISPLAY_H
#define PET_DISPLAY_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "bitmap.h"

extern Adafruit_SSD1306 display;

void startupFace();
void blinklogic();
void blink();
#endif