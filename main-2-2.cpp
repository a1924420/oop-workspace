#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main(){

    TV t1;

    std::cout << "Power Rating: " << t1.get_powerRating() << std::endl;
    std::cout << "is On: " << t1.get_isOn() << std::endl;
    std::cout << "Screen Size: " << t1.getScreenSize() << std::endl;
    std::cout << "Power Consumption: " << t1.getPowerConsumption() << std::endl;

    t1.set_powerRating(200);
    t1.setScreenSize(65);
    t1.set_isOn(true);

    std::cout << "Power Rating: " << t1.get_powerRating() << std::endl;
    std::cout << "is On: " << t1.get_isOn() << std::endl;
    std::cout << "Screen Size: " << t1.getScreenSize() << std::endl;
    std::cout << "Power Consumption: " << t1.getPowerConsumption() << std::endl;

}