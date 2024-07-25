#include <iostream>

extern double sum_even(double array[], int n);

int main() {
    double array[] = {2,6,9,9,8,3,9,1,4,5,2};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << sum_even(array, n) << std::endl;
    return 0;
}