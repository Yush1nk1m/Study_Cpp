#include <iostream>
#include <cassert>
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        Circle(double radius);
        ~Circle();
        double getRadius() const;
        double getPeri() const;
        double getArea() const;
};

class Sphere : public Circle
{
    public:
        Sphere(double radius);
        ~Sphere();
        double getCylinderSurface(double height) const;
        double getCylinderVolume(double height) const;
        double getArea() const;
        double getVolume() const;
};