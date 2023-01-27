#include "04.h"

int main()
{
    Circle circle(3);
    Cylinder cylinder(3, 4);

    cout << "CIRCLE" << endl;
    cout << "Perimeter : " << circle.getPeri() << endl;
    cout << "Area : " << circle.getArea() << endl << endl;

    cout << "CYLINDER" << endl;
    cout << "Surface : " << cylinder.getSurface() << endl;
    cout << "Volume : " << cylinder.getVolume() << endl;

    return 0;
}