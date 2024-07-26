#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 4;
    std::cout << count_evens(number) << std::endl;
    return 0;
}