#include "04.h"

Cylinder::Cylinder(double radius, double height)
: Circle(radius), height(height)
{
    assert(height > 0.0);
}

Cylinder::~Cylinder()
{
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::getSurface() const
{
    return (height * Circle::getPeri() + 2 * Circle::getArea());
}

double Cylinder::getVolume() const
{
    return (height * Circle::getArea());
}