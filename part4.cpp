#include <iostream>

double arrayMax(double* array, int size){

    double max = array[0];

    for (int i = 1; i < size; i++){
        if (array[i] > array[i-1]){
            max = array[i];
        }
    }

    return max;

}

