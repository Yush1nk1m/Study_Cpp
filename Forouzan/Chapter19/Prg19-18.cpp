/************************************************
 * An application file which uses Student class *
************************************************/
#include "student.h"

int main()
{
    // create 6 instances of Student class
    Student student1(120, "George", 3.78);
    Student student2(185, "Mary", 3.95);
    Student student3(110, "Richard", 4.00);
    Student student4(245, "Alen", 3.70);
    Student student5(172, "John", 3.00);
    Student student6(195, "Lucie", 3.80);
    // insert above instances to the set
    set<Student> studentSet;
    studentSet.insert(student1);
    studentSet.insert(student2);
    studentSet.insert(student3);
    studentSet.insert(student4);
    studentSet.insert(student5);
    studentSet.insert(student6);
    // output
    set<Student>::iterator iter;
    for (iter = studentSet.begin(); iter != studentSet.end(); iter++)
    {
        iter->print();
    }
    return 0;
}