/************************************************************
 * An interface file which provides data members            *
 * and member functions' declaration of Circle class        *
 * it is read from implementation file and application file *
************************************************************/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
using namespace std;
// class definition
class Circle
{
    private:
        double radius;
    public:
        Circle(double radius);          // parameter constructor
        Circle();                       // default constructor
        Circle(const Circle& circle);   // copy constructor
        ~Circle();                      // destructor
        void setRadius(double radius);  // setter
        double getRadius() const;       // getter
        double getArea() const;         // getter
        double getPerimeter() const;    // getter
};
#endif