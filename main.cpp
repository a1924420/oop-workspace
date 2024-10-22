#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Device.h"
#include "Light.h"
#include "Thermostat.h"
#include "SecurityCamera.h"

int main(){

    Light light("Bedroom Light", Device::RoomType::Bedroom, true, 60, 60, "warm white");

    light.reportStatus();

    Thermostat thermostat("Kitchen Thermostat", Device::RoomType::Kitchen, true, 0, 22, "Heater");

    thermostat.reportStatus();

    SecurityCamera sc("Living Room Security Camera", Device::RoomType::LivingRoom, false, 0, 1440, "Idle");

    sc.reportStatus();

    return 0;
}