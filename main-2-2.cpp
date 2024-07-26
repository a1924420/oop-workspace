#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int array[] = {0,4,2,3,6,1};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << max_element(array, n) << std::endl;
    return 0;
}