#include <iostream>

extern int *readNumbers();

extern int secondSmallestSum(int *numbers,int length);

int main(){

    int length = 10;

    int *numbers = readNumbers();

    std::cout << secondSmallestSum(numbers, length) << std::endl;

    delete[] numbers;

    return 0;
}