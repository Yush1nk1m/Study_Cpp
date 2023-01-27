/********************************************
 * An interface file for Professor class    *
********************************************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person2.h"

class Professor : virtual public Person     // virtual inheritance
{
    protected:
        double salary;
    public:
        Professor(string name, double salary);
        ~Professor();
        void print() const;
};
#endif