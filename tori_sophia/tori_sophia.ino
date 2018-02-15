#include <LiquidCrystal.h>
const int rs = 8, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


int moneyNeeded = 50;
 
void setup() {
  // put your setup code here, to run once:
 lcd.begin(16, 2);
 pinMode(10, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
 Serial.begin(9600);
 pinMode(2, INPUT_PULLUP);
 pinMode(A0, INPUT_PULLUP);
 pinMode(A1, INPUT_PULLUP);
 // create an attactInterupt.
  attachInterrupt(digitalPinToInterrupt(2), coinCollect, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:

     
   if (moneyNeeded == 50) {
    lcd.setCursor(1, 0);
    lcd.print("Please insert ");
    lcd.setCursor(4,1);
    lcd.print("50 cents");
   }
 else if( moneyNeeded == 25) {
    lcd.setCursor(1, 0);
    lcd.print("Please insert ");
    lcd.setCursor(4,1);
    lcd.print("25 cents");
 }
 else if(moneyNeeded == 0) {
    lcd.setCursor(1, 0);
    lcd.print("select snack ");
    lcd.setCursor(4,1);
    lcd.print("        ");
  
  if(digitalRead(A0) == LOW) {
     moveMotor(12);
     moneyNeeded = 50;
  }
  if(digitalRead(A1) == LOW) {
    moveMotor(13);
    moneyNeeded = 50;
  }

 }
}


void moveMotor(int pinNumber){
  analogWrite(10,50);
  digitalWrite(pinNumber,HIGH);
  delay(2000);
  digitalWrite(pinNumber,LOW);
}

void coinCollect(){
  if(moneyNeeded > 0) {
  moneyNeeded = moneyNeeded - 5; 
  }
}








