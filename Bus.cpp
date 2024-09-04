#include <iostream>
#include "Vehicle.h"
#include "Bus.h"

Bus::Bus(int ID): Vehicle(ID){}

int Bus::getParkingDuration(){
    
    duration = currentTime - timeOfEntry;

    return duration * 0.75;

}