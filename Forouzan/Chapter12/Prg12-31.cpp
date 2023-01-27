/************************************************
 * An interface file for StdType virtual class  *
************************************************/
#ifndef STDTYPE_H
#define STDTYPE_H
#include <iostream>
using namespace std;

class StdType
{
    protected:
        double gpa;
    public:
        virtual void printGPA() const = 0;
};
#endif