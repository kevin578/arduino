void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int pot = analogRead(0);
Serial.println(pot);
delay(300);
}
