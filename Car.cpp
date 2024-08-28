#include <iostream>
#include <string>
#include <ctime>
#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration() const {

    std::time_t currentTime = std::time(nullptr);
    int duration = currentTime - timeOfEntry;
    std::cout << "Car ID: " << getID() << " Time of Entry: " << timeOfEntry << " Current Time: " << currentTime << " Duration: " << duration << std::endl;
    return duration * 0.9;

}