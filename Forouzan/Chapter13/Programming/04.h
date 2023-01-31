#ifndef SET_H
#define SET_H
#include <iostream>
using namespace std;

class Set
{
    private:
        int size;
        int* set;
    public:
        Set();
        ~Set();
        const Set set_union(const Set& second) const;
        const Set set_difference(const Set& second) const;
        const Set set_intersection(const Set& second) const;
        Set& operator+=(int data);
        Set& operator-=(int data);
        friend const Set operator*(const Set& first, const Set& second);
        friend const Set operator+(const Set& first, const Set& second);
        friend const Set operator-(const Set& first, const Set& second);
        void print() const;
};
#endif