#ifndef CLINIC_H
#define CLINIC_H

#include <iostream>
#include <string>
#include "Cage.h"

class Clinic{

    private:

    std::string name;

    int max_size;

    int current_size;

    Cage new_cage;

    public:

    Clinic();

    Clinic(std::string name, int max_size);

    int getNumber_of_cages(){return current_size;}

    std::string getName(){return name;}

    Cage * getCages();

    bool addCage(Cage new_cage);

    ~Clinic();

};

#endif