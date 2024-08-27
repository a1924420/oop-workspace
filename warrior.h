#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include "player.h"

class Warrior: public Player{

    private:

    std::string weapon;

    public:

    Warrior(std::string name, int health, int damage, std::string weapon): Player(name, health, damage), weapon(weapon) {}

    void swingWeapon (Player* opponent);

    std::string getWeapon();

    void setWeapon(const std::string& weapon);

};

#endif
