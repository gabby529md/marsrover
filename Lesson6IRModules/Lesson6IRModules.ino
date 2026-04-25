#define IR_RIGHT 7
#define IR_LEFT 8


void setup() {
  pinMode(IR_RIGHT, INPUT);
  pinMode(IR_LEFT, INPUT);

  Serial.begin(9600);
}

void loop() {
  int rightSensor = digitalRead(IR_RIGHT);
  int leftSensor = digitalRead(IR_LEFT);
  
  Serial.print("Right IR: ");
  Serial.println(rightSensor);
  Serial.print("Left IR:");
  Serial.println(leftSensor);

  delay(200);
}
