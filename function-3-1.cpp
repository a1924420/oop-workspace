#include <iostream>

int *readNumbers(){

    int *numbers = new int[10];
    int number;

    for (int i = 0; i < 10; i++){
        std::cin >> number;
        numbers[i] = number;
    }

    std::cout << "Array has been filled" << std::endl;

    return numbers;

}

bool equalsArray(int *numbers1,int *numbers2,int length){

    if (length < 1) return false;

    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]) return false;
    }

    return true;

}