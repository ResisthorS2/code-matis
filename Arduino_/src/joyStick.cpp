#include "joyStick.h"

JoyStick::JoyStick(int pinX, int pinY, int deadZone, int range)
    : _pinX(pinX), _pinY(pinY), _deadZoneVal(deadZone), _range(range), _x(0), _y(0) {
    pinMode(_pinX,INPUT);
    pinMode(_pinY,INPUT);
}
JoyStick::~JoyStick(){}
int JoyStick::getX(){
    int xTmp = analogRead(_pinX);

    _x = map(xTmp, 0, 1024, -1*_range, _range);

    if (abs(_x - POT_MIDDLE_X) < _deadZoneVal) {
        _x = 0;
    }

    return _x;
}
int JoyStick::getY(){
    int yTmp = analogRead(_pinY);

    _y = map(yTmp, 0, 1024, -1*_range, _range);

    if (abs(_y - POT_MIDDLE_Y) < _deadZoneVal) {
        _y = 0;
    }

    return _y;
}
int JoyStick::getDeadZoneVal(){
    return _deadZoneVal;
}
void JoyStick::setDeadZoneVal(int deadZone){
    _deadZoneVal = deadZone;
}
int JoyStick::getRange(){
    return _range;
}
void JoyStick::setRange(int range){
    _range = range;
}