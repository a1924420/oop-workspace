#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <string>

class University {

      private: 

    std::string name;
    std::string location;

    public:

    void addCourse(int id, std::string name);
};

#endif