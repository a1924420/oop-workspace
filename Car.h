#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

class Car: public Vehicle{

    private:

    int currentTime;

    public:

    Car(int ID);

    int getParkingDuration();

};

#endif