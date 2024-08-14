#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main(){

    int n = 3;

    Person* array = createPersonArray(n);

    for (int i = 0; i < n; i++){
        std::cout << array[i].name << " " << array[i].age << std::endl;
    }

    delete[] array;

    return 0;
    
}