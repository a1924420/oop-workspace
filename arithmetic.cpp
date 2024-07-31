#include <iostream>
#include <string>
#include <algorithm>

std::string arithmetic(const std::string& a, const std::string& b){
    int maxLength = std::max(a.length(), b.length());
    std::string result(maxLength, '0');

    std::string prependA = std::string(maxLength - a.length(), '0') + a;
    std::string prependB = std::string(maxLength - b.length(), '0') + b;

    int carry = 0;
    for (int i = maxLength - 1; i >= 0; i--) {
        int bitA = prependA[i] - '0';
        int bitB = prependB[i] - '0';

        int sum = bitA + bitB + carry;
        result[i] = (sum % 2) + '0'; 
        carry = sum / 2; 
    }

    if (carry) {
        result.insert(result.begin(), '1');
    }

    return result;
}

int main(){

    std::string bin1, bin2;

    std::cout << "Enter binary number: ";
    std::cin >> bin1;
    std::cout << "Enter second binary number: ";
    std::cin >> bin2;

    std::string result = arithmetic(bin1, bin2);

    std::cout << "Addition Answer: " << result << std::endl;

    return 0;
}
