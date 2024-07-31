#include <iostream>
#include <vector>
#include <algorithm>

std::string transform(int number){

    if (number == 0) return "0";

    std::string binaryString;

    while (number > 0){
        int remainder = number % 2;
        binaryString.push_back('0' + remainder);
        number = number / 2;
    }

    std::reverse(binaryString.begin(), binaryString.end());

    return binaryString;

}

int main(){
    int number = 75;
    std::cout << transform(number) << std::endl;
    return 0;
}