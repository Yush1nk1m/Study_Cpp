/****************************************************
 * An interface file for TA concrete class          *
 * inherited by Person, StdType, PrfType classes    *
****************************************************/
#ifndef TA_H
#define TA_H
#include "person3.h"
#include "stdtype.h"
#include "prftype.h"

class TA : public Person, public StdType, public PrfType
{
    public:
        TA(string name, double gpa, double salary);
        void printGPA() const;
        void printSalary() const;
        void print() const;
};
#endif