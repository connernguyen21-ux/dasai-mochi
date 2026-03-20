#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "draw.h"
#include "bitmap.h"
#include "config.h"

void startupFace() {
    display.clearDisplay();
    display.drawBitmap(2, 2, fullFace, 124, 60, SSD1306_WHITE);
    display.display();
}

void blinklogic() {
    
    display.clearDisplay();
    display.drawBitmap(2, 2, halfwayBlink, 124, 60, SSD1306_WHITE);
    display.display();
    delay(50);

    display.clearDisplay();
    display.drawBitmap(2, 2, fullBlink, 124, 60, SSD1306_WHITE);
    display.display();
    delay(50);

    display.clearDisplay();
    display.drawBitmap(2, 2, halfwayBlink, 124, 60, SSD1306_WHITE);
    display.display();
    delay(50);

    display.clearDisplay();
    display.drawBitmap(2, 2, fullFace, 124, 60, SSD1306_WHITE);
    display.display();
    delay(50);

}
void blink() {
      //Blink logic
  unsigned long currentMillis = millis();
  if (currentMillis - lastBlink >= blinkInterval) {
    lastBlink = currentMillis;
    blinklogic();
    blinkInterval = random(2000, 10000); // Randomize next interval: 2-10 seconds
}
}

