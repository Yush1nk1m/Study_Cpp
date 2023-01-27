#include "02.h"

int main()
{
    Rectangle rectangle(2, 3);
    Cuboid cuboid(2, 3, 4);

    cout << "RECTANGLE" << endl;
    cout << "Perimeter : " << rectangle.getPeri() << endl;
    cout << "Area : " << rectangle.getArea() << endl << endl;

    cout << "CUBOID" << endl;
    cout << "Area : " << cuboid.getArea() << endl;
    cout << "Volume : " << cuboid.getVolume() << endl;

    return 0;
}