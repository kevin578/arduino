
#include <LegoMotor.h>

LegoMotor motor(2,3,6,7);

void setup() {
  motor.attach();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  motor.write(30);
  delay(1000);

}
