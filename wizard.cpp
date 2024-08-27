#include <iostream>
#include <string>
#include "wizard.h"

    void Wizard::castSpell (Player* opponent){
        opponent->takeDamage(mana);
        std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    }

    int Wizard::getMana(){
        return mana;
    }

    void Wizard::setMana(int mana){
        this->mana = mana;
    }