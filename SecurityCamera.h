#ifndef SECURITYCAMERA_H
#define SECURITYCAMERA_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Device.h"

class SecurityCamera: public Device{

    private: 

    std::tuple<int, std::string> resolution;

    public:

    SecurityCamera(std::string name, RoomType type, bool onOrOff, double watt, int res, std::string status): 
    Device(name, type, onOrOff, watt), resolution(res, status){}

    void reportStatus() override {
        std::cout << "Name: " << name << "\n"
        << "Room: " << roomTypeToString(type) << "\n"
        << "Power: " << power.first << " " << power.second << "\n"
        << "Brightness: " << std::get<0>(resolution) << " " << std::get<1>(resolution) << "\n";
    }

};

#endif