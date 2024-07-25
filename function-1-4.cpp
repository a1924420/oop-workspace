#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (n < 1){
            total = 0;
        } else {
            total = total + array[i] + secondarray[i];
        }  
    }

    return total;
}