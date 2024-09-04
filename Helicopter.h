#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <iostream>
#include "AirCraft.h"

class Helicopter: public AirCraft{

    private:

    std::string name;

    int headwind;

    int minutes;

    public:

    Helicopter();

    Helicopter(int w, std::string n);

    void fly(int headwind, int minutes);

    std::string get_name();

    void set_name(std::string name);

};

#endif