int roll;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
}

void loop(){
  if (digitalRead(2) == HIGH){
  roll = random(8, 14);
  digitalWrite(roll, HIGH);
  delay(3000);
  digitalWrite(roll, LOW);
  }
}




