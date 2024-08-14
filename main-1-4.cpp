#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main(){

    int n = 4;

    PersonList list;

    list.numPeople = n;

    list.people = new Person[n];

    for (int i = 0; i < n; i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    PersonList newList = shallowCopyPersonList(list);

    for (int i = 0; i < n; i++){
        std::cout << newList.people[i].name << " " << newList.people[i].age << std::endl;
    }

    delete[] newList.people;

    return 0;

}