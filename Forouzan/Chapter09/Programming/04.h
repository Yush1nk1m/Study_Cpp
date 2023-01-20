#include <iostream>
#include <cassert>
using namespace std;

#ifndef ARRAY_H
#define ARRAY_H

class Array
{
    private:
        int capacity;
        int size;
        int* arr;
    
    public:
        Array(int capacity);
        ~Array();
        void insert(int data);
        void print() const;
};

#endif