#include <LiquidCrystal.h>
LiquidCrystal lcd(4,5,6,7,8,9);

void setup() {
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  lcd.setCursor(5,0);
  lcd.print("It's");
  lcd.setCursor(6,1);
  lcd.print("Kevin!");
  delay(1000);
  lcd.clear();
}
