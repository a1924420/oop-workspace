#include <iostream>

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length){

    if (length <= 0) return -1;

    if (is_palindrome(integers, length)) {
        return sum_array_elements(integers, length);
    } else {
        return -2;
    }
}

bool is_palindrome(int integers[], int length){

    for (int i = 0; i < length/2; i++){
        if (integers[i] != integers[length-i-1]){
            return false;
        }
    }

    return true;

}

int sum_array_elements(int integers[], int length){

    if (length <=0) return -1;

    int total = 0;

    for (int i = 0; i < length; i++){
        total += integers[i];
    }

    return total;

}


