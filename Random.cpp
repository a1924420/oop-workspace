#include <iostream>
#include <string>
#include "Random.h"

using namespace std;

Fruits::Fruits() : fruit("N/A"), num_fruits(0) {}

Fruits::Fruits(string fruit, int num_fruits) : fruit(fruit), num_fruits(num_fruits) {}

Fruits::~Fruits(){}

int main(){

    Fruits f1, f2, f3;

    f1.set_num_fruits(3);

    Fruits* array = new Fruits[3];

    f1.set_fruit("banana");

    f2.set_fruit("pineapple");

    f3.set_fruit("coconut");

    array[0] = f1;

    array[1] = f2;

    array[2] = f3;

    for(int i = 0; i < 3; i++){
        cout << array[i].get_fruit() << endl;
    }

    delete[] array;

    return 0;

}