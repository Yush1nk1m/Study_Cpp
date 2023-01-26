/********************************************
 * An application file which uses classes   *
********************************************/
#include "student2.h"
#include "employee2.h"

int main()
{
    // instantiate and use Person class
    cout << "Person :" << endl;
    Person person("john");
    person.print();
    cout << endl << endl;
    // instantiate and use Student class
    cout << "Student :" << endl;
    Student student("Mary", 3.9);
    student.print();
    cout << endl << endl;
    // instantiate and use Employee class
    cout << "Employee :" << endl;
    Employee employee("Juan", 78000.00);
    employee.print();
    cout << endl << endl;
    return 0;
}