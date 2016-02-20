#define reed A0

int reedVal;
long timer; //timer for full rotation
float mph;
int radius = 13;
float circumference;

int maxReedCounter = 100; //min time of one rotation
int reedCounter;

void setup() {

reedCounter = maxReedCounter;
circumference = 2*3.14159*radius;
pinMode(reed, INPUT);

 // TIMER SETUP- the timer interrupt allows precise timed measurements of the reed switch
  //for more info about configuration of arduino timers see http://arduino.cc/playground/Code/Timer1
  cli();//stop interrupts

  //set timer1 interrupt at 1kHz
  TCCR1A = 0;// set entire TCCR1A register to 0
  TCCR1B = 0;// same for TCCR1B
  TCNT1  = 0;
  // set timer count for 1khz increments
  OCR1A = 1999;// = (1/1000) / ((1/(16*10^6))*8) - 1
  // turn on CTC mode
  TCCR1B |= (1 << WGM12);
  // Set CS11 bit for 8 prescaler
  TCCR1B |= (1 << CS11);   
  // enable timer compare interrupt
  TIMSK1 |= (1 << OCIE1A);
  
  sei();//allow interrupts
  //END TIMER SETUP
  
  Serial.begin(9600);
}


ISR(TIMER1_COMPA_vect) {
  reedVal = digitalRead(reed);
  if (reedVal){
    //if switch is closed
    if (reedCounter == 0){
      mph = (56.8*float(circumference))/float(timer);
      timer = 0;
      reedCounter = maxReedCounter;
    }
    //if switch is open
    else{
      if (reedCounter > 0){
        reedCounter -= 1;
      }
    }  
  }
    else{
      if (reedCounter > 0){
        reedCounter -=1;
      }
    }
  
  if (timer > 2000){
      mph = 0;
    }
    else{
      timer += 1;
    }
}

void displayMPH(){
  Serial.println(mph);
}


void loop() {
  
displayMPH();
delay(1000);

}
