#include "01.h"
#include <iostream>
using namespace std;

int main()
{
    Square square(4);
    Cube cube(4);

    cout << "Square" << endl;
    cout << "Perimeter : " << square.getPeri() << endl;
    cout << "Area : " << square.getArea() << endl << endl;

    cout << "Cube" << endl;
    cout << "Area : " << cube.getArea() << endl;
    cout << "Volume : " << cube.getVolume() << endl << endl;

    return 0;
}