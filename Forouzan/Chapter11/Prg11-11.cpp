/****************************************
 * An interface file for Employee class *
****************************************/
#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H
#include "person2.h"

// definition for Employee class
class Employee : public Person
{
    private:
        string name;
        double salary;
    public:
        Employee(string name, double salary);
        ~Employee();
        void print() const;
};
#endif