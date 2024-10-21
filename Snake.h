#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "Animal.h"

class Snake: public Animal{

    public:

    Snake(std::string name, int age, int length, int width, int height): Animal(name, age, length, width, height) {

        type = AnimalType::reptile;

    }

    std::string sound() override{
        return "Hiss";
    }

};

#endif