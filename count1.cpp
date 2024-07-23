#include <iostream>
// Sums together all positive numbers and returns them
int count(int array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            total += array[i];
        }
    }

    return total;
}