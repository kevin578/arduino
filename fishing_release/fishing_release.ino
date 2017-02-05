#include <Servo.h>

Servo line_release;
int ch5;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT);
  line_release.attach(5);
  Serial.begin(9600);
  
}

void loop() {
  ch5 = pulseIn(6, HIGH, 25000);
  //up and locked
  if (ch5 < 1500){
    line_release.write(163);
  }
  //down and release
  else {
    line_release.write(60);
  }
  delay(100);
  
  
}
