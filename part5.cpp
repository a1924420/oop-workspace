#include <iostream>

double* dynamicArray(int N){

    double* array = new double[N];

    for (int i = 0; i < N; i++){
        array[i] = N-i;
    }

    return array;

}

