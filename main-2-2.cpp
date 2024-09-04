#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"

int main(){

    Airplane b1;

    std::cout << "Weight: " << b1.get_weight() << std::endl;
    std::cout << "Fuel: " << b1.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << b1.get_numberOfFlights() << std::endl;
    std::cout << "numPassengers: " << b1.get_numPassengers() << std::endl;


    Airplane b2(5000, 200);

    std::cout << "Weight: " << b2.get_weight() << std::endl;
    std::cout << "Fuel: " << b2.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << b2.get_numberOfFlights() << std::endl;
    std::cout << "numPassengers: " << b2.get_numPassengers() << std::endl;

    b2.fly(20, 2);

    std::cout << "Weight: " << b2.get_weight() << std::endl;
    std::cout << "Fuel: " << b2.get_fuel() << std::endl;
    std::cout << "Number of Flights: " << b2.get_numberOfFlights() << std::endl;
    std::cout << "numPassengers: " << b2.get_numPassengers() << std::endl;

    return 0;
}