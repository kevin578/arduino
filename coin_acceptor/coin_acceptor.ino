
int change = 0;

void setup() {
  // put your setup code here, to run once:
  attachInterrupt(digitalPinToInterrupt(2), addChange, FALLING);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Change:");
  Serial.println(change);
  delay(1000);
}

void addChange(){
  change = change + 5;
  digitalWrite(5, HIGH);
}

