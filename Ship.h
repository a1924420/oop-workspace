#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>

class Ship{

    public:

    enum ShipType{
        Fighter,
        Cruiser,
        Battleship
    };

    protected:

    std::string name;

    ShipType shipType;

    int health;

    int damage;

    public:

    Ship(std::string name, ShipType shipType, int health, int damage):
    name(name), shipType(shipType), health(health), damage(damage){}

    virtual std::pair<std::string, int> attack() = 0;

    int getHealth(){ return health;}

    void setHealth(int health){
        this->health = health;
    }

    std::string getName(){ return name; }
};

#endif