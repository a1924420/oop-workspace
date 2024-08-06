#include <iostream>

extern double* dynamicArray(int N, double M);

extern void printArray(double* array, int size);

extern double arrayMax(double* array, int size);

int main(){

    int N = 16;

    double M = 4.0;

    double* array = dynamicArray(N,M);

    printArray(array, N);

    std::cout << "Max value in array: " << arrayMax(array, N) << std::endl;

    delete[] array;

    return 0;

}