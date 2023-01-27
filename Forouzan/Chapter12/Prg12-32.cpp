/************************************************
 * An interface file for PrfType virtual class  *
************************************************/
#ifndef PRFTYPE_H
#define PRFTYPE_H
#include <iostream>
using namespace std;

class PrfType
{
    protected:
        double salary;
    public:
        virtual void printSalary() const = 0;
};
#endif