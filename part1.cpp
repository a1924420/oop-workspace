#include <iostream>

int main(){
    double a = 23;
    char b = 'B';

    double* aa = &a;
    char* bb = &b;

    std::cout << *aa << "\n" << std::endl;
    std::cout << *bb << "\n" << std::endl;

    return 0;

}