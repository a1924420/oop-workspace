#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include "Appliance.h"

class House {

    private:

    Appliance** appliances;

    int numAppliances;

    int currentAppliances;

    public:

    House();

    House(int numAppliances);

    bool addAppliance(Appliance* appliance);

    double getTotalPowerConsumption();

    ~House();

};

#endif