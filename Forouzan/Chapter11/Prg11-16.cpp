/****************************************
 * An interface file for Person class   *
****************************************/
#ifndef PERSON_H
#define PERSON_H
#include "date3.h"

// definition for Person class
class Person
{
    private:
        long identity;
        Date birthDate;
    public:
        Person(long identity, Date birthDate);
        ~Person();
        void print() const;
};
#endif