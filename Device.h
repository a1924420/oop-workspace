#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>

class Device{

    public:

    enum RoomType{
        LivingRoom,
        Kitchen, 
        Bedroom,
        Bathroom
    };

    protected:

    std::string name;

    RoomType type;

    std::pair<bool, double> power;

    public:

    std::string roomTypeToString(RoomType room){
        switch (type){
            case RoomType::LivingRoom: return "Living Room";
            case RoomType::Kitchen: return "Kitchen";
            case RoomType::Bedroom: return "Bedroom";
            case RoomType::Bathroom: return "Bathroom";
        }
    }

    Device(std::string name, RoomType type, bool onOrOff, double watts): name(name), type(type), power(onOrOff, watts){}

    virtual void reportStatus() = 0;
};

#endif