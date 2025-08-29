// Anticlockwise movement of TT motor

const int motorD4 = 4;
const int motorD5 = 5;

void setup() {
  pinMode(motorD4, OUTPUT);
  pinMode(motorD5, OUTPUT);
}

void loop() {
  digitalWrite(motorD4, LOW);
  digitalWrite(motorD5, HIGH);

  delay(2000);

  digitalWrite(motorD4, HIGH);
  digitalWrite(motorD5, LOW);

  delay(2000);
}
