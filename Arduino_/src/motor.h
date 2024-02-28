#ifndef MOTOR_H  
#define MOTOR_H

#include <Arduino.h>
#include <ArduinoJson.h>
#define ON true
#define OFF false


class Motor {
private:
    int _motorPin;
    bool _motorState;
public:
    Motor(int motorPin = 7, bool motorState = OFF);
    ~Motor();
    bool getMotorState();
    void setMotorState(bool motorState);
};

#endif