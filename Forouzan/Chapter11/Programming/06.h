#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class Student
{
    private:
        string name;
        double gpa;
    public:
        Student();
        Student(string name, double gpa);
        Student(const Student& student);
        ~Student();
        void printInfo() const;
};

class Course
{
    private:
        long capacity;
        Student* students;
        static long size;
    public:
        Course(long capacity);
        ~Course();
        void addStudent(const Student& student);
        void printInfo() const;
};