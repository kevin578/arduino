#include <LiquidCrystal.h>
LiquidCrystal lcd(4,5,6,7,8,9);
int reedState; //0 is closed & 1 is open 
int rotationCount = 0; //keeps track of number of wheel roations
int check; //checks to make sure switch is open again before adding more roations
float rotationTime; /*the amount of time it takes for the wheel to 
make one full rotation*/
int finish; //variable for finish time of rotation
int start; // variable for start time of rotation
float totalDistance;
int mph;
void setup() {

  lcd.begin(16,2);
  lcd.clear();
  
}

void loop() {
  getReedState();
  rotationInfo();
  rotationMath();
  display();
    
}
