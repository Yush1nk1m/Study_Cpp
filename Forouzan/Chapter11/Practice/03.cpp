#include "03.h"
#include <iostream>
using namespace std;

First::First(int a)
: a(a)
{
}

void First::print() const
{
    cout << "a : " << a << endl;
}

Second::Second(int a, int b)
: First(a), b(b)
{
}

void Second::print() const
{
    First::print();
    cout << "b : " << b << endl;
}

Third::Third(int a, int b, int c)
: Second(a, b), c(c)
{
}

void Third::print() const
{
    Second::print();
    cout << "c : " << c << endl;
}