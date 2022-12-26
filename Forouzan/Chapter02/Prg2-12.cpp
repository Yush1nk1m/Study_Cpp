/********************************************************************************
 * A program which finds out perimeter and area of circle based on radius       *
********************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration of a constant
    const double PI = 3.14159;
    // declaration of three variables
    double radius;
    double perimeter;
    double area;
    // receive radius input
    cout << "Enter the radius of a circle : ";
    cin >> radius;
    // calculate perimeter and area and assign them into variables
    perimeter = 2 * PI * radius;
    area = PI * PI * radius;
    // print radius, perimeter and area
    cout << "Radius : " << radius << endl;
    cout << "Perimeter : " << perimeter << endl;
    cout << "Area : " << area << endl;
    return 0;
}