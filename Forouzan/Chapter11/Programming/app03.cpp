#include "03.h"

int main()
{
    Circle circle(3);
    Sphere sphere(3);

    cout << "CIRCLE" << endl;
    cout << "Perimeter : " << circle.getPeri() << endl;
    cout << "Area : " << circle.getArea() << endl << endl;

    cout << "CYLINDER" << endl;
    cout << "Surface : " << sphere.getCylinderSurface(3) << endl;
    cout << "Volume : " << sphere.getCylinderVolume(3) << endl << endl;

    cout << "SPHERE" << endl;
    cout << "Area : " << sphere.getArea() << endl;
    cout << "Volume : " << sphere.getVolume() << endl;

    return 0;
}