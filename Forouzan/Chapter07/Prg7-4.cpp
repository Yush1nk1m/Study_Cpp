/************************************************************
 * A program which declares, defines, uses Rectangle class  *
************************************************************/
#include <iostream>
#include <cassert>
using namespace std;
/************************************************************
 * Rectangle class definition                               *
 * (declare data members and member functions)              *
************************************************************/
class Rectangle
{
    private:
        double length;          // data member
        double height;          // data member
    public:
        Rectangle(double length, double height);    // constructor
        Rectangle(const Rectangle& rect);           // copy constructor
        ~Rectangle();                               // destructor
        void print() const;                         // getter member
        double getArea() const;                     // getter member
        double getPerimeter() const;                // getter member
};
/************************************************************
 * Define constructor, destructor, getter function          *
************************************************************/
// parameter constructor
Rectangle::Rectangle(double len, double hgt)
: length(len), height(hgt)
{
    if ((length <= 0.0) || (height <= 0.0))
    {
        cout << "Cannot generate a Rectangle object." << endl;
        assert(false);
    }
}
// copy constructor
Rectangle::Rectangle(const Rectangle& rect)
: length(rect.length), height(rect.height)
{
}
// destructor
Rectangle::~Rectangle()
{
}
// getter function print
void Rectangle::print() const
{
    cout << "The length of the rectangle : " << length << ", The height of the rectangle : " << height << endl;
}
// getter function getArea
double Rectangle::getArea() const
{
    return (length * height);
}
// getter function getPerimeter
double Rectangle::getPerimeter() const
{
    return (2 * (length + height));
}
/****************************************************************
 * An application which instantiates and utilizes 3 objects     *
****************************************************************/
int main()
{
    // instantiate 3 objects
    Rectangle rect1(3.0, 4.2);      // use parameter constructor
    Rectangle rect2(5.1, 10.2);     // use parameter constructor
    Rectangle rect3(rect2);         // use copy constructor
    // call member functions of the first object
    cout << "Rectangle 1 : ";
    rect1.print();
    cout << "Area : " << rect1.getArea() << endl;
    cout << "Perimeter : " << rect1.getPerimeter() << endl << endl;
    // call member function of the second object
    cout << "Rectangle 2 : ";
    rect2.print();
    cout << "Area : " << rect2.getArea() << endl;
    cout << "Perimeter : " << rect2.getPerimeter() << endl << endl;
    // call member functions of the third object
    cout << "Rectangle 3 : ";
    rect3.print();
    cout << "Area : " << rect3.getArea() << endl;
    cout << "Perimeter : " << rect3.getPerimeter() << endl;
    return 0;
}