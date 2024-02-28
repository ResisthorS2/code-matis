#include "motor.h"
Motor::Motor(int motorPin, bool motorState)
    : _motorPin(motorPin), _motorState(motorState){
    pinMode(_motorPin,OUTPUT);
    digitalWrite(_motorPin, _motorState);
}
Motor::~Motor(){};
bool Motor::getMotorState(){
    return _motorState;
}
void Motor::setMotorState(bool motorState){
    _motorState = motorState;
    digitalWrite(_motorPin, _motorState);
}