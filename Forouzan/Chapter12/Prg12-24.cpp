/****************************************
 * An interface file for Student class  *
****************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person2.h"

class Student : virtual public Person       // virtual inheritance
{
    protected:
        double gpa;
    public:
        Student(string name, double gpa);
        ~Student();
        void print() const;
};
#endif