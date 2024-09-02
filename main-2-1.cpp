#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main(){

    Fridge f1;

    std::cout << "Power Rating: " << f1.get_powerRating() << std::endl;
    std::cout << "is On: " << f1.get_isOn() << std::endl;
    std::cout << "Volume: " << f1.getVolume() << std::endl;
    std::cout << "Power Consumption: " << f1.getPowerConsumption() << std::endl;

    f1.set_powerRating(800);
    f1.setVolume(380);
    f1.set_isOn(true);

    std::cout << "Power Rating: " << f1.get_powerRating() << std::endl;
    std::cout << "is On: " << f1.get_isOn() << std::endl;
    std::cout << "Volume: " << f1.getVolume() << std::endl;
    std::cout << "Power Consumption: " << f1.getPowerConsumption() << std::endl;

}