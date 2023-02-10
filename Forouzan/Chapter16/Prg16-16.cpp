/********************************************************************
 * An interface file for Student class to store to the binary file  *
********************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

class Student
{
    private:
        int stdId;
        char stdName[20];
        double stdGpa;
    public:
        Student(int, const string&, double);
        Student();
        ~Student();
        int getId() const;
        string getName() const;
        double getGpa() const;
};
#endif