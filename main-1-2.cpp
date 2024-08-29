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

    while (myParkingLot.getCount() < myParkingLot.getMax()){

        std::string type;
        std::cout << "Enter vehicle type (Car, Bus or Motorbike): " << std::endl;
        std::cin >> type;

        int ID;
        std::cout << "Enter vehicle ID: " << std::endl;
        std::cin >> ID;

        Vehicle* vehicle = nullptr;

        if (type == "car" || type == "Car"){
            vehicle= new Car(ID);
        } else if (type == "bus" || type == "Bus"){
            vehicle = new Bus(ID);
        } else if (type == "motorbike" || type == "Motorbike"){
            vehicle = new Motorbike(ID);
        } else {
            std::cout << "Invalid vehicle type." << std::endl;
            continue;
        }

        if (vehicle != nullptr){
            myParkingLot.parkVehicle(vehicle);
        }

    }

    while (true){
        int ID;
        std::cout << "Enter the ID of the car you want to unpark or -1 to exit: " << std::endl;
        std::cin >> ID;

        if (ID== -1){
            break;
        }

        myParkingLot.unparkVehicle(ID);
    }

    return 0;
    
}