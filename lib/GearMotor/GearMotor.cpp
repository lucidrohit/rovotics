// GearMotor.cpp
#include "GearMotor.h"
#include <Arduino.h>

GearMotor::GearMotor(int pin1, int pin2, int enablePin)
  : pin1(pin1), pin2(pin2), enablePin(enablePin) {}

void GearMotor::setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
}

void GearMotor::setSpeed(int speed) {
  analogWrite(enablePin, speed);
}

void GearMotor::forward() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
}

void GearMotor::backward() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
}

void GearMotor::stop() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
}