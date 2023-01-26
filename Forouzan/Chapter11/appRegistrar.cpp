/************************************************
 * An application file which uses every class   *
************************************************/
#include "registrar.h"

int main()
{
    // Registrar object instantiation
    Registrar registrar;
    // Student object instantiation
    Student student1("John");
    Student student2("Mary");
    Student student3("Ann");
    // 3 Course objects instantiation
    Course course1("CIS101", 4);
    Course course2("CIS102", 3);
    Course course3("CIS103", 3);
    // enrollment based on Registrar object
    registrar.enroll(student1, course1);
    registrar.enroll(student1, course2);
    registrar.enroll(student2, course1);
    registrar.enroll(student2, course3);
    registrar.enroll(student3, course1);
    // print information for Student object
    student1.print();
    student2.print();
    student3.print();
    // print information for Course object
    course1.print();
    course2.print();
    course3.print();
    return 0;
}