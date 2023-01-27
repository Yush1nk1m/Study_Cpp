/****************************************
 * An interface file for Square class   *
****************************************/
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

// class definition
class Square : public Shape
{
    private:
        double side;
        bool isValid() const;
    public:
        Square(double side);
        ~Square();
        void print() const;
        double getArea() const;
        double getPerimeter() const;
};
#endif