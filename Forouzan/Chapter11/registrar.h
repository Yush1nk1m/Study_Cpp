/********************************************
 * An interface file for Registrar class    *
********************************************/
#ifndef REGISTRAR_H
#define REGISTRAR_H
#include "course.h"
#include "student3.h"

// class definition
class Registrar
{
    public:
        Registrar();
        ~Registrar();
        void enroll(Student student, Course course);
};
#endif