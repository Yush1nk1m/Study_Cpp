#include "06.h"

Student::Student()
{
}

Student::Student(string name, double gpa)
: name(name), gpa(gpa)
{
    assert(gpa >= 0.0 && gpa <= 4.3);
}

Student::Student(const Student& student)
: name(student.name), gpa(student.gpa)
{
    assert(gpa >= 0.0 && gpa <= 4.3);
}

Student::~Student()
{
}

void Student::printInfo() const
{
    cout << "Name : " << name << endl;
    cout << "GPA : " << gpa << endl;
}

long Course::size = 0;

Course::Course(long capacity)
{
    assert(capacity > 0);
    students = new Student[capacity];
}

Course::~Course()
{
    delete[] students;
}

void Course::addStudent(const Student& student)
{
    if (size < capacity)
    {
    students[size++] = student;
    }
    else
    {
        cout << "There's no space for additional student in the course." << endl;
        assert(false);
    }
}

void Course::printInfo() const
{
    cout << "Information of this course" << endl;
    for (int i = 0; i < size; i++)
    {
        students[i].printInfo();
    }
}