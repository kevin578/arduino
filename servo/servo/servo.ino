#include <Servo.h>

Servo mrbriggs;


void setup() {
  // put your setup code here, to run once:
 mrbriggs.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

mrbriggs.write(90);
  
}
