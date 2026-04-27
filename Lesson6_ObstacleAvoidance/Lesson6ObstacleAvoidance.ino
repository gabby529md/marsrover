#include <SoftPWM.h>

// Define pins
// left motors
const int in1 = 2;
const int in2 = 3;

// right motors
const int in3 = 4;
const int in4 = 5;

// IR modules
#define IR_RIGHT 7
#define IR_LEFT 8

void setup() {
  // Initialize SoftPWM
  SoftPWMBegin();

  // set IR modules to input
  pinMode(IR_RIGHT, INPUT);
  pinMode(IR_LEFT, INPUT);
}

void loop() {
  int rightSensor = digitalRead(IR_RIGHT);
  int leftSensor = digitalRead(IR_LEFT);

  if (rightSensor == 0 && leftSensor == 1) {  // obstacle on right side
    backRight(150);
  } else if (rightSensor == 1 && leftSensor == 0) {  // obstacle on left side
    backLeft(150);
  } else if (rightSensor == 0 && leftSensor == 0) {  // obstacle on both sides
    backward(150);
  } else {  // no obstacles
    forward(150);
  }
}

// functions
void forward(int speed) {  // moves forwards
  SoftPWMSet(in1, speed);
  SoftPWMSet(in2, 0);

  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, speed);
}

void backward(int speed) {  // moves backward
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);

  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0);
}

void right(int speed) {  // turns right
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);

  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, speed);
}

void left(int speed) {  // turns left
  SoftPWMSet(in1, speed);
  SoftPWMSet(in2, 0);

  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0);
}

void backRight(int speed) {  // goes back towards the right
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);

  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, 0);
}

void backLeft(int speed) {  // goes back towards the left
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, 0);

  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0);
}
