// ServoMotor.cpp
#include "ServoMotor.h"

ServoMotor::ServoMotor(int pin) : pin(pin) {
  // Do nothing here
}

void ServoMotor::attach() {
  servo.attach(pin);
}

void ServoMotor::rotate(int angle) {
  servo.write(angle);
}