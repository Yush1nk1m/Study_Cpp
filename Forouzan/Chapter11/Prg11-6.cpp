/********************************************************************
 * An application file which uses Person class and Student class    *
********************************************************************/
#include "student.h"

int main()
{
    // instantiate and use Person object
    Person person(111111111);
    cout << "Information for Person object :" << endl;
    person.print();
    cout << endl;
    // instantiate and use Student object
    Student student(222222222, 3.9);
    cout << "Information for Student object :" << endl;
    student.print();
    cout << endl;
}