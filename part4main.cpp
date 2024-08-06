#include <iostream>

extern double arrayMax(double* array, int size);

int main(){

    double array[] = {6.5,3.4,2.2,9.1,6.8};

    int size = sizeof(array) / sizeof(array[0]);

    arrayMax(array,size);

    std::cout << arrayMax(array,size) << std::endl;

    return 0;

}