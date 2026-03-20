#include "config.h"

//Blinking Logic Variables
unsigned long lastBlink = 0;
unsigned long blinkInterval = 5000; // Start with 5s, then randomize

//Breathing Logic Variables
unsigned long lastBreath = 0;
unsigned long breathInterval = 5000; // Start with 5s, then randomize