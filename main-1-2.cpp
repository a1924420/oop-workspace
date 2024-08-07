#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){

    double array[] = {3.4,2.5,7.0,1.9,5.6,7.8};

    int size = sizeof(array) / sizeof(array[0]);

    double value = 0.1;

    modifyArray(array, size, value);

    return 0;

}