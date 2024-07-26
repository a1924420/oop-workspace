#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int array[] = {4,5,6,7,8};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "The number is: " << array_sum(array, n) << std::endl;
    return 0;
}