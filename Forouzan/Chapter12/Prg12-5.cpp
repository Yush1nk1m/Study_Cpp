/****************************************
 * An interface file for Student class  *
****************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person
{
    private:
        double gpa;
    public:
        Student(string name, double gpa);
        virtual void print() const;
};
#endif