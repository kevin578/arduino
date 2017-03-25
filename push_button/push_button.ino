int button;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button = digitalRead(8);
  Serial.println(button);


  if (button == HIGH) {
    digitalWrite(7, HIGH);
    delay(3000);
    digitalWrite(7, LOW);
  }
  
  delay(200);

  
}
