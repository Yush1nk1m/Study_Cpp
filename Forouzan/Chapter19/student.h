/****************************************
 * An interface file for Student class  *
****************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <set>
#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
    private:
        int identity;
        string name;
        double gpa;
    public:
        Student(int identity, string name, double gpa);
        ~Student();
        void print() const;
        friend bool operator<(const Student& left, const Student& right);
};
#endif