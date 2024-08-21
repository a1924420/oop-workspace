#include <iostream>
#include <string>
#include "Cage.h"

Cage::Cage() : name(""), number(0){}

Cage::Cage(std::string newName, int newNumber){

    name = newName;

    number = newNumber;

    getName();

    getIDnum();

}

