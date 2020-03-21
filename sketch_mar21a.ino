#include <Wire.h>  // нужна только для Arduino 1.6.5 и старее
#include "SSD1306.h" // сокращенный вариант для #include "SSD1306Wire.h"

SSD1306  display(0x3c, D3, D5);

void setup(){
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_16);
  display.setTextAlignment(TEXT_ALIGN_LEFT);
}

void displayTempHumid(){
  double h = 2233.445;
  display.clear();
  display.drawString(0, 0, String(h)); 
  display.drawString(0, 14, String(h));
                        
}
void loop(){
  displayTempHumid();
  display.display();
  delay(2000);
}
