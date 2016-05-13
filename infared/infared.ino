int receiverpin = 11;

#include<IRremote.h>

IRrecv irrecv(receiverpin);
decode_results results;

void setup() {
 Serial.begin(9600);
 irrecv.enableIRIn();

}

void loop() {
  if (irrecv.decode(&results)){
     Serial.print(results.value.HEX);
     Serial.print(" ");
     irrecv.resume(); 
  }

}
