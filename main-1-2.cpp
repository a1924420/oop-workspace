#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){

    double array[] = {3.4,2.5,6.9,1.4,5.6,7.8};

    int size = sizeof(array) / sizeof(array[0]);

    double value = 2.5;

    modifyArray(array, size, value);

    return 0;

}