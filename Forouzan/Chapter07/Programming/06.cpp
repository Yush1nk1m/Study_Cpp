#include <iostream>
#include <cmath>
#include <cassert>
#include "06.h"
using namespace std;

Triangle::Triangle(int fs, int ss, int ts)
: firstSide(fs), secondSide(ss), thirdSide(ts)
{
    if ((fs + ss < ts) ||
        (fs + ts < ss) ||
        (ss + ts < fs))
    {
        assert(false);
    }
}

void Triangle::getSides() const
{
    cout << "First side : " << firstSide << endl;
    cout << "Second side : " << secondSide << endl;
    cout << "Third side : " << thirdSide << endl << endl;
}

int Triangle::getPerimeter() const
{
    return firstSide + secondSide + thirdSide;
}

double Triangle::getArea() const
{
    double p = this->getPerimeter() / 2.0;
    return sqrt((p) * (p - this->firstSide) * (p - this->secondSide) * (p - this->thirdSide));
}