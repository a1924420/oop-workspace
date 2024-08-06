#include <iostream>

extern double* dynamicArray(int N);

int main(){

    int N = 9;

    double* array = dynamicArray(N);

    for (int i = 0; i < N; i++){
        std::cout << array[i] << " ";
    }
    std::cout<< std::endl;

    delete[] array;

    return 0;

}