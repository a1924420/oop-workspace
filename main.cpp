#include <iostream>

extern void changeValue(double* ptr);

extern void printArray(double* array, int size);

extern double arrayMax(double* array, int size);

extern double* dynamicArray(int N, double M);

int main(){

    double a = 12;
    std::cout << "initial value: " << a << std::endl;
    changeValue(&a);
    std::cout << "changed value: " << a << std::endl;

    double array[] = {2.4,3.5,4.6,5.7,6.8,7.9};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "array elements: ";
    printArray(array, size);

    double maxVal = arrayMax(array,size);
    std::cout << "max value: " << maxVal << std::endl;

    int N = 9;
    double M = 4.0;

    double* dynamicArr = dynamicArray(N, M);

    for (int i = 0; i < N; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArr;

    return 0;

}