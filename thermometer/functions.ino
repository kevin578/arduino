void getTemp(){
  float temp = analogRead(0);
  temp = temp * 5000/1024;
  temp = temp - 500;
  temp = temp/10;
  temperature = temp * 1.8 + 32;
}
