#include <iostream>

extern double arrayMin(double* array, int size);

int main(){

    double array[] = {3.4,2.5,6.9,1.4,5.6,7.8};

    int size = sizeof(array) / sizeof(array[0]);

    arrayMin(array, size);

    std::cout << "Minimum value of array: " << arrayMin(array, size) << std::endl;

    return 0;

}