#include <iostream>

extern double* duplicateArray(double* array, int size);

int main(){

    double array[] = {3.4,2.5,6.9,1.4,5.6,7.8};

    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Duplicated array: ";

    duplicateArray(array, size);

    return 0;

}