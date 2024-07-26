#include <iostream>

int count_evens(int number){

    int total = 0;
    for (int i = 0; i < number; i += 2) {
        if (number < 1) return 0;
        total += 1;
    }

    return total;
}