/************************************************
 * An interface file for Person concrete class  *
************************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person
{
    private:
        string name;
    public:
        Person(string name);
        void print() const;
};
#endif