#ifndef JOYSTICK_H  
#define JOYSTICK_H

#include <Arduino.h>
#include <ArduinoJson.h>
#define POT_MIDDLE_X 0
#define POT_MIDDLE_Y 0
#define DEFAULT_DEAD_ZONE 5
#define DEFAULT_RANGE 100

class JoyStick {
private:
    int _pinX;
    int _pinY;
    int _x;
    int _y;
    int _deadZoneVal;
    int _range;
public:
    JoyStick(int pinX = A0, int pinY = A1, int deadZone = DEFAULT_DEAD_ZONE, int range = DEFAULT_RANGE);
    ~JoyStick();
    int getX();
    int getY();
    int getDeadZoneVal();
    void setDeadZoneVal(int deadZone = DEFAULT_DEAD_ZONE);
    int getRange();
    void setRange(int range = DEFAULT_RANGE);


};

#endif