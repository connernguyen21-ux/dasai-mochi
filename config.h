#ifndef CONFIG_H
#define CONFIG_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

// Display size
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// I2C Pins
#define SDA_PIN 13
#define SCL_PIN 12

//Blinking Logic Variables
extern unsigned long lastBlink;
extern unsigned long blinkInterval;

// Declare display so other files can access it
extern Adafruit_SSD1306 display;

#endif