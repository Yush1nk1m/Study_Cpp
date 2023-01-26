/****************************************************
 * An application file which uses Employee class    *
****************************************************/
#include "employee4.h"

int main()
{
    // instantiation
    Employee employee1("Mary", "B", "White", 22120.00);
    Employee employee2("William", "S", "Black", 46700.00);
    Employee employee3("Ryan", "A", "Brown", 12500.00);
    // output
    employee1.print();
    employee2.print();
    employee3.print();
    return 0;
}