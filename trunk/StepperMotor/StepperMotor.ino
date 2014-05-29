#include "Timer.h"

const int E1 = 5;
const int M1 = 4;
const int E2 = 6;
const int M2 = 7;
const int Bpin = A1;

int stapstate = 0;
int stepCounter =0;

Timer t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  
  t.every(10, DoStap);
}

void loop() {
  // put your main code here, to run repeatedly:
  t.update();
  int buttonValue = checkValue(analogRead(A0));
  if ( buttonValue == 1023 )
  {
    FullStep(true);
    stepCounter++;
    Serial.println(stepCounter);
    delay (10);
  }
}

void DoStap()
{
  //HalfStep(false);
}


