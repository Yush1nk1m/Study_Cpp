#include "07.h"

Course::Course()
{
}

Course::Course(string name, int unit)
: name(name), unit(unit)
{
}

Course::Course(const Course& course)
: name(course.name), unit(course.unit)
{
}

Course::~Course()
{
}

void Course::printInfo() const
{
    cout << "Course name : " << name << endl;
    cout << "Course credits : " << unit << endl;
}

int Student::size = 0;

Student::Student(string name, double gpa)
: name(name), gpa(gpa)
{
    assert(gpa >= 0.0 && gpa <= 4.3);
    courses = new Course[100];
}

Student::~Student()
{
    delete[] courses;
}

void Student::addCourse(const Course& course)
{
    if (size < 100)
    {
        courses[size++] = course;
    }
    else
    {
        cout << "Unable to add new course." << endl;
        assert(false);
    }
}
void Student::printInfo() const
{
    cout << "Student information" << endl;
    cout << "Name : " << name << endl;
    cout << "GPA : " << gpa << " / 4.3" << endl;
    cout << "Course completed" << endl;
    for (int i = 0; i < size; i++)
    {
        courses[i].printInfo();
    }
}