#ifndef FIGHTER_H
#define FIGHTER_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Ship.h"

class Fighter: public Ship{

    private:

    int speed;

    int agility;

    public:

    Fighter(std::string name, ShipType shipType, int health, int damage, int speed, int agility):
    Ship(name, shipType, health, damage), speed(speed), agility(agility){}

    std::pair<std::string, int> attack() override {
        return { name + "attacks.", damage};
    }

};

#endif