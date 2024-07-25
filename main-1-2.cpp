#include <iostream>

extern double array_mean(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << array_mean(array, 5) << std::endl;
    return 0;
}