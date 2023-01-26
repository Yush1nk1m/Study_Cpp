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
        Student();
        Student(long identity, double gpa);
        ~Student();
        Student(const Student& student);
        void print() const;
};
#endif