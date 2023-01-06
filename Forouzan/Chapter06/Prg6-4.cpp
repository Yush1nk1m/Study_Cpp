/***************************************************************
 * A program which finds out the perimeter and area of         *
 * a regular polygon with the number of side and their length  *
***************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // variable declaration
    const double PI = 3.141592653589793238462;
    int n;
    double s, peri, area;
    // receive input of the number of side
    do
    {
        cout << "Enter the number of side(as an integer 4 or more) : ";
        cin >> n;
    } while (n < 4);
    // receive input of the lengths of the sides
    do
    {
        cout << "Enter the length of the sides : ";
        cin >> s;
    } while (s <= 0.0);
    peri = n * s;
    area = (n * pow(s, 2)) / (4 * tan(PI / n));
    // print result
    cout << "The perimeter : " << peri << endl;
    cout << "The area : " << area << endl;
    return 0;
}