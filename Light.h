#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Device.h"

class Light: public Device{

    private: 

    std::tuple<int, std::string> brightness;

    public:

    Light(std::string name, RoomType type, bool onOrOff, double watt, int percent, std::string colour): 
    Device(name, type, onOrOff, watt), brightness(percent, colour){}

    void reportStatus() override {
        std::cout << "Name: " << name << "\n"
        << "Room: " << roomTypeToString(type) << "\n"
        << "Power: " << power.first << " " << power.second << "\n"
        << "Brightness: " << std::get<0>(brightness) << " " << std::get<1>(brightness) << "\n";
    }

};

#endif