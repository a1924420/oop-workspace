#include <iostream>
#include <string>
#include "Cage.h"

Cage::Cage(){

    Cage def;

    def.name = "";

    def.number = 0;

}

Cage::Cage(std::string newName, int newNumber){

    Cage c1;

    c1.name = newName;

    c1.number = newNumber;

}


