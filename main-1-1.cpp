#include <iostream>
#include "Appliance.h"

int main(){

    Appliance a1;

    std::cout << "Power rating: " << a1.get_powerRating() << std::endl;
    std::cout << "is On: " << a1.get_isOn() << std::endl;

    a1.turnOn();

    std::cout << "Appliance has been turned on." << std::endl;

    std::cout << "is On: " << a1.get_isOn() << std::endl;

    a1.set_powerRating(2000);

    std::cout << "Power rating: " << a1.get_powerRating() << std::endl;

    return 0;

}