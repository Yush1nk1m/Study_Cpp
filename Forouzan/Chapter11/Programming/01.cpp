#include "01.h"

Square::Square(double side)
: side(side)
{
    assert(side > 0.0);
}

Square::~Square()
{
}

double Square::getPeri() const
{
    return (4 * side);
}

double Square::getArea() const
{
    return (side * side);
}

Cube::Cube(double side)
: Square(side)
{
}

Cube::~Cube()
{
}

double Cube::getArea() const
{
    return (6 * Square::getArea());
}

double Cube::getVolume() const
{
    return ((Square::getPeri() / 4) * Square::getArea());
}