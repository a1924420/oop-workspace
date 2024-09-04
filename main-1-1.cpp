#include <iostream>
#include "AirCraft.h"

int main(){

    AirCraft a1;

    std::cout << "Weight: " << a1.get_weight() << std::endl;
    std::cout << "Fuel: " << a1.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << a1.get_numberOfFlights() << std::endl;

    AirCraft a2(2500);

    std::cout << "Weight: " << a2.get_weight() << std::endl;
    std::cout << "Fuel: " << a2.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << a2.get_numberOfFlights() << std::endl;

    return 0;
}