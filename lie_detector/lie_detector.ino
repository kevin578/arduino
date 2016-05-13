
int before;
int after;
int change;

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
}

void loop() {
  // send the value of analog input 0:
  Serial.println("");
  
  before =  analogRead(A0);
  
  Serial.print("Before: ");
  Serial.println(before);
  
  delay(5000);
  
  after = analogRead(A0);
  Serial.print("After: ");
  Serial.println(after);
  
  delay(500);
  
  change = after - before;
  Serial.print("Change: ");
  Serial.println(change);
 
  if (change > 3){
   digitalWrite(13, HIGH) ;
  }  
  else{
   digitalWrite(13, LOW); 
  }
  delay(2);
}

