/****************************************
 * An interface file for SmartPtr class *
****************************************/
#ifndef SMARTPTR_H
#define SMARTPTR_H
#include <iostream>
#include "fraction.h"
using namespace std;

class Fraction;         // forward declaration
class SmartPtr
{
    private:
        Fraction* ptr;
    public:
        SmartPtr(Fraction* ptr);
        ~SmartPtr();
        Fraction& operator*() const;
        Fraction* operator->() const;
};
#endif