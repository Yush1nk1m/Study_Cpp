#include "03.h"

const double PI = 3.14159265358979;

Circle::Circle(double radius)
: radius(radius)
{
    assert(radius > 0.0);
}

Circle::~Circle()
{
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getPeri() const
{
    return (2 * PI * radius);
}

double Circle::getArea() const
{
    return (PI * radius * radius);
}

Sphere::Sphere(double radius)
: Circle(radius)
{
}

Sphere::~Sphere()
{
}

double Sphere::getCylinderSurface(double height) const
{
    return (2 * Circle::getArea() + (height * Circle::getPeri()));
}

double Sphere::getCylinderVolume(double height) const
{
    return (Circle::getArea() * height);
}

double Sphere::getArea() const
{
    return (2 * Circle::getRadius() * Circle::getPeri());
}

double Sphere::getVolume() const
{
    return (4.0 / 3.0 * Circle::getRadius() * Circle::getArea());
}