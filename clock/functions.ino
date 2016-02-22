//Function to print time in HH:MM:SS format

void printTime() {
  lcd.setCursor(0, 1);
  
  lcd.print(hour());
  
  lcd.print(":");
  if (minute() < 10){
    lcd.print("0");
    lcd.print(minute());
  }
  else{
    lcd.print(minute());
  }
  
  lcd.print(":");
  
  if (second() < 10){
    lcd.print("0");
    lcd.print(second());
  }
  else{
    lcd.print(second());
  } 
}

//Function to print alarm time and increase time based on button input

void printAlarm(){

  lcd.setCursor(0,0);
  lcd.print("Alarm");
  lcd.setCursor(0, 1);
  lcd.print(alarmHour);
  lcd.print(":");
  if (alarmMinute < 10){
  lcd.print("0");
  lcd.print(alarmMinute);
  }
  else{
    lcd.print(alarmMinute);
  }

  if (digitalRead(hourButton) == HIGH){
    alarmHour++;
    if (alarmHour >= 24){
      alarmHour = 0;
    }
  }
  
  if (digitalRead(minuteButton) == HIGH){
    alarmMinute++;
    if (alarmMinute >= 59){
      alarmMinute = 0;
      }
  }
  delay(150);
  }

 //Function to change clock time

 void changeTime(){
 //set time current
 int newHour = hour();
 int newMinute = minute();

 //display the time
  lcd.setCursor(0,0);
  lcd.print("Set the time");
  lcd.setCursor(0,1);

  lcd.print(newHour);
  
  lcd.print(":");
  if (newMinute < 10){
    lcd.print ("0");
    lcd.print(newMinute);
  }
  else{
    lcd.print(newMinute);
  }
//change time based on input
    
    if (digitalRead(hourButton) == HIGH){
    newHour++;
    if (newHour >= 24){
      newHour = 0;
    }
  }
  
  if (digitalRead(minuteButton) == HIGH){
    newMinute++;
    if (newMinute >= 59){
      newMinute = 0;
      }
  }
  setTime(newHour,newMinute,0,0,0,0);
  
  delay(150);
  
}

