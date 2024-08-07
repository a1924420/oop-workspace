/*In a file named function-1-3.cpp, create a function named duplicateArray that accepts a 
pointer to a double array and its size as arguments. The function should dynamically allocate 
a new double array of the same size, copy all elements from the original array to the new one, 
and return the pointer to the new array. In your main-1-3.cpp, call duplicateArray to duplicate an array.*/

#include <iostream>

double* duplicateArray(double* array, int size){

    double* newArray = array;

    for (int i = 0; i < size; i++){
        newArray[i] = array[i];
    }

    return newArray;

}