#include <iostream>

int max_element(int array[], int n){

    if (n < 1) return 0;

    int max;

    for (int i = 0; i < n; i++){
        if (array[i] > array[i-1] && array[i] > array[i+1]){
            max = array[i];
        }
    }

    return max;
}