#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Device.h"

class Thermostat: public Device{

    private: 

    std::tuple<double, std::string> temperature;

    public:

    Thermostat(std::string name, RoomType type, bool onOrOff, double watt, int temp, std::string mode): 
    Device(name, type, onOrOff, watt), temperature(temp, mode){}

    void reportStatus() override {
        std::cout << "Name: " << name << "\n"
        << "Room: " << roomTypeToString(type) << "\n"
        << "Power: " << power.first << " " << power.second << "\n"
        << "Brightness: " << std::get<0>(temperature) << " " << std::get<1>(temperature) << "\n";
    }

};

#endif