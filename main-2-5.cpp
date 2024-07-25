#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array[] = {8,7,6,5,4};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << (is_descending(array, n) ? "True" : "False") << std::endl;
    return 0;
}