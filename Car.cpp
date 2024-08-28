#include <iostream>
#include <string>
#include "Car.h"

int Car::getParkingDuration() const {

    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - timeOfEntry;
    return (duration * 0.9);

}