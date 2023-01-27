/********************************************
 * An application file which uses classes   *
********************************************/
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "ellipse.h"

int main()
{
    // instantiate and use Square class
    cout << "Information of a square" << endl;
    Square square(5);
    square.print();
    cout << "Area : " << square.getArea() << endl;
    cout << "Perimeter : " << square.getPerimeter() << endl;
    cout << endl;
    // instantiate and use Rectangle class
    cout << "Information of a rectangle" << endl;
    Rectangle rectangle(5, 4);
    rectangle.print();
    cout << "Area : " << rectangle.getArea() << endl;
    cout << "Perimeter : " << rectangle.getPerimeter() << endl;
    cout << endl;
    // instantiate and use Triangle class
    cout << "Information of a triangle" << endl;
    Triangle triangle(3, 4, 5);
    triangle.print();
    cout << "Area : " << triangle.getArea() << endl;
    cout << "Perimeter : " << triangle.getPerimeter() << endl;
    cout << endl;
    // instantiate and use Circle class
    cout << "Information of a circle" << endl;
    Circle circle(5);
    circle.print();
    cout << "Area : " << circle.getArea() << endl;
    cout << "Perimeter : " << circle.getPerimeter() << endl;
    cout << endl;
    // instantiate and use Ellipse class
    cout << "Information of an ellipse" << endl;
    Ellipse ellipse(5, 4);
    ellipse.print();
    cout << "Area : " << ellipse.getArea() << endl;
    cout << "Perimeter : " << ellipse.getPerimeter() << endl;
    return 0;
}