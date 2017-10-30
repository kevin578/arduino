#include "Arduino.h"
#include "LegoMotor.h"


LegoMotor::LegoMotor(int forward, int back, int A, int B) {
  forwardPin = forward;
  backwardPin = back;
  rotA = A;
  rotB = B;
}



void LegoMotor::attach() {
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
  pinMode(rotA, INPUT);
  pinMode(rotB, INPUT);
  Serial.begin (9600);
  aLastState = digitalRead(rotA);


}

void LegoMotor::write(int target) {

  aState = digitalRead(rotA); // Reads the "current" state of the outputA
  // If the previous and the current state of the outputA are different, that means a Pulse has occured
  if (aState != aLastState){
    // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
    if (digitalRead(rotB) != aState) {
      counter ++;
    } else {
      counter --;
    }
    Serial.print("Position: ");
    Serial.println(counter);
  }

if (target - counter >= 0) {

  digitalWrite(forwardPin, HIGH);
  Serial.println("1");
  if (counter > target) {
    Serial.println("2");
    digitalWrite(forwardPin, LOW);
  }
}

/*else if (target - counter < 0) {
  Serial.println("3");
  digitalWrite(backwardPin, HIGH);

if (counter < target) {
    Serial.println("4");
    digitalWrite(backwardPin, LOW);
  }
}*/


    aLastState = aState;
}
