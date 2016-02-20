
//determines if reed switch is open or closed
void getReedState() {
  float reed = analogRead(0);
  if (reed >1000){
    reedState = 1;
  }
  else {
    reedState = 0;
  }
}

//Counts number and speed of rotations. 

void rotationInfo(){
    /* If the reed is closed and check is 0, rotationCount
    will increase and it will set the check back to 0*/
    if (reedState == 1 && check == 1){
      rotationCount += 1;
      check = 0;
      finish = millis();
      rotationTime = finish - start;
      start = millis();

    }
    /*Once reed is open again set check to 1 and wait for it to
    close again.*/
    if (reedState == 0){
      check = 1;
      }
    }

  
void rotationMath(){
    float circumference = 26 * 3.14159;
    totalDistance = (rotationCount * circumference)/12/5280;
    
    //convert inches per second to miles per hour
    mph = (circumference/(rotationTime/1000)) * 0.0568182;
    
}
void display(){
  lcd.setCursor(0,0);
  lcd.print(mph);
  lcd.print(" MPH");
  if (mph < 10){
    lcd.print(" ");
  }
  lcd.setCursor(0,1);
  lcd.print("Distance:");
  lcd.setCursor(11,1);
  lcd.print(totalDistance);
}


