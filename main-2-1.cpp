#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

int main(){

    Helicopter h1;

    std::cout << "Weight: " << h1.get_weight() << std::endl;
    std::cout << "Fuel: " << h1.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << h1.get_numberOfFlights() << std::endl;

    Helicopter h2(5000, "Helly");

    std::cout << "Weight: " << h2.get_weight() << std::endl;
    std::cout << "Fuel: " << h2.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << h2.get_numberOfFlights() << std::endl;

    h2.fly(20, 2);

    std::cout << "Weight: " << h2.get_weight() << std::endl;
    std::cout << "Fuel: " << h2.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << h2.get_numberOfFlights() << std::endl;

    return 0;
}