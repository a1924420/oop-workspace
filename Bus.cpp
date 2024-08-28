#include <iostream>
#include <string>
#include "Bus.h"

int Bus::getParkingDuration() const {

    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - timeOfEntry;
    return (duration * 0.75);

}