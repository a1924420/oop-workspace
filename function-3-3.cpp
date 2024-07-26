#include <iostream>
#include <vector>

double weighted_average(int array[], int n){

    if (n < 1){
        return 0;
    }

    double total = 0.0;

    std::vector<int> counted(n, -1);

    for (int i = 0; i < n; i++){
        if (counted[i] != -1) continue;

        int count = 0;

        for (int j = 0; j < n; j++){
            if (array[i] == array[j]){
                count++;
                counted[j] = true;
            }
        }

        total += (array[i] * count);

    }

    double weightedAvg = total / n;

    weightedAvg = static_cast<int>(weightedAvg * 10) / 10.0;

    return weightedAvg;

}