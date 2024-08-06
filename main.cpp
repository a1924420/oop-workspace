#include <iostream>

extern void changeValue(double* ptr);

extern void printArray(double* array, int size);

extern double arrayMax(double* array, int size);

extern double* dynamicArray(int N, double M);

int main(){

    double a = 12;

    std::cout << a << std::endl;

    changeValue(&a);

    std::cout << a << std::endl;

    double array[] = {2.4,3.5,4.6,5.7,6.8,7.9};

    int size = sizeof(array) / sizeof(array[0]);

    printArray(array, size);

    arrayMax(array,size);

    std::cout << arrayMax(array,size) << std::endl;

    int N = 9;

    double M = 9;

    double* array = dynamicArray(N, M);

    for (int i = 0; i < N; i++){
        std::cout << array[i] << " ";
    }
    std::cout<< std::endl;

    delete[] array;

    return 0;

}