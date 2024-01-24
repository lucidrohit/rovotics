#include <Servo.h>

class ServoMotor {
public:
    ServoMotor(int pin);
    void setPosition(int position);
    void turn180();
    void turnMinus180();

private:
    Servo servo;
    int pin;
    int position;
};