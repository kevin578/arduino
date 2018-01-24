#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup(){
    lcd.begin(16, 2);
    lcd.print("hello");
}

void loop() {
      lcd.setCursor(0, 1);
      lcd.print(millis() / 1000);
}