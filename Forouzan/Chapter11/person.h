/****************************************
 * An interface file for Person class   *
****************************************/
#ifndef PERSON_H
#define PERSON_H
#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
    private:
        long identity;
    public:
        Person();
        Person(long identity);
        ~Person();
        Person(const Person& person);
        void print() const;
};
#endif