#include "DeviceLoader.h"

/// @brief Loads all event receivers
/// @return True on success
bool DeviceLoader::LoadReceivers() {

    /******** Add event receivers and loggers here ********/
    
    Logger.addReceiver(&slogger);
    EventBroadcaster::addReceiver(&led);

    /******** End event receivers and loggers addition section ********/
    return true;
}

/// @brief Loads all sensor and actor devices
/// @return True on success
bool DeviceLoader::LoadDevices() {
    
    /******** Add senors and actors here ********/ 
    // actors are pumps etc


    ActorManager::addActor(&reset);
    ActorManager::addActor(&logger);
    SensorManager::addSensor(&bme280);   //add new sensors here
    SensorManager::addSensor(&pms5003); 
    SensorManager::addSensor(&methanesensor);
    SensorManager::addSensor(&vocsensor);
             
 /******** End senor and actor addition section ********/
    return true;
}