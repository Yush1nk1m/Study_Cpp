/********************************************
 * An implementation file for Ellipse class *
********************************************/
#include "ellipse.h"

// constructor
Ellipse::Ellipse(double radius1, double radius2)
: radius1(radius1), radius2(radius2)
{
    if (!isValid())
    {
        cout << "It is an invalid ellipse." << endl;
        assert(false);
    }
}
// destructor
Ellipse::~Ellipse()
{
}
// definition of print member function
void Ellipse::print() const
{
    cout << "The radii of this ellipse = " << radius1 << " X " << radius2 << endl;
}
// find the area
double Ellipse::getArea() const
{
    return (3.14 * radius1 * radius2);
}
// find the perimeter
double Ellipse::getPerimeter() const
{
    double temp = (radius1 * radius1 + radius2 * radius2) / 2;
    return (2 * 3.14 * temp);
}
// isValid private member function
bool Ellipse::isValid() const
{
    return (radius1 > 0.0 && radius2 > 0.0);
}