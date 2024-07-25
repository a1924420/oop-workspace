#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 9;
    std::cout << "The number is: " << count_evens(number) << std::endl;
    return 0;
}