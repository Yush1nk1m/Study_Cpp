#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

#ifndef PASCAL_H
#define PASCAL_H

class Pascal
{
    private:
        int degree;
        int** table;
    public:
        Pascal(int degree);
        ~Pascal();
        void print() const;
        int operator()(int i, int j) const;
};
#endif