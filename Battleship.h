#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Ship.h"

class Battleship: public Ship{

    private:

    int armour;

    int range;

    public:

    Battleship(std::string name, ShipType shipType, int health, int damage, int armour, int range):
    Ship(name, shipType, health, damage), 
    armour(armour), 
    range(range){}

    std::pair<std::string, int> attack() override {
        return { name + "attacks.", damage};
    }

};

#endif