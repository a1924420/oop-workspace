#include <iostream>

extern int two_five_nine(int array[], int n);

int main() {
    int array[] = {2, 9, 2, 5, 9, 7, 3, 8, 6, 2, 5, 1, 0, 4, 9};
    int n = sizeof(array) / sizeof(array[0]);
    two_five_nine(array, n);
    return 0;
}