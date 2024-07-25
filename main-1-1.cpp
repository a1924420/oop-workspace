#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << array_sum(array, 5) << std::endl;
    return 0;
}