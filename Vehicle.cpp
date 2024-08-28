#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"

Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(std::time(nullptr)) {}  

int Vehicle::getID() const {
    return ID;
}

Vehicle::~Vehicle() {}
