#ifndef PARROT_H
#define PARROT_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Animal.h"

class Parrot: public Animal{

    public:

    Parrot(std::string name, int age, int length, int width, int height): Animal(name, age, length, width, height) {

        type = AnimalType::bird;

    }

    std::string sound() override{
        return "Squawk";
    }

};

#endif