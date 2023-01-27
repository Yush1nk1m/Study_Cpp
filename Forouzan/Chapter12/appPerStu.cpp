/************************************************************
 * An application file which uses Person, Student classes   *
************************************************************/
#include "student.h"

int main()
{
    // create polymorphism variable
    Person* ptr;
    // instantiation Person object in the heap
    ptr = new Person("Lucie");
    cout << "Person information" << endl;
    ptr->print();
    cout << endl;
    delete ptr;
    // instantiation Student object in the heap
    ptr = new Student("John", 3.9);
    cout << "Student information" << endl;
    ptr->print();
    delete ptr;
    return 0;
}