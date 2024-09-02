#include <iostream>
#include "Appliance.h"

Appliance::Appliance() : isOn(false), powerRating(0) {}

Appliance::Appliance (int powerRating) : isOn(false), powerRating(powerRating) {}

void Appliance::turnOn(){
    isOn = true;
}

void Appliance::turnOff(){
    isOn = false;
}

double Appliance::getPowerConsumption (){
    return 0.0;
}

int Appliance::get_powerRating() const {
    return powerRating;
}

bool Appliance::get_isOn() const{
    return isOn;
}

void Appliance::set_powerRating(int powerRating){
    this->powerRating = powerRating;
}

void Appliance::set_isOn(bool isOn){
    this->isOn = isOn;
}