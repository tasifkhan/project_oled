/*
  Sequentially Lights up all segments of the seven segment display.
*/

void setup() {
  for (int i=2; i <= 55; i++){
    pinMode(i, OUTPUT);
  }

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(A8, OUTPUT);
  pinMode(A9, OUTPUT);
  pinMode(A10, OUTPUT);
  pinMode(A11, OUTPUT);
  pinMode(A12, OUTPUT);
  pinMode(A13, OUTPUT);
}

void loop() {
  for (int i=2; i <= 55; i++){ // turing all off
    digitalWrite(i, LOW);
  }

  // lighting up one at a time
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(10, HIGH);
  delay(200);
  digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(15, HIGH);
  delay(200);
  digitalWrite(17, HIGH);
  delay(200);
  digitalWrite(19, HIGH);
  delay(200);
  digitalWrite(21, HIGH);
  delay(200);
  digitalWrite(23, HIGH);
  delay(200);
  digitalWrite(24, HIGH);
  delay(200);
  digitalWrite(25, HIGH);
  delay(200);
  digitalWrite(27, HIGH);
  delay(200);
  digitalWrite(29, HIGH);
  delay(200);
}
