

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 9; i < 12; i++) {
    for (int x = 0; x < 256; x++) {
      analogWrite(i, x);
      delay(5);
    }
    for (int x = 255; x > 0; x--) {
      analogWrite(i, x);
      delay(5);  
    }
    
  }
}
