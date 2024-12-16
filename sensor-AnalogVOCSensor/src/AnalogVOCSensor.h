/*
* This file and associated .cpp file are licensed under the GPLv3 License Copyright (c) 2024 Sam Groveman and Trevor Durning
* 
* External libraries needed:
* GenericAnalogInput: https://github.com/FabricaIO/sensor-GenericAnalogInput
*
* Contributors: Sam Groveman and Trevor Durning
*/

#pragma once
#include <GenericAnalogInput.h>

/// @brief A generic analog VOC sensor
class AnalogVOCSensor : public GenericAnalogInput {
	public:
		AnalogVOCSensor(int Pin, String configFile = "VOCSensor.json");
		bool begin();
		bool takeMeasurement();
};