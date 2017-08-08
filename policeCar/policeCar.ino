
int trigPin = 7;
int echoPin = 6;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  

  int dist = getDistance(trigPin, echoPin, "cm");
  
  if (dist < 30) {
    digitalWrite(13, HIGH);
    tone(3, 1046.50);
    delay(300);
    digitalWrite(13, LOW);
    noTone(3);
    digitalWrite(12, HIGH);
    tone(3, 880);
    delay(300);
    digitalWrite(12, LOW);
    noTone(3);
    
  }

}
