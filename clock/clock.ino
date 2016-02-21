
// include the library code:
#include <LiquidCrystal.h>
#include <Time.h>
int alarmButton = 2;
int timeButton = 13;
int hourButton = 10;
int minuteButton = 11;
int mode = 2;
int alarm = 3;
int alarmHour;
int alarmMinute;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(alarmButton, INPUT);
  pinMode(timeButton, INPUT);
  pinMode(hourButton, INPUT);
  pinMode(minuteButton, INPUT);
  digitalWrite(minuteButton, LOW);
   
}

void loop() {

//Determine if in time, change time, or alarm mode
  
  if (digitalRead(alarmButton) == HIGH) {
    mode = 2;
  }

  else if (digitalRead(timeButton) == HIGH){
    mode = 3;  
  }
  else {
    mode = 1;
  }

//Mode 1: tell time
  if (mode == 1) {
  lcd.clear();
  printTime();
  delay (1000);
  }
//Mode 2: change alarm  
  else if (mode == 2){
    lcd.clear();
    printAlarm();
  }
//Mode 3: change time
  else if (mode == 3){
    lcd.clear();
    changeTime();
  }
if (alarmHour == hour() && alarmMinute == minute() && millis()/1000 % 2 == 1){
  digitalWrite(alarm, HIGH);
}
  else{
    digitalWrite(alarm, LOW);
  }


}

