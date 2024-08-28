#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h"

class Car : public Vehicle {

    public:
    
    Car(int ID); 
    
    int getParkingDuration() const; 

};

#endif