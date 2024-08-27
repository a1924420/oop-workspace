#include <iostream>
#include <string>
#include "warrior.h"

    void Warrior::swingWeapon (Player* opponent){
        opponent->takeDamage(getDamage());
        std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    }

    std::string Warrior::getWeapon(){
        return weapon;
    }

    void Warrior::setWeapon(const std::string& weapon){
        this->weapon = weapon;
    }