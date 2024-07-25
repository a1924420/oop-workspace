#include <iostream>

extern void print_pass_fail(char grade);

int main() {
    char grade = 'D';
    print_pass_fail(grade);
    return 0;
}