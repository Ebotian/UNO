/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/
#define led 6


// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  static int algval = 0;
  static int val = 1;
  analogWrite(6, algval);
  if (algval == 255) {
    val = -1;
  }
  if (algval == 0) {
    val = 1;
  }
  algval += val;
  //Serial.println(algval);
  delay(10);
}
