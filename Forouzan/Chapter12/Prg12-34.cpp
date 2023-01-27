/************************************************
 * An interface file for Student concrete class *
 * inherited by Person, StdType classes         *
************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person3.h"
#include "stdtype.h"

class Student : public Person, public StdType
{
    public:
        Student(string name, double gpa);
        void printGPA() const;
        void print() const;
};
#endif