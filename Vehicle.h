#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle{

    protected:

    std::time_t timeOfEntry;

    int ID;

    int duration;

    public:

    Vehicle();

    Vehicle(int ID);

    int getID();

    int getParkingDuration();

};

#endif