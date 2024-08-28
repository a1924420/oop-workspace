#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){

    int numOfVehicles;
    std::cout << "How many vehicles do you want to park?: " << std::endl;
    std::cin >> numOfVehicles;

    Vehicle** vehicles = new Vehicle*[numOfVehicles];

    for (int i = 0; i < numOfVehicles; i++){

        std::string type;
        std::cout << "Enter vehicle type (Car, Bus or Motorbike): " << std::endl;
        std::cin >> type;

        int ID;
        std::cout << "Enter vehicle ID: " << std::endl;
        std::cin >> ID;

        if (type == "car" || type == "Car"){
            vehicles[i] = new Car(ID);
        } else if (type == "bus" || type == "Bus"){
            vehicles[i] = new Bus(ID);
        } else if (type == "motorbike" || type == "Motorbike"){
            vehicles[i] = new Motorbike(ID);
        } else {
            std::cout << "Invalid vehicle type." << std::endl;
            i--;
        }

    }

    std::cout << "Parking Durations: " << std::endl;
    
    for (int i = 0; i < numOfVehicles; i++){
        std::cout << "ID: " << vehicles[i]->getID() << " Duration: " << vehicles[i]->getParkingDuration() << " seconds" << std::endl;
        delete vehicles[i];
    }

    delete[] vehicles;

    return 0;
}