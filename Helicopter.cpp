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
        fuel = fuel - (0.2 * minutes);
    } else if (headwind >= 40 && weight <= 5670){
        fuel = fuel - (0.4 * minutes);
    } else if (headwind >= 40 && weight > 5670){
        fuel = fuel - (0.4 * minutes) - (0.01 * weight * minutes);
    } else if (headwind < 40 && weight > 5670){
        fuel = fuel - (0.2 * minutes) - (0.01 * weight * minutes);
    }

    if (fuel < 0){
        fuel = 0;
    }

    if (fuel >= 20){
        numberOfFlights++;
    } 
}

std::string Helicopter::get_name(){ return name;}

void Helicopter::set_name(std::string name){
    this->name = name;
}

