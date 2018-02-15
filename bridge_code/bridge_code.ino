int speed = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(speed);
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(speed);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(speed);
  
}
