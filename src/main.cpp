// main.cpp
#include <Arduino.h>
#include "ServoMotor.h"

ServoMotor* myServo; // Declare a pointer to a ServoMotor object

void setup() {
  myServo = new ServoMotor(9); // Create the ServoMotor object in setup()
}

void loop() {
  myServo->setPosition(0); // Move the servo to 180 degrees
  delay(1000);
  myServo->setPosition(180); // Move the servo to 0 degrees
  delay(1000);
}