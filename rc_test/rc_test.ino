int ch5;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  ch5 = pulseIn(2, HIGH, 25000);
  Serial.println(ch5);

  delay(100);
  
  
}
