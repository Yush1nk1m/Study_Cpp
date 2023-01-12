#include "01.h"

One::One()
: x(0), y(0)
{
}

One::One(int x, int y)
: x(x), y(y)
{
}

One::One(const One& one)
: x(one.x), y(one.y)
{
}

One::~One()
{
}

void One::setX(int x)
{
    this->x = x;
}

void One::setY(int y)
{
    this->y = y;
}

int One::getX() const
{
    return x;
}

int One::getY() const
{
    return y;
}