/****************************************
 * An interface file for Person class   *
****************************************/
#ifndef PERSON2_H
#define PERSON2_H
#include <iostream>
#include <string>
using namespace std;

// definition for Person class
class Person
{
    private:
        string name;
    public:
        Person(string name);
        ~Person();
        void print() const;
};
#endif