#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "setup.h"
#include "draw.h"

extern Adafruit_SSD1306 display;
#define SDA_PIN 13
#define SCL_PIN 12

void Setup() {
  //Setup for 12C and OLED Display
  Serial.begin(115200);
  Wire.begin(SDA_PIN, SCL_PIN);
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
}