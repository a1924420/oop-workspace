#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"

Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(std::time(nullptr)) {
    std::cout << "Vehicle created with ID: " << ID << " at time: " << timeOfEntry << std::endl;

}  

int Vehicle::getID() const {
    return ID;
}

Vehicle::~Vehicle() {}
