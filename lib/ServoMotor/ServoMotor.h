#ifndef SERVOMOTOR_H
#define SERVOMOTOR_H

#include <Servo.h>

class ServoMotor {
public:
  ServoMotor(int pin);
  void attach();
  void rotate(int angle);

private:
  Servo servo;
  int pin;
};

#endif 