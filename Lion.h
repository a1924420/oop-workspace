#ifndef LION_H
#define LION_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Animal.h"

class Lion: public Animal{

    public:

    Lion(std::string name, int age, int length, int width, int height): Animal(name, age, length, width, height) {

        type = AnimalType::mammal;

    }

    std::string sound() override{
        return "Roar";
    }

};

#endif
