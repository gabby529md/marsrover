#include <SoftPWM.h>

// Define the pins of motors
// left motors
const int in1 = 2;
const int in2 = 3;

// right motors
const int in3 = 4;
const int in4 = 5;

void setup() {
    // Initialize SoftPWM
    SoftPWMBegin();
}

void loop() {
  forward(100);
  delay(1000);

  right(100);
  delay(1000);

  left(100);
  delay(1000);

  backward(100);
  delay(1000);
}

void forward(int speed) {
  SoftPWMSet(in1, speed);
  SoftPWMSet(in2, 0);

  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, speed);
}

void backward(int speed) {
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);

  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0);
}

void right(int speed) {
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);

  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, speed);
}

void left(int speed) {
  SoftPWMSet(in1, speed);
  SoftPWMSet(in2, 0);

  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0); 
}
