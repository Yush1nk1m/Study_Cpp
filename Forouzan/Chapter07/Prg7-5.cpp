/********************************************************************************
 * A program which generates objects, and counts the number of generated object *
********************************************************************************/
#include <iostream>
using namespace std;
/********************************
 * Rectangle class definition   *
********************************/
class Rectangle
{
    private:
        double length;
        double height;
        static int count;          // static data member
    public:
        Rectangle(double length, double height);
        Rectangle();
        ~Rectangle();
        Rectangle(const Rectangle& rect);
        static int getCount();      // static member function
};
// static data member initialization
int Rectangle::count = 0;
/****************************************
 * Instance member function definition  *
****************************************/
// parameter constructor definition
Rectangle::Rectangle(double len, double hgt)
: length(len), height(hgt)
{
    count++;
}
// default constructor definition
Rectangle::Rectangle()
: length(0.0), height(0.0)
{
    count++;
}
// copy constructor definition
Rectangle::Rectangle(const Rectangle& rect)
: length(rect.length), height(rect.height)
{
    count++;
}
// destructor definition
Rectangle::~Rectangle()
{
    count--;
}
/****************************************
 * Static member function definition    *
****************************************/
int Rectangle::getCount()
{
    return count;
}
/****************************************************************
 * An application which generates and counts Rectangle objects  *
****************************************************************/
int main()
{
    {
        Rectangle rect1(3.2, 1.2);
        Rectangle rect2(1.5, 2.1);
        Rectangle rect3;
        Rectangle rect4(rect1);
        Rectangle rect5(rect2);
        cout << "The number of object : " << rect5.getCount() << endl;
    }
    cout << "The number of object : " << Rectangle::getCount() << endl;
    return 0;
}