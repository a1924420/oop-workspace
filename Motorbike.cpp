#include <iostream>
#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike(int ID): Vehicle(ID){}

int Motorbike::getParkingDuration(){
    
    duration = currentTime - timeOfEntry;

    return duration * 0.85;

}