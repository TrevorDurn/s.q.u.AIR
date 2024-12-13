// MethaneSensor.h
#pragma once
#include <Arduino.h>

class MethaneSensor {
public:
    MethaneSensor(uint8_t pin);
    void begin();
    float readVoltage();

private:
    uint8_t pin;
};