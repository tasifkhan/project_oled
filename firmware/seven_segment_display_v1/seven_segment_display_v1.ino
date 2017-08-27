// counts up from 0 to 9 for digit 1, then does the same for digit 2

int controlPins[] = {
  // a b c d e f g a b c d e f g
  0b0011111111111111, // all on
  0b0000000000000000, // all off
  0b0000000000111111, // 0
  0b0000000000000110, // 1
  0b0000000001011011, // 2
  0b0000000001001111, // 3
  0b0000000001100110, // 4
  0b0000000001101101, // 5
  0b0000000001111101, // 6
  0b0000000000000111, // 7
  0b0000000001111111, // 8
  0b0000000001101111, // 9
  0b0001111111101111, // 09
  0b0000001101101111, // 19
  0b0010110111101111, // 29
  0b0010011111101111, // 39
  0b0011001101101111, // 49
  0b0011011011101111, // 59
  0b0011111011101111, // 69
  0b0000001111101111, // 79
  0b0011111111101111, // 89
  0b0011011111101111 // 99
};

int segmentPins[]= {12, 10, 6, 4, 2, 15, 8, 29, 17, 19, 21, 23, 27, 25};

void setup() {
  Serial.begin(9600);
  for (int i=2; i <= 55; i++){
      pinMode(i, OUTPUT);
   }
}

void loop() {
  for (int i=2; i <= 55; i++){
    digitalWrite(i, LOW);
  }

  // running OLED sequence

  for (int j = 0; j < 23; j++){ // 22 sequence changes
    for (int i = 0; i < 14; i++){ // 2 digit seven segments
      digitalWrite(segmentPins[i], controlPins[j]>>(i) & 0b0000000000000001);
      Serial.print(controlPins[j]>>(i) & 0b0000000000000001);
    }
    delay(500);
    Serial.print("\n");
  }
}
