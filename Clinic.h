#ifndef CLINIC_H
#define CLINIC_H

#include <iostream>
#include <string>
#include "Cage.h"

class Clinic{

    private:

    std::string name;

    int max_size;

    Cage new_cage;

    public:

    Clinic();

    Clinic(std::string name, int max_size);

    int getNumber_of_cages();

    std::string getName();

    Cage * getCages();

    bool addCage(Cage new_cage);

    ~Clinic();

};

#endif