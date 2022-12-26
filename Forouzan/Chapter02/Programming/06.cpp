#include <iostream>
using namespace std;

int main() {
    double side;
    cout << "Enter the side length of a square : ";
    cin >> side;

    double circumference = side * 4;
    double area = side * side;

    cout << "The circumference of the square : " << circumference << endl;
    cout << "The area of the square : " << area << endl;

    return 0;
}