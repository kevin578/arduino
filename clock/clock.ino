
// include the library code:
#include <LiquidCrystal.h>


int seconds = 0;
int Smodifier = 0; 
int minutes = 0;
int Mmodifier = 0;
int hours = 0;
int Hmodifier = 0;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {

  Smodifier = 0;
  Mmodifier = 01;
  Hmodifier = 11;
  seconds = (millis()/1000 + Smodifier) % 60;
  minutes = ((millis()/1000 + Smodifier)/60 + Mmodifier) % 60;
  hours =   (((millis()/1000 + Smodifier)/60 + Mmodifier)/60 + Hmodifier) % 60 % 24;

  printTime();


}

