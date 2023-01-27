/************************************
 * An interface file for TA class   *
************************************/
#ifndef TA_H
#define TA_H
#include "student2.h"
#include "professor.h"

class TA : public Professor, public Student     // multiple inheritance
{
    public:
        TA(string name, double gpa, double salary);
        ~TA();
        void print() const;
};
#endif