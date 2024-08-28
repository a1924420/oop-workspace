#include <iostream>
#include <string>
#include <ctime>
#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() const {

    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - timeOfEntry;
    return duration * 0.85;

}