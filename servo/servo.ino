
#include <Servo.h>

Servo motor;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 motor.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = analogRead(0);
  Serial.println(input);
  delay(50);
  
  motor.write(input/6);
}
