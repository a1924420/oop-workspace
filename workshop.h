#include <iostream>

void changeValue(double* ptr){

    *ptr = 42;

}

int main(){

    double a = 12;

    std::cout << a << std::endl;

    changeValue(&a);

    std::cout << a << std::endl;

    return 0;
}

void printArray(double* array, int size){

    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

}

double arrayMax(double* array, int size){

    double max = array[0];

    for (int i = 1; i < size; i++){
        if (array[i] > array[i-1]){
            max = array[i];
        }
    }

    return max;

}

double* dynamicArray(int N, double M){

    double* array = new double[N];

    for (int i = 0; i < N; i++){
        array[i] = M*i;
    }

    return array;

}