#include <iostream>
#include <string>
#include "Motorbike.h"

int Motorbike::getParkingDuration() const {

    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - timeOfEntry;
    return (duration * 0.85);

}