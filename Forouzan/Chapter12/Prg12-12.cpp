/********************************************
 * An implementation file for Square class  *
********************************************/
#include "square.h"

// constructor
Square::Square(double side)
: side(side)
{
    if (!isValid())
    {
        cout << "It is an invalid square." << endl;
        assert(false);
    }
}
// destructor
Square::~Square()
{
}
// definition of print member function
void Square::print() const
{
    cout << "The size of this square = " << side << endl;
}
// find the area
double Square::getArea() const
{
    return (side * side);
}
// find the perimeter
double Square::getPerimeter() const
{
    return (4 * side);
}
// isValid private member function
bool Square::isValid() const
{
    return (side > 0.0);
}