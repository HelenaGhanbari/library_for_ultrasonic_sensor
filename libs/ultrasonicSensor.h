#ifndef ULTRASONISENSOR_H
#define ULTRASONISENSOR_H

#include <Arduino.h>

class UltrasonicSensor
{
private:
    byte m_trig_pin;
    byte m_echo_pin;
public:
    UltrasonicSensor(byte trig_pin,byte echo_pin);
    void init();
    unsigned int distanceMeasurementCM();
};

#endif //ULTRASONISENSOR_H