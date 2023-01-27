/****************************************
 * An interface file for Person class   *
****************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
    public:
        Person(string name);
        virtual ~Person();
        virtual void print() const;
};
#endif