/*
 Simple function to use an IO pin as an output. 
 Not planning to make an example for inputs (just change "OUTPUT" to "INPUT")
 Written by Nic John
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);   // turn the output on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(10, LOW);    // turn the output off by making the voltage LOW
  delay(1000);                       // wait for a second
}
