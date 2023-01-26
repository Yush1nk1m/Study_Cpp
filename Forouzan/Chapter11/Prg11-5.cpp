/********************************************
 * An implementation file for Student class *
********************************************/
#include "student.h"

// default constructor
Student::Student()
: Person(), gpa(0.0)
{
}
// parameter constructor
Student::Student(long id, double gp)
: Person(id), gpa(gp)
{
    assert(0.0 <= gpa && gpa <= 4.0);
}
// copy constructor
Student::Student(const Student& student)
: Person(student), gpa(student.gpa)
{
}
// destructor
Student::~Student()
{
}
// getter member function
void Student::print() const
{
    Person::print();
    cout << "GPA : " << fixed << setprecision(2) << gpa << endl;
}