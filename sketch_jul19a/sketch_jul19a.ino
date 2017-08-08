void setup() {
  // put your setup code here, to run once:
  for (int i= 4; i < 14; i++) {
    pinMode(i, OUPUT)
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 4; i < 14; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }

}
