#include <LiquidCrystal.h>
const int rs = 8, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


 
void setup() {
  // put your setup code here, to run once:
 lcd.begin(16, 2);
 pinMode(10, OUTPUT);
 pinMode(13, OUTPUT);
 Serial.begin(9600);
 //pinMode(2, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(2), coinCollect, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
   lcd.setCursor(1, 0);
   lcd.print("Please insert ");
   lcd.setCursor(4,1);
   lcd.print("50 cents");
   analogWrite(10,50);
  moveMotor();
  delay(5000);
}

void countChange(){
Serial.println("Coin");
}

void moveMotor(){
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
}

void coinCollect() {
  Serial.println("coin accepted");
}





