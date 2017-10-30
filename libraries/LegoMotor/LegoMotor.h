/*
legoMotor library
*/
#ifndef LegoMotor_h
#define LegoMotor_h
#endif

#include "Arduino.h"


class LegoMotor {

  public:
    LegoMotor(int forward, int back, int A, int B);
    int forwardPin;
    int backwardPin;
    int rotA;
    int rotB;
    int counter = 0;
    int aState;
    int aLastState;
    void attach();
    void write(int);
};
