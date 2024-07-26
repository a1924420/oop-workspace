#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int array[] = {4,5,6,7,8};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "The number is: " << min_element(array, n) << std::endl;
    return 0;
}