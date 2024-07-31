#include <iostream>

extern void print_summed(int array1[3][3],int array2[3][3]);

int main(){
    int array1[3][3] = {
        {0, 1, 2},
        {5, 4, 3}, 
        {8, 6, 7}
    };

    int array2[3][3] = {
        {5, 9, 3},
        {8, 1, 6}, 
        {7, 0, 2}
    };

    print_summed(array1, array2);

    return 0;
}