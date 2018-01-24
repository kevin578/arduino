
#include <LegoMotor.h>
#include <Encoder.h>

LegoMotor motor(3,4,6,7,10);


void setup() {
  motor.attach();
  
}

void loop() {
  
  // put your main code here, to run repeatedly:
  motor.write(30);
}
