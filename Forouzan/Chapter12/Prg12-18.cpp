/********************************************
 * An implementation file for Circle class  *
********************************************/
#include "circle.h"

// constructor
Circle::Circle(double radius)
: radius(radius)
{
    if (!isValid())
    {
        cout << "It is an invalid circle." << endl;
        assert(false);
    }
}
// destructor
Circle::~Circle()
{
}
// definition of print member function
void Circle::print() const
{
    cout << "The radius of this circle = " << radius << endl;
}
// find the area
double Circle::getArea() const
{
    return (3.14 * radius * radius);
}
// find the perimeter
double Circle::getPerimeter() const
{
    return (2 * 3.14 * radius);
}
// isValid private member function
bool Circle::isValid() const
{
    return (radius > 0.0);
}