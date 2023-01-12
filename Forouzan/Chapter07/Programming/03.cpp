#include <iostream>
#include <cmath>
#include "03.h"
using namespace std;

void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::where(const Point& point) const
{
    int dx = point.getX() - this->getX();
    int dy = point.getY() - this->getY();
    if (dx > 0)
    {
        cout << "HORIZONTAL : LEFT" << endl;
    }
    else if (dx == 0)
    {
        cout << "HORIZONTAL : SAME" << endl;
    }
    else
    {
        cout << "HORIZONTAL : RIGHT" << endl;
    }

    if (dy > 0)
    {
        cout << "VERTICAL : DOWN" << endl;
    }
    else if (dy == 0)
    {
        cout << "VERTICAL : SAME" << endl;
    }
    else
    {
        cout << "VERTICAL : UP" << endl;
    }
}

double Point::distance(const Point& point) const
{
    double x1 = this->getX();
    double y1 = this->getY();
    double x2 = point.getX();
    double y2 = point.getY();

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}