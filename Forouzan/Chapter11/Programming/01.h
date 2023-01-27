#include <cassert>

class Square
{
    private:
        double side;
    public:
        Square(double side);
        ~Square();
        double getPeri() const;
        double getArea() const;
};

class Cube : public Square
{
    public:
        Cube(double side);
        ~Cube();
        double getArea() const;
        double getVolume() const;
};