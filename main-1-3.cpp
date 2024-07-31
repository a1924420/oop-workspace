#include <iostream>

extern void count_digits(int array[4][4]);

int main(){
    int array[4][4] = {
        {0, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 2, 4, 0},
        {6, 7, 9, 9}
    };

    count_digits(array);

    return 0;
}