#include <iostream>

int num_count(int array[], int n, int number){
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (n < 1){
            total = 0;
        } else if (array[i] == number) {
            total = total + 1;
        }  
    }

    return total;
}