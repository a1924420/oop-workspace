#include <iostream>
#include "AirCraft.h"

AirCraft::AirCraft(): weight(0), fuel(100), numberOfFlights(0) {}

AirCraft::AirCraft(int w): weight(w), fuel(100), numberOfFlights(0){}

void AirCraft::refuel(){
    fuel = 100;
}

int AirCraft::get_weight(){ return weight;}

float AirCraft::get_fuel(){ return fuel;}

int AirCraft::get_numberOfFlights(){return numberOfFlights;}

void AirCraft::set_weight(){
    this->weight = weight;
}

void AirCraft::set_fuel(){
    this->fuel = fuel;
}

void AirCraft::set_numberOfFlights(){
    this->numberOfFlights = numberOfFlights;
}