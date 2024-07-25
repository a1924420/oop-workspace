#include <iostream>

double array_mean(int array[], int n){
    int total = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (n < 1){
            total = 0.0;
        } else {
            total = total + array[i];
        }  
    }

    a = (a + total)/n;

    double ave = a;

    return ave;
}
