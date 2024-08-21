#include <iostream>
#include <string>
#include "Cage.h"
#include "Cage.cpp"

using namespace std;

int main(){

    Cage d1;

    cout << d1.getName() << " " << d1.getIDnum() << endl;

    Cage("Fluffy", 1234);

    Cage c1;

    cout << c1.getName() << " " << c1.getIDnum() << endl;

    return 0;
    
}