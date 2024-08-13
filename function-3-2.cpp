#include <iostream>

int *readNumbers(){

    int *numbers = new int[10];
    int number;

    for (int i = 0; i < 10; i++){
        std::cout << "Enter a number: ";
        std::cin >> number;
        numbers[i] = number;
    }

    return numbers;

}

int *reverseArray(int *numbers1,int length){

    int *numbers2 = new int[10];

    for (int i = 0; i < length; i++){
        numbers2[i] = numbers1[length-1-i];
    }

    return numbers2;

}

bool equalsArray(int *numbers1,int *numbers2,int length){

    if (length < 1) return false;

    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]) return false;
    }

    return true;

}