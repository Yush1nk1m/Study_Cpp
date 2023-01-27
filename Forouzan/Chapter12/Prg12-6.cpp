/********************************************
 * An implementation file for Student class *
********************************************/
#include "student.h"

// definition of Student class' constructor
Student::Student(string name, double gpa)
: Person(name), gpa(gpa)
{
}
// definition of print virtual function in Student class
void Student::print() const
{
    Person::print();
    cout << "GPA : " << gpa << endl;
}