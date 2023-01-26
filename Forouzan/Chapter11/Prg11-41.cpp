/************************************************
 * An implementation file for Registrar class   *
************************************************/
#include "registrar.h"

// constructor
Registrar::Registrar()
{
}
// destructor
Registrar::~Registrar()
{
}
// enroll function
void Registrar::enroll(Student student, Course course)
{
    (course.getRoster())->addStudent(student.getName());
    (student.getSchedule())->addCourse(course.getName());
}