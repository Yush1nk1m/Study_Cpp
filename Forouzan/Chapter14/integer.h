/****************************************
 * An interface file for Integer class  *
****************************************/
#ifndef INTEGER_H
#define INTEGER_H
#include "sp.h"

// Integer class definition
class Integer
{
    private:
        SP sp;
    public:
        Integer(int value);
        ~Integer();
        int getValue() const;
};
#endif