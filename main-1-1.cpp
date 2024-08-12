#include <iostream>

extern int *readNumbers();

extern void printNumbers(int *numbers,int length);

int main(){

    int length = 10;

    int *numbers = readNumbers();

    printNumbers(numbers, length);

    delete[] numbers;

    return 0;
}