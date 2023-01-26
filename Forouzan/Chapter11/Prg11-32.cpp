/********************************************
 * An interface file for CourseRoster class *
********************************************/
#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

// class definition
class CourseRoster
{
    private:
        int size;
        string* stdNames;
    public:
        CourseRoster();
        ~CourseRoster();
        void addStudent(string studentName);
        void print() const;
};
#endif