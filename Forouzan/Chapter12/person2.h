/****************************************
 * An interface file for Person class   *
****************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <cassert>
using namespace std;

class Person
{
    protected:
        string name;        // protected data member
    public:
        Person(string name);
        ~Person();
        void print() const;
};
#endif