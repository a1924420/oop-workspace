#include <iostream>

extern int sum_if_palindrome(int integers[], int length);

int main(){

    int integers[] = {1,2,3,4};
    int length = sizeof(integers) / sizeof(integers[0]);

    std::cout << sum_if_palindrome(integers, length) << std::endl;

    return 0;

}