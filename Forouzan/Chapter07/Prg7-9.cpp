/********************************************************
 * An application file which instantiates objects,      *
 * calls and processes member functions of the object   *
 * to compile this file, to read the interface file     *
********************************************************/
#include "circle.h"
int main()
{
    // instantiate the first object and call its member functions
    Circle circle1(5.2);
    cout << "Radius : " << circle1.getRadius() << endl;
    cout << "Area : " << circle1.getArea() << endl;
    cout << "Perimeter : " << circle1.getPerimeter() << endl << endl;
    // instantiate the second object and call its member functions
    Circle circle2(circle1);
    cout << "Radius : " << circle2.getRadius() << endl;
    cout << "Area : " << circle2.getArea() << endl;
    cout << "Perimeter : " << circle2.getPerimeter() << endl << endl;
    // instantiate the third object and call its member functions
    Circle circle3;
    cout << "Radius : " << circle3.getRadius() << endl;
    cout << "Area : " << circle3.getArea() << endl;
    cout << "Perimeter : " << circle3.getPerimeter() << endl << endl;
    return 0;
}