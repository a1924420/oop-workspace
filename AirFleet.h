#ifndef AIRFLEET_H
#define AIRFLEET_H

#include <iostream>
#include "AirCraft.h"

class AirFleet{

    protected:

    AirCraft **fleet;

    public:

    AirFleet();

    AirCraft **get_fleet();

};

#endif