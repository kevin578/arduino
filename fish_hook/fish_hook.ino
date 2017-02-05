#include <Servo.h>

Servo hook;

void setup() {
  // put your setup code here, to run once:
  hook.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  hook.write(90);
}
