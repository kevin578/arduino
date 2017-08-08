int getDistance(int trig, int echo, int unit) {

  long duration;



  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  if (unit == "in") {
    return duration / 74 / 2;
  }

  else if (unit == "cm") {
    return duration / 29 / 2; 
  }

  else {
    return duration;
  }
  
  
}




