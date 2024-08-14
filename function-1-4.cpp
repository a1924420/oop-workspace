#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){

    PersonList newList;

    newList.people = pl.people;

    return newList;

}