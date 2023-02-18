/********************************************
 * An implementation file for Student class *
********************************************/
#include "student.h"

// constructor
Student::Student(int identity, string name, double gpa)
: identity(identity), name(name), gpa(gpa)
{
}
// destructor
Student::~Student()
{
}
// print member function
void Student::print() const
{
    cout << setw(3) << right << identity << " ";
    cout << setw(12) << left << name << " ";
    cout << setw(6) << right << showpoint << setprecision(3) << gpa << endl;
}
// friend operator overload
bool operator<(const Student& left, const Student& right)
{
    return (left.identity < right.identity);
}