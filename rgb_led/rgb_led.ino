void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(255, 0, 255);  // purple
  delay(1000);


}


void setColor (int red,int green,int blue) {

  
  analogWrite(11, green);
  analogWrite(12, blue);
  analogWrite(13, red);
}
