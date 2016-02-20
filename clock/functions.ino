void printTime() {
  lcd.setCursor(0, 1);
  
  lcd.print(hours);
  
  lcd.print(":");
  if (minutes < 10){
    lcd.print("0");
    lcd.print(minutes);
  }
  else{
    lcd.print(minutes);
  }
  
  lcd.print(":");
  
  if (seconds < 10){
    lcd.print("0");
    lcd.print(seconds);
  }
  else{
    lcd.print(seconds);
  } 
}

