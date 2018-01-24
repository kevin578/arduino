#include <LiquidCrystal.h>
#include <Wire.h>
#include <SparkFunDS1307RTC.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  // put your setup code here, to run once:
  rtc.begin();
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  rtc.update();
  Serial.print(rtc.minute());
  lcd.clear();
  lcd.print(rtc.minute());
  delay(1000);
}
