#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

#ifndef MULTITABLE_H
#define MULTITABLE_H

class MultiTable
{
    private:
        int size;
        int** table;
    public:
        MultiTable(int size);
        ~MultiTable();
        void print() const;
};

#endif