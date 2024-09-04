#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(): timeOfEntry(0), ID(0){}

Vehicle::Vehicle(int ID): timeOfEntry(0), ID(ID){}

int Vehicle::getID(){
    return ID;
}

int Vehicle::getParkingDuration(){
    return duration;
}