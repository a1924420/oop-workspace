#include <iostream>
#include <iomanip>

extern double array_mean(int array[], int n);

int main() {
    int array[] = {2,5,6,9,1};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << array_mean(array, n) << std::endl;
    return 0;
}