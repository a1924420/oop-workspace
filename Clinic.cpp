#include <iostream>
#include <string>
#include "Cage.h"
#include "Clinic.h"

Clinic::Clinic(){

    Clinic d;

    d.name = "";

    d.max_size = 0;

}

Clinic::Clinic(std::string name, int max_size){
    
    Clinic c;

    c.name = name;

    c.max_size = max_size;

    Clinic* array = new Clinic[max_size];

    for (int i = 0; i < max_size; i++){


    }

}

