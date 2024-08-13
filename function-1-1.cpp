#include <iostream>

int *readNumbers(){

    int *numbers = new int[10];
    int number;

    for (int i = 0; i < 10; i++){
        std::cout << "Enter a number: ";
        std::cin >> number;
        numbers[i] = number;
    }

    return numbers;

}

void printNumbers(int *numbers, int length){

    for (int i = 0; i < length; i++){
        std::cout << i; 
        std::cout << " "; 
        std::cout << numbers[i] << std::endl;
    } 

}