#include <SoftPWM.h>

// 4 is A and 5 is B...order matters!

const int motorD4 = 4;
const int motorD5 = 5;

void setup() {
  SoftPWMBegin();
}

void loop() {
  SoftPWMSet(motorD4, 0);
  for(int i = 255; i >= 0; i--){
    SoftPWMSet(motorD5, i);
    delay(100);
  }
  delay(1000);
}
