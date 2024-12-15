#pragma once
#include <Arduino.h>
#include <EventBroadcaster.h>
#include <LogBroadcaster.h>
#include <SensorManager.h>
#include <ActorManager.h>

/******** Put device includes here ********/

#include <EEPROM.h>
#include <LEDIndicator.h>
#include <SerialLogger.h>
#include <AdafruitBME280.h>
#include <PlantowerPMSx003.h>
#include <LocalDataLogger.h>
#include <ResetButton.h>
#include "MQ4AnalogInput.h"
#include "VOCAnalogInput.h"

/******** End device includes ********/

/// @brief Allows for loading of sensor, actor, and receiver devices
class DeviceLoader {
    public:
        bool LoadReceivers();
        bool LoadDevices();
        
        /******** Declare sensor, actor, receiver objects here ********/

        LEDIndicator led{D8, 1};
        SerialLogger slogger;
        AdafruitBME280 bme280{0x76}; // add sensor here
        PlantowerPMSx003 pms5003{&Serial2};
        LocalDataLogger logger{};
        ResetButton reset{D4};
        MQ4AnalogInput methanesensor{A3};
        VOCAnalogInput vocsensor{A4};

        /******** End sensor, actor, receiver object declarations ********/

};