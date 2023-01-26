/****************************************
 * An interface file for Employee class *
****************************************/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "name4.h"

class Employee
{
    private:
        Name name;
        double salary;
    public:
        Employee(string first, string init, string last, double salary);
        ~Employee();
        void print() const;
};
#endif