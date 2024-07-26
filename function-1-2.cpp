#include <iostream>

double array_mean(int array[], int n){

    if (n < 1) return 0;

    int total = 0;

    for (int i = 0; i < n; i++) {
            total = total + array[i];
    }

    double ave = static_cast<double>(total) / n;

    ave = (int)(ave * 10) / 10.0;

    return ave;
}
