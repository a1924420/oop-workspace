#include <iostream>
#include <string>

#include "practice.h"

using namespace std;

/*Student* studentFactory(){

    Student* k = new Student();

    return k;
}

int main() {
    
    Student* p = studentFactory();

    p->set_grade(99.95);

    cout << p->get_name() << endl;

    cout << p->get_grade() << endl;

    return 0;
}*/

Student* foo(){
    Student* a = new Student[5];

    return a;
}

int main(){

    Student* a = foo();

    for (size_t i = 0; i < 5; i++){
        cout << a[i].get_name() << endl;
    }

    delete[] a;

    return 0;
}