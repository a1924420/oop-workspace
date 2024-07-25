#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[] = {1,2,1,2,1};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << (is_fanarray(array, n) ? "True" : "False") << std::endl;
    return 0;
}