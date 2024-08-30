#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include <string>
#include "Vehicle.h"

class ParkingLot{

    private:

    Vehicle** vehicles;

    int max;

    int count;

    int maxParkingDuration;

    public:

    ParkingLot(int max);

    int maxNum(int max);

    int getCount() const;

    int getMax() const;

    void parkVehicle(Vehicle* vehicle);

    void unparkVehicle(int ID);

    ~ParkingLot();

    int countoverstayingVehicles(int maxParkingDuration);

};

#endif