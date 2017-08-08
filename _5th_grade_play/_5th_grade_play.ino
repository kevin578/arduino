void setup() {
  // put your setup code here, to run once:
  
  for (int i = 13; i > 1; i--){
  pinMode(i, OUTPUT);
  Serial.begin(9600);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

blink(9);
blink(6);
blink(7);
blink(5);
blink(11);
blink(2);
blink(4);
blink(3);
blink(8);
blink(13);
blink(12);
blink(10);

    
}

void blink (int light) {
  if (analogRead(A0) < 1000) {
      digitalWrite(light, HIGH);
      delay(100);
      digitalWrite(light, LOW);
  }
}

