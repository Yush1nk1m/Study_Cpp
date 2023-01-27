#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class Course
{
    private:
        string name;
        int unit;
    public:
        Course();
        Course(string name, int unit);
        Course(const Course& course);
        ~Course();
        void printInfo() const;
};

class Student
{
    private:
        string name;
        double gpa;
        Course* courses;
        static int size;
    public:
        Student(string name, double gpa);
        ~Student();
        void addCourse(const Course& course);
        void printInfo() const;
};