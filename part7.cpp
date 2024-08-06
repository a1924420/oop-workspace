#include <iostream>

double* dynamicArray(int N, double M){

    double* array = new double[N];

    for (int i = 0; i < N; i++){
        array[i] = M*i;
    }

    return array;

}

