/****************************************
 * An interface file for Student class  *
****************************************/
#ifndef STUDENT2_H
#define STUDENT2_H
#include "person2.h"

// definition for Student class
class Student : public Person
{
    private:
        string name;
        double gpa;
    public:
        Student(string name, double gpa);
        ~Student();
        void print() const;
};
#endif