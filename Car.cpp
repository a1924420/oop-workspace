#include <iostream>
#include "Vehicle.h"
#include "Car.h"

Car::Car(int ID): Vehicle(ID){}

int Car::getParkingDuration(){
    
    duration = currentTime - timeOfEntry;

    return duration * 0.9;

}
