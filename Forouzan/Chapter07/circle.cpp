/********************************************************
 * An implementation file which implements Circle class *
 * it defines every member function,                    *
 * to compile this file, to read interface file         *
********************************************************/
#include "circle.h"
/****************************************************************
 * A constructor which has one paramenter                       *
 * use when you want to generate an object with initialization  *
 * it checks whether the argument is 0 or positive integer      *
 * or not, if it is not, terminates the program                 *
****************************************************************/
Circle::Circle(double rds)
: radius(rds)
{
    if (radius < 0.0)
    {
        assert(false);
    }
}
/****************************************************************
 * Default constructor                                          *
 * it generates a circle with radius of length 0.0                  *
****************************************************************/
Circle::Circle()
: radius(0.0)
{
}
/****************************************************************
 * Copy constructor                                             *
 * it generates an object based on the other circle's radius    *
 * extra condition checking is not needed                       *
 * because it is already done                                   *
****************************************************************/
Circle::Circle(const Circle& circle)
: radius(circle.radius)
{
}
/****************************************************************
 * Destructor                                                   *
 * when an object destructs, it organizes relevant things       *
****************************************************************/
Circle::~Circle()
{
}
/****************************************************************
 * setRadius function definition                                *
 * it is used when the radius of the circle is needed to change *
 * it checks whether the input argument is 0 or positive or not *
****************************************************************/
void Circle::setRadius(double value)
{
    radius = value;
    if (radius < 0.0)
    {
        assert(false);
    }
}
/************************************************************
 * getRadius function definition                            *
 * it returns the radius of the circle                      *
 * it attachs const to prevent the case that host object's  *
 * data member is changed                                   *
************************************************************/
double Circle::getRadius() const
{
    return radius;
}
/************************************************************
 * getArea function definition                              *
 * it returns the area of the circle                        *
 * it attachs const to prevent the case that host object's  *
 * data member is changed                                   *
************************************************************/
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
/************************************************************
 * getPerimeter function definition                         *
 * it returns the perimeter of the circle                   *
 * it attachs const to prevent the case that host object's  *
 * data member is changed                                   *
************************************************************/
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}