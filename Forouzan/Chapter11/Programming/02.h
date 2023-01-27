#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
    private:
        double length;
        double width;
    public:
        Rectangle(double length, double width);
        ~Rectangle();
        double getPeri() const;
        double getArea() const;
};

class Cuboid : public Rectangle
{
    private:
        double height;
    public:
        Cuboid(double length, double width, double height);
        ~Cuboid();
        double getArea() const;
        double getVolume() const;
};