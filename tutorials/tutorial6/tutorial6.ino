void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(13);

  if (button == LOW) {
    digitalWrite(12, HIGH);
    delay(4000);
    digitalWrite(12, LOW);
  }
}
