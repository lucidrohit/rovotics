#include "ServoMotor.h"

ServoMotor::ServoMotor(int pin) : pin(pin), position(0) {
    servo.attach(pin);
    servo.write(position);
}

void ServoMotor::setPosition(int position) {
    this->position = position;
    servo.write(position);
}

void ServoMotor::turn180() {
    setPosition(180);
}

void ServoMotor::turnMinus180() {
    setPosition(0);
}