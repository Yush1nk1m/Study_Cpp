/****************************************************
 * An interface file for Professor concrete class   *
 * inherited by Person, PrfType classes             *
****************************************************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person3.h"
#include "prftype.h"

class Professor : public Person, public PrfType
{
    public:
        Professor(string name, double salary);
        void printSalary() const;
        void print() const;
};
#endif