#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){

    int decimal_number_int = std::stoi(decimal_number);

    if (decimal_number_int == 0) {
        std::cout << "0" << std::endl;
        return;
    }

    std::string binary_str;

    while (decimal_number_int > 0) {
        binary_str = std::to_string(decimal_number_int % 2) + binary_str;
        decimal_number_int /= 2;
    }

    std::cout << binary_str << std::endl;

}

