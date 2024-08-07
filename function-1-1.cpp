/*In a file named function-1-1.cpp, create a function named arrayMin 
that accepts a pointer to an array of doubles and its size as arguments, 
and returns the minimum value in the array. In your main-1-1.cpp, create a double array, 
call this arrayMin function, and then print the minimum value found. 
[don't print anything from inside arrayMin]*/

#include <iostream>

double arrayMin(double* array, int size){

    double min = array[0];

    for (int i = 1; i < size; i++){
        if (array[i] < min){
            min = array[i];
        }
    }

    return min;

}