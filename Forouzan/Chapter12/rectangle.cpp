/************************************************
 * An implementation file for Rectangle class   *
************************************************/
#include "rectangle.h"

// constructor
Rectangle::Rectangle(double length, double width)
: length(length), width(width)
{
    if (!isValid())
    {
        cout << "It is an invalid rectangle." << endl;
        assert(false);
    }
}
// destructor
Rectangle::~Rectangle()
{
}
// definition of print member function
void Rectangle::print() const
{
    cout << "The size of this rectangle = " << length << " X " << width << endl;
}
// find the area
double Rectangle::getArea() const
{
    return (length * width);
}
// find the perimeter
double Rectangle::getPerimeter() const
{
    return (2 * (length + width));
}
// isValid private member function
bool Rectangle::isValid() const
{
    return (length > 0.0 && width > 0.0);
}