#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[] = {4,5,6,7,8,5,9,7,5};
    int n = sizeof(array) / sizeof(array[0]);
    int number = 5;
    std::cout << "The number is: " << num_count(array, n, number) << std::endl;
    return 0;
}