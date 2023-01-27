#include "02.h"

Rectangle::Rectangle(double length, double width)
: length(length), width(width)
{
    assert(length > 0.0);
    assert(width > 0.0);
}

Rectangle::~Rectangle()
{
}

double Rectangle::getPeri() const
{
    return (2 * length + 2 * width);
}

double Rectangle::getArea() const
{
    return (length * width);
}

Cuboid::Cuboid(double length, double width, double height)
: Rectangle(length, width), height(height)
{
    assert(height > 0.0);
}

Cuboid::~Cuboid()
{
}

double Cuboid::getArea() const
{
    return ((2 * Rectangle::getArea()) + (Rectangle::getPeri() * height));
}

double Cuboid::getVolume() const
{
    return (Rectangle::getArea() * height);
}