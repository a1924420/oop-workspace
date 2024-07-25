#include <iostream>

int array_sum(int array[], int n){
        int total = 0;
    for (int i = 0; i < n; i++) {
        if (n < 1){
            total = 0;
        } else {
            total = total + array[i];
        }
    }

    return total;
}