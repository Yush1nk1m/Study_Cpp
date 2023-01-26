/************************************
 * An interface file for Name class *
************************************/
#ifndef NAME_H
#define NAME_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Name
{
    private:
        string first;
        string init;
        string last;
    public:
        Name(string first, string init, string last);
        ~Name();
        void print() const;
};
#endif