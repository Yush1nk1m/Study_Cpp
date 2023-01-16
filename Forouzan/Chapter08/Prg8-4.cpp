/********************************************************
 * A program which creates an array of Circle object    *
 * with compiled Circle class                           *
********************************************************/
#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    // array declaration
    Circle circles[3];
    // object instantiation
    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);
    // print information
    for (int i = 0; i < 3; i++)
    {
        cout << "circles[" << i << "]'s information" << endl;
        cout << "Radius : " << circles[i].getRadius() << "\t";
        cout << "Area : " << circles[i].getArea() << "\t";
        cout << "Perimeter : " << circles[i].getPerimeter() << endl;
    }
    return 0;
}