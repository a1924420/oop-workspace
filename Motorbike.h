#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include <string>
#include "Vehicle.h"

class Motorbike : public Vehicle {

    public:
    
    Motorbike(int ID); 
    
    int getParkingDuration() const; 

};

#endif