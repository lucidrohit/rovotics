// GearMotor.h
#ifndef GEARMOTOR_H
#define GEARMOTOR_H

class GearMotor {
public:
  GearMotor(int pin1, int pin2, int enablePin);
  void setup();
  void setSpeed(int speed);
  void forward();
  void backward();
  void stop();

private:
  int pin1, pin2, enablePin;
};

#endif // GEARMOTOR_H