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

int secondSmallestSum(int *numbers,int length){


    int largestSum = 0;

    for (int i = 0; i < length; i++){
        largestSum += numbers[i];
    }

    int smallest = largestSum + 1;
    int secondSmallest = largestSum + 1;

    for (int i = 0; i < length; i++){
        int sum = 0;
        for (int j = i; j < length; j++){
            sum += numbers[j];

            if (sum < smallest){
                secondSmallest = smallest;
                smallest = sum;
            } else if (sum < secondSmallest && sum != smallest){
                secondSmallest = sum;
            }
        }
    }

    return secondSmallest;

}