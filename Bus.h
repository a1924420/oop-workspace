#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <string>
#include "Vehicle.h"

class Bus : public Vehicle {

    public:
    
    Bus(int ID); 
    
    int getParkingDuration() const; 

};

#endif