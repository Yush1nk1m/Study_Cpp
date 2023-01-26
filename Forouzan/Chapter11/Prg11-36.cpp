/************************************************
 * An interface file for StudentSchedule class  *
************************************************/
#ifndef STUDENTSCHEDULE_H
#define STUDENTSCHEDULE_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

// class definition
class StudentSchedule
{
    private:
        int size;
        string* courseNames;
    public:
        StudentSchedule();
        ~StudentSchedule();
        void addCourse(string course);
        void print() const;
};
#endif