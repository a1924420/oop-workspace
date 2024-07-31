#include <iostream>

extern int sum_min_max(int integers[], int length);

int main(){

    int integers[] = {22,59,31,84,63,11,71};
    int length = sizeof(integers) / sizeof(integers[0]);

    std::cout << sum_min_max(integers, length) << std::endl;

    return 0;

}