void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == HIGH) {
    analogWrite(9, 100);
  }
  else {
  digitalWrite(9, LOW);
  delay(50);
  }
}
