/****************************************************
 * An example for usation of class in O.O.P.        *
****************************************************/
#include <iostream>
using namespace std;

/********************************************************
 * Class definition                                     *
 * declare parameter constructor, default constructor,  *
 * copy constructor, destructor, member functions       *
********************************************************/
class Circle
{
    private:
        double radius;
    public:
        Circle(double radius);              // parameter constructor
        Circle();                           // default constructor
        ~Circle();                          // destructor
        Circle(const Circle& circle);       // copy constructor
        void setRadius(double radius);      // setter
        double getRadius() const;           // getter
        double getArea() const;             // getter
        double getPerimeter() const;        // getter
};
/********************************************************
 * Member function definition                           *
 * define parameter constructor, default constructor,   *
 * copy constructor, destructor, member functions       *
********************************************************/
// parameter constructor definition
Circle::Circle(double radius)
: radius(radius)
{
    cout << "Parameter constructor has been called." << endl;
}
// defalut constructor definition
Circle::Circle()
: radius(0.0)
{
    cout << "Default constructor has been called." << endl;
}
// copy constructor definition
Circle::Circle(const Circle& circle)
: radius(circle.radius)
{
    cout << "Copy constructor has been called." << endl;
}
// destructor definition
Circle::~Circle()
{
    cout << "Destructor has been called : " << radius << endl;
}
// setRadius member function definition
void Circle::setRadius(double value)
{
    radius = value;
}
// getRadius member function definition
double Circle::getRadius() const
{
    return radius;
}
// getArea member function definition
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
// getPerimeter member function definition
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
/************************************************************
 * Application:                                             *
 * Create three numbers of Circle instance and              *
 * call member functions                                    *
************************************************************/
int main()
{
    // instantiate circle1 and call member functions
    Circle circle1(5.2);
    cout << "Radius : " << circle1.getRadius() << endl;
    cout << "Area : " << circle1.getArea() << endl;
    cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;
    // instantiate circle2 and call member functions
    Circle circle2(circle1);
    cout << "Radius : " << circle2.getRadius() << endl;
    cout << "Area : " << circle2.getArea() << endl;
    cout << "Perimeter : " << circle2.getPerimeter() << endl << endl;
    // instantiate circle3 and call member functions
    Circle circle3;
    cout << "Radius : " << circle3.getRadius() << endl;
    cout << "Area : "<< circle3.getArea() << endl;
    cout << "Perimeter : " << circle3.getPerimeter() << endl << endl;
    // destructor call
    return 0;
}