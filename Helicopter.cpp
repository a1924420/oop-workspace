#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, std::string n){
    name = n;
    weight = w;
}

void Helicopter::fly(int headwind, int minutes){
    if (headwind < 40 && weight <= 5670){
        fuel = fuel * (0.2 * minutes);
    } else if (headwind >= 40 && weight <= 5670){
        fuel = fuel * (0.4 * minutes);
    } else if (headwind >= 40 && weight > 5670){
        fuel = fuel * (0.4 * minutes) * ((weight - 5670) * 0.01);
    } else if (headwind < 40 && weight > 5670){
        fuel = fuel * (0.2 * minutes) * ((weight - 5670) * 0.01);
    }

    if (fuel >= 20){
        numberOfFlights++;
    } 
}

