#define WAIT 1000
#define leftGreen 5
#define leftYellow 4
#define leftRed 3
#define rightGreen 11
#define rightYellow 12
#define rightRed 13
#define rightButton 8
#define leftButton 9


void setup (){
  pinMode(leftGreen, OUTPUT);
  pinMode(leftYellow, OUTPUT);
  pinMode(leftRed, OUTPUT);
  pinMode(rightGreen, OUTPUT);
  pinMode(rightYellow, OUTPUT);
  pinMode(rightRed, OUTPUT);
  pinMode(rightButton, INPUT);
  pinMode(leftButton, INPUT);
  
}

void loop(){
  if (digitalRead(rightButton) == LOW){    
  //turn off green
  digitalWrite(rightGreen, LOW);
  //turn on yellow
  digitalWrite(rightYellow, HIGH);
  //turn off yellow
  delay(WAIT);
  digitalWrite(rightYellow, LOW);
  //turn on red
  digitalWrite(rightRed, HIGH);
  delay(500);
  //turn off red
  digitalWrite(rightRed, HIGH);
  //turn off red(other side)
  digitalWrite(leftRed, LOW);
  //turn on green (other side)
  digitalWrite(leftGreen, HIGH);
  }
    if (digitalRead(leftButton) == LOW){    
  //turn off green
  digitalWrite(leftGreen, LOW);
  //turn on yellow
  digitalWrite(leftYellow, HIGH);
  //turn off yellow
  delay(WAIT);
  digitalWrite(leftYellow, LOW);
  //turn on red
  digitalWrite(leftRed, HIGH);
  //turn off red
  delay(500);
  digitalWrite(leftRed, HIGH);
  //turn off red(other side)
  digitalWrite(rightRed, LOW);
  //turn on green (other side)
  digitalWrite(rightGreen, HIGH);
  }
}

