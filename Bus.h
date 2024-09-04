#ifndef BUS_H
#define BUS_H

#include <iostream>
#include "Vehicle.h"

class Bus: public Vehicle{

    private:

    int currentTime;

    public:

    Bus(int ID);

    int getParkingDuration();

};

#endif