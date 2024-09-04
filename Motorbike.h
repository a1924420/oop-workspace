#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include "Vehicle.h"

class Motorbike: public Vehicle{

    private:

    int currentTime;

    public:

    Motorbike(int ID);


    int getParkingDuration();

};

#endif