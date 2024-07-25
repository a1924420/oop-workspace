#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
    int array[] = {2,6,9,9,8,3,9,1,4,5,2};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << weighted_average(array, n) << std::endl;
    return 0;
}