#include <iostream>
#include <string>
#include "Cage.h"

using namespace std;

int main(){

    Cage d1;

    cout << d1.getName() << " " << d1.getIDnum() << endl;

    Cage c1("Fluffy", 1234);

    cout << c1.getName() << " " << c1.getIDnum() << endl;

    return 0;
    
}