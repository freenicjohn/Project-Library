/*
 Simple function to use IO pin 10 as an output and IO pin A0 to read an analog input.
 Not planning to make an example for digital inputs (just change "OUTPUT" to "INPUT")
 Written by Nic John
*/

// Set pin numbers
  int analogPin = A0;
  int digitalPin = 10;

void setup() {
  // Set pin for digital output
  pinMode(digitalPin, OUTPUT);

  // Begin serial monitor to see values
  Serial.begin(9600);
  Serial.println(F("Starting analog input reads!"));
}

void loop() {
  // digital output loop
  digitalWrite(10, HIGH);   // turn the output on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(10, LOW);    // turn the output off by making the voltage LOW
  delay(1000);                       // wait for a second

  // read from analog input
  float reading = analogRead(analogPin);
  Serial.print(F("%  Reading: "));
  Serial.print(reading);
}
