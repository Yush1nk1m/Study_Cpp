#include <iostream>
#include <cassert>
#include <limits>
using namespace std;

#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H

class SortedArray
{
    private:
        int capacity;
        int size;
        int* arr;
    public:
        SortedArray(int capacity);
        ~SortedArray();
        void insert(int data);
        void print() const;
};

#endif