/********************************************
 * An implementation file for Course class  *
********************************************/
#include "course.h"

// constructor
Course::Course(string name, int units)
: name(name), units(units)
{
    roster = new CourseRoster;
}
// destructor
Course::~Course()
{
}
// definition of getName function
string Course::getName() const
{
    return name;
}
// definition of addStudent function
void Course::addStudent(string name)
{
    roster->addStudent(name);
}
// definition of getRoster function
CourseRoster* Course::getRoster() const
{
    return roster;
}
// definition of print function
void Course::print() const
{
    cout << "Course name : " << name << endl;
    cout << "Credits for the course : " << units << endl;
    roster->print();
}