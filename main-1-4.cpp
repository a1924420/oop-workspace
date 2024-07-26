#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[] = {4,5,6,7,8};
    int secondarray[] = {2,9,3,6,1};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "The number is: " << sum_two_arrays(array, secondarray, n) << std::endl;
    return 0;
}