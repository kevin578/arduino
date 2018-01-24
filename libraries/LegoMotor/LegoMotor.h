/*
legoMotor library
*/
#ifndef LegoMotor_h
#define LegoMotor_h
#endif

#include "Arduino.h"
#include <Encoder.h>


class LegoMotor {

  public:
    LegoMotor(int forward, int back, int A, int B, int PWM);
    int forwardPin;
    int backwardPin;
    int rotA;
    int rotB;
    int pwmPin;
    int counter = 0;
    long oldPosition = -999;
    long newPosition;
    void setSpeed(int);
    void attach();
    void write(int);
    void countPin();
};
