/****************************************************************
 * A program which uses class in Object-Oriented-Programming    *
****************************************************************/
#include <iostream>
using namespace std;

/****************************************************************
 * Class definition                                             *
 * declare data members and member functions                    *
****************************************************************/
class Circle
{
    private:
        double radius;
    public:
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double value);
};

/****************************************************************
 * Member function definition                                   *
 * declared in the part of class declaration                    *    
****************************************************************/
// getRadius function definition
double Circle::getRadius() const
{
    return radius;
}
// getArea function definition
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
// getPerimeter function definition
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
// setRadius function definition
void Circle::setRadius(double value)
{
    radius = value;
}
/************************************************************
 * Application part                                         *
 * instantiate a class to create object and utilize it      *
************************************************************/
int main()
{
    // create the first circle object and call member functions
    cout << "Circle 1 : " << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "Radius : " << circle1.getRadius() << endl;
    cout << "Area : " << circle1.getArea() << endl;
    cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;
    // create the second circle object and call member functions
    cout << "Circle 2 : " << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius : " << circle2.getRadius() << endl;
    cout << "Area : " << circle2.getArea() << endl;
    cout << "Perimeter : " << circle2.getPerimeter() << endl << endl;
    return 0;
}