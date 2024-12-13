// MethaneSensor.cpp
#include "MethaneSensor.h"

MethaneSensor::MethaneSensor(uint8_t pin) : pin(pin) {}

void MethaneSensor::begin() {
    pinMode(pin, INPUT);
}

float MethaneSensor::readVoltage() {
    int rawValue = analogRead(pin);
    float voltage = rawValue * (3.3 / 4095.0); // Assuming 12-bit ADC resolution and 3.3V reference
    return voltage;
}
