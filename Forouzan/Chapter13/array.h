/****************************************
 * An interface file for Array class    *
****************************************/
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;

class Array
{
    private:
        double* ptr;
        int size;
    public:
        Array(int size);        // constructor
        ~Array();               // destructor
        double& operator[](int index) const;        // getter
        double& operator[](int index);              // setter
};
#endif