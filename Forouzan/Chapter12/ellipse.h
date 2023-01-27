/****************************************
 * An interface file for Ellipsse class *
****************************************/
#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

// class definition
class Ellipse : public Shape
{
    private:
        double radius1;
        double radius2;
        bool isValid() const;
    public:
        Ellipse(double radius1, double radius2);
        ~Ellipse();
        void print() const;
        double getArea() const;
        double getPerimeter() const;
};
#endif