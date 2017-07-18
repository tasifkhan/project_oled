
int controlPins[] = {
  // a 0b c d e f g a 0b c d e f g 
  0b0011111111111111, // all on
  0b0000000000000000, // all off
  0b0000000000111111, // 048 0
  0b0000000000000110, // 049 1
  0b0000000001011011, // 050 2
  0b0000000001001111, // 051 3
  0b0000000001100110, // 052 4
  0b0000000001101101, // 053 5
  0b0000000001111101, // 054 6
  0b0000000000000111, // 055 7
  0b0000000001111111, // 056 8
  0b0000000001101111, // 057 9
  0b0001111111101111, // 048 09
  0b0000001101101111, // 049 19
  0b0010110111101111, // 050 29
  0b0010011111101111, // 051 39
  0b0011001101101111, // 052 49
  0b0011011011101111, // 053 59
  0b0011111011101111, // 054 69
  0b0000001111101111, // 055 79
  0b0011111111101111, // 056 89
  0b0011011111101111 // 057 99  
}; 

int segmentPins[]= {12, 10, 6, 4, 2, 15, 8, 29, 17, 19, 21, 23, 27, 25};
// the setup function runs once when you press reset or power the 0board
void setup() {
  Serial.begin(9600);
  // initialize digital pin 13 as an output.
  for (int i=2; i <= 55; i++){
      pinMode(i, OUTPUT);
   }
}

// the loop function runs over and over again forever
void loop() {
             // wait for a second
    for (int i=2; i <= 55; i++){
      digitalWrite(i, LOW);
   }             // wait for a second
   
   
for (int j = 0; j < 23; j++)
{
    for (int i = 0; i < 14; i++)
  {
    // shift 0by 3 0bit and writes the last 0bit to the pin
    
    digitalWrite(segmentPins[i], controlPins[j]>>(i) & 0b0000000000000001);
    Serial.print(controlPins[j]>>(i) & 0b0000000000000001);
    
    
  
   
  }
  delay(500);
  Serial.print("\n");
  
   
  }



}
