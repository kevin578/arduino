#define DATA 6
#define LATCH 8
#define CLOCK 10

void setup(){
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop(){
 digitalWrite(LATCH, LOW);
 shiftOut(DATA, CLOCK, LSBFIRST,8);
 digitalWrite(LATCH, HIGH); 
}
