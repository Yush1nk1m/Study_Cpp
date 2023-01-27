/************************************************
 * An implementation file for Triangle class    *
************************************************/
#include "triangle.h"

// constructor
Triangle::Triangle(double side1, double side2, double side3)
: side1(side1), side2(side2), side3(side3)
{
    if (!isValid())
    {
        cout << "It is an invalid triangle." << endl;
        assert(false);
    }
}
// destructor
Triangle::~Triangle()
{
}
// definition of print member function
void Triangle::print() const
{
    cout << "The size of this triangle = " << side1 << " X " << side2 << " X " << side3 << endl;
}
// find the area
double Triangle::getArea() const
{
    double s = (side1 + side2 + side3) / 2;
    return (sqrt(s * (s - side1) * (s - side2) * (s - side3)));
}
// find the perimeter
double Triangle::getPerimeter() const
{
    return (side1 + side2 + side3);
}
// isValid private member function
bool Triangle::isValid() const
{
    bool fact1 = (side1 + side2) > side3;
    bool fact2 = (side1 + side3) > side2;
    bool fact3 = (side2 + side3) > side1;
    return (fact1 && fact2 && fact3);
}