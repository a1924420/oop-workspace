#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

int main(){

    House myHouse(4);

    Fridge myFridge(800, 380);
    TV myTV(200, 65);

    myHouse.addAppliance(&myFridge);
    myHouse.addAppliance(&myTV);

    myFridge.turnOn();
    myTV.turnOn();

    std::cout << "Total Power Consumption: " << myHouse.getTotalPowerConsumption() << std::endl;

    return 0;

}