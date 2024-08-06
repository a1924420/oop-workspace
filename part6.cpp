#include <iostream>

extern double* dynamicArray(int N);

extern double arrayMax(double* array, int size);

int main(){
    
    int N = 15;

    double* array = dynamicArray(N);

    for (int i = 0; i < N; i++){
        std::cout << array[i] << " ";
    }
    std::cout<< std::endl;

    arrayMax(array, N);    

    std::cout << arrayMax(array, N) << std::endl;

    delete[] array;

}