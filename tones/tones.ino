float C5 =   523.25;
float D5 = 587.33;
float E5 = 659.25;
float F5 = 698.46;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(10) == LOW) {
  tone(13, C5, 50);
}
if (digitalRead(9) == LOW) {
  tone(13, D5, 50);
}
if (digitalRead(8) == LOW) {
  tone(13, E5, 50);
}
}
