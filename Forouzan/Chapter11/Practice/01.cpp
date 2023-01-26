#include "01.h"
#include <iostream>
using namespace std;

void First::set(int a)
{
    this->a = a;
}

void First::print() const
{
    cout << "a : " << a << endl;
}

void Second::set(int a, int b)
{
    First::set(a);          // delegation
    this->b = b;
}

void Second::print() const
{
    First::print();         // delegation
    cout << "b : " << b << endl;
}