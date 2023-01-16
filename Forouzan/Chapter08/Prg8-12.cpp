/****************************************
 * Create various Student objects and   *
 * print their name, score, grade       *
****************************************/
#include "student.h"

int main()
{
    // create an array with default constructor
    Student students[5];
    // instantiate 5 objects by parameter constructor
    students[0] = Student("George", 82);
    students[1] = Student("John", 73);
    students[2] = Student("Luci", 91);
    students[3] = Student("Mary", 72);
    students[4] = Student("Sue", 65);
    // print names, scores, grades of students
    for (int i = 0; i < 5; i++)
    {
        students[i].print();
    }
    return 0;
}