#include <iostream>

extern void printArray(double* array, int size);

int main(){
    
    double array[] = {2.4,3.5,4.6,5.7,6.8,7.9};

    int size = sizeof(array) / sizeof(array[0]);

    printArray(array, size);

    return 0;

}