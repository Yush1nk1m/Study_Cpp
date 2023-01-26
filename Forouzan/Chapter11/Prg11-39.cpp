/********************************************
 * An implementation file for Student class *
********************************************/
#include "student3.h"

// constructor
Student::Student(string name)
: name(name)
{
    schedule = new StudentSchedule;
}
// destructor
Student::~Student()
{
}
// definition for getName function
string Student::getName() const
{
    return name;
}
// definition for getSchedule function
StudentSchedule* Student::getSchedule() const
{
    return schedule;
}
// definition for addCourse function
void Student::addCourse(string name)
{
    schedule->addCourse(name);
}
// definition for print function
void Student::print() const
{
    cout << "Student name : " << name << endl;
    schedule->print();
}