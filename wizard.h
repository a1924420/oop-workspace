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

    void castSpell (Player* opponent);

    int getMana();

    void setMana(int mana);

};

#endif
