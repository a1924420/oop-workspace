#include <iostream>

void changeValue(double* ptr){

    *ptr = 42;

}

int main(){

    double a = 12;

    std::cout << a << std::endl;

    changeValue(&a);

    std::cout << a << std::endl;

    return 0;
}