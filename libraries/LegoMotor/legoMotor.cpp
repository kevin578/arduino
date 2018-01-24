#include "Arduino.h"
#include "LegoMotor.h"
#include <Encoder.h>


LegoMotor::LegoMotor(int forward, int back, int A, int B, int PWM) {
  forwardPin = forward;
  backwardPin = back;
  rotA = A;
  rotB = B;
  pwmPin = PWM;
  Encoder myEnc(rotA, rotB);
}

Encoder::myEnc(uint8_t pin1, uint8_t pin2) {
  rotA = A;
  rotB = B;
}

void LegoMotor::setSpeed(int speed) {
  analogWrite(pwmPin, speed);
}

void LegoMotor::attach() {
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
  pinMode(pwmPin, OUTPUT);
  pinMode(rotA, INPUT);
  pinMode(rotB, INPUT);
  Serial.begin (9600);
}

void LegoMotor::write(int target) {

  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }


if (target - counter > 0) {

  if (counter < target) {
    digitalWrite(forwardPin, HIGH);
    Serial.println(counter);
}
  else {
    digitalWrite(forwardPin, LOW);
  }
}

/*else if (target - counter < 0) {
  Serial.println("Go low");
  if (counter > target) {
    digitalWrite(backwardPin, HIGH);
    Serial.println(counter);
}
  else {
    digitalWrite(backwardPin, LOW);
  }
}*/
 }

 static void LegoMotor::countPin() {
   Serial.println("Interupt");
 }
