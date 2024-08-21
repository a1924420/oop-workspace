#include <iostream>
#include <string>
#include "Cage.h"

Cage::Cage() : name(""), number(0){}

Cage::Cage(std::string newName, int newNumber){

    Cage c1;

    c1.name = newName;

    c1.number = newNumber;

    std::cout << c1.name << " " << c1.number << std::endl;

}

