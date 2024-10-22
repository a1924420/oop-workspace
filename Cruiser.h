#ifndef CRUISER_H
#define CRUISER_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Ship.h"

class Cruiser: public Ship{

    private:

    int shieldStrength;

    int cargoCapacity;

    public:

    Cruiser(std::string name, ShipType shipType, int health, int damage, int shieldStrength, int cargoCapacity):
    Ship(name, shipType, health, damage), 
    shieldStrength(shieldStrength), 
    cargoCapacity(cargoCapacity){}

    std::pair<std::string, int> attack() override {
        health += 10;
        return { name + "attacks.", damage};
    }

};

#endif