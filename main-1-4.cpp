#include <iostream>

extern void print_scaled(int array[3][3],int scale);

int main(){
    int array[3][3] = {
        {0, 1, 2},
        {5, 4, 3}, 
        {8, 6, 7}
    };

    int scale = 4;

    print_scaled(array, scale);

    return 0;
}