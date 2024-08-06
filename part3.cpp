#include <iostream>

void printArray(double* array, int size){

    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

}

