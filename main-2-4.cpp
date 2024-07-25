#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int array[] = {4,6,5,7,8};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << (is_ascending(array, n) ? "True" : "False") << std::endl;
    return 0;
}