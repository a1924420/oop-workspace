#include <iostream>

extern double* duplicateArray(double* array, int size);

int main(){

    double array[] = {3.4,2.5,7.0,1.9,5.6,7.8};

    int size = sizeof(array) / sizeof(array[0]);

    duplicateArray(array, size);

    delete[] array;

    return 0;

}