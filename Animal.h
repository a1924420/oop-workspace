#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <tuple>
#include <vector>

class Animal{

    public:

    enum class AnimalType{
        mammal,
        bird,
        reptile
    };

    protected:

    std::pair<std::string, int> info;

    std::tuple<int, int, int> enclosure;

    AnimalType type;

    public:

    Animal(std::string name, int age, int length, int width, int height): info(name, age), enclosure(length, width, height){}

    std::pair<std::string, int> getInfo(){
        return info;
    }

    virtual std::string sound() = 0;

};

#endif