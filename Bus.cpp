#include <iostream>
#include <string>
#include <ctime>
#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration() const {

    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - timeOfEntry;
    return duration * 0.75;

}