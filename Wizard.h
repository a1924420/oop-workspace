#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>
#include "player.h"

class Wizard: public Player{

    private:

    int mana;

    public:

    Wizard(std::string name, int health, int damage, int mana): Player(name, health, damage), mana(mana) {}

    void castSpell (Player* opponent){
        opponent->takeDamage(mana);
        std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    }

    int getMana() const {
        return mana;
    }

    void setMana(int mana){
        this->mana = mana;
    }

};

#endif