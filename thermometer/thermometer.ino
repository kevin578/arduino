int temperature;
int beforeTemp;
int afterTemp = 0;

void setup (){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}
void loop(){
  getTemp();
  Serial.println(temperature);
  int seconds = millis()/1000;
  Serial.println(seconds);
  if (seconds % 600 == 0){
  afterTemp = temperature;
  if (beforeTemp < afterTemp){
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
  }
  if(beforeTemp > afterTemp){
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
  }
  if(beforeTemp == afterTemp){
    digitalWrite(13,LOW);
    digitalWrite(12, LOW);
    digitalWrite(11,HIGH);
  }
  
  beforeTemp = afterTemp;
  }
  delay(1000);
}
  
