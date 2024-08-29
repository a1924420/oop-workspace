#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main(){

    ParkingLot myParkingLot(10);

    int max = myParkingLot.getMax();

        Vehicle** vehicles = new Vehicle*[max];

    for (int i = 0; i < max; i++){

        std::string type;
        std::cout << "Enter vehicle type (Car, Bus or Motorbike): " << std::endl;
        std::cin >> type;

        int ID;
        std::cout << "Enter vehicle ID: " << std::endl;
        std::cin >> ID;

        Vehicle* vehicle = nullptr;

        if (type == "car" || type == "Car"){
            vehicles[i]= new Car(ID);
        } else if (type == "bus" || type == "Bus"){
            vehicles[i] = new Bus(ID);
        } else if (type == "motorbike" || type == "Motorbike"){
            vehicles[i] = new Motorbike(ID);
        } else {
            std::cout << "Invalid vehicle type." << std::endl;
            i--;
        }

        if (vehicle != nullptr){
            myParkingLot.parkVehicle(vehicle);
        }

    }

    int ID;
    std::cout << "Enter the ID of the car you want to unpark: " << std::endl;
    std::cin >> ID;
    myParkingLot.unparkVehicle(ID);
    
}