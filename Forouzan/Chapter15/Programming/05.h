#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;

template<typename T>
class Array
{
    private:
        T* ptr;
        int capacity;
        int size;
    public:
        Array(int capcity);
        ~Array();
        void add(const T& element);
        void print() const;
};
#endif