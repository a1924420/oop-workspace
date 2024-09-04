#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"

Airplane::Airplane(){}

Airplane::Airplane(int w, int p){
    weight = w;
    numPassengers = p;
}

void Airplane::reducePassengers(int x){
    numPassengers -= x;
}

int Airplane::get_numPassengers(){ return numPassengers;}

void Airplane::fly(int headwind, int minutes){
    if (headwind < 60){
        fuel = fuel - (0.3 * minutes) - (0.001 * numPassengers * minutes);
    } else if (headwind >= 60){
        fuel = fuel - (0.5 * minutes) - (0.001 * numPassengers * minutes);
    }

    if (fuel >= 20){
        numberOfFlights++;
    } 
}