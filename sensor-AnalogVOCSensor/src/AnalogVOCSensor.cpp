#include "AnalogVOCSensor.h"

/// @brief Creates a VOC sensor
/// @param Pin Pin to use
/// @param configFile Name of the config file to use
AnalogVOCSensor::AnalogVOCSensor(int Pin, String configFile) : GenericAnalogInput(Pin, configFile) {} // Used to change name of default config file

/// @brief Starts a methane sensor 
/// @return True on success
bool AnalogVOCSensor::begin() {
	// Call base class begin method
	if (GenericAnalogInput::begin()) {
		// Change description to match your units/sensor information
		Description.type = "voc sensor";
		Description.name = "VOC Sensor";
		Description.parameterQuantity = 1;
		Description.parameters = {"VOC Concentration"};
		Description.units = {"ppm"};
		return true;
	}
	return false;
}

/// @brief Takes a measurement
/// @return True on success
bool AnalogVOCSensor::takeMeasurement() {
	int rawVoltage = analogToMV(getAnalogValue(analog_config.RollingAverage));
	values[0] = rawVoltage * 3; // Do whatever math is needed here to convert a voltage value to a useful unit like ppm
	return true;
}