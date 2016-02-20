#include <LiquidCrystal.h> 
LiquidCrystal lcd( 4, 5, 6, 7, 8, 9); 
// pins for RS, E, DB4, DB5, DB6, DB7 
void setup() { 
  lcd.begin(16, 2); 
  lcd.clear(); 
} 
void loop() { 
  lcd.setCursor(5, 0); 
  lcd.print(" Hello"); 
  lcd.setCursor(6, 1); 
  lcd.print(" world!"); 
  delay(10000); 
}





