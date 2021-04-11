/*
 Servo function to control a 180 degree 3-wire servo using PWM using the built-in "Servo" library
 Written by Nic John
*/

#include <Servo.h>

// Servo initialization
Servo servo1;  // servo object to control a servo
int servo1_pos;    // commanded servo 1


void setup() {
  // Set pin for servo
  servo1.attach(10); 
}

void loop() {
  servo1_pos = 0;
  servo1.write(servo1_pos);  // sets the servo position
  delay(15);  // waits for the servo to get there

  delay(2000);

  servo1_pos = 90;    
  servo1.write(servo1_pos);  // sets the servo position
  delay(15);  // waits for the servo to get there

  delay(2000);
}
