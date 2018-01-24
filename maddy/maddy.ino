
int button;

int led = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button = digitalRead(10);
  Serial.println(button);
  if ( button == 1 ) {
    digitalWrite(12, LOW);
    }
  if ( button == 0 ) {
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    digitalWrite(12, HIGH);

  
  }




}
