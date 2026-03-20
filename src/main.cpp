//Started 2026-03-07 
//Conner Nguyen Personal Project: Dasai Mochi
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "draw.h"
#include "setup.h"
#include "config.h" 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Setup();
  startupFace();
}

void loop() {
  blink();
  }

