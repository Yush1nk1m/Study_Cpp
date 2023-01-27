#include "07.h"

int main()
{
    Student student("YUSHIN", 3.92);
    Course course1("CSE3001-01", 3);
    Course course2("CSE3002-01", 3);
    Course course3("CSE3003-01", 3);
    Course course4("CSE4001-01", 3);
    Course course5("CSE4002-01", 3);
    Course course6("CSE4003-01", 3);

    student.addCourse(course1);
    student.addCourse(course2);
    student.addCourse(course3);
    student.addCourse(course4);
    student.addCourse(course5);
    student.addCourse(course6);

    student.printInfo();

    return 0;
}