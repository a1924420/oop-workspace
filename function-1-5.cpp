#include <iostream>

int count_evens(int number){
    int total = 0;
    for (int i = 0; i < number; i++) {
        if (number < 1){
            total = 0;
        } else if (i > 1 && i % 2 == 0) {
            total = total + 1;
        }  
    }

    return total;
}