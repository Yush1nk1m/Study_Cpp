#include "03.h"

Complex::Complex(double x, double y)
: x(x), y(y)
{
}

Complex::Complex(const Complex& complex)
: x(complex.x), y(complex.y)
{
}

Complex::~Complex()
{
}

Complex& Complex::operator+=(const Complex& right)
{
    x += right.x;
    y += right.y;
    return (*this);
}

Complex& Complex::operator-=(const Complex& right)
{
    x -= right.x;
    y -= right.y;
    return (*this);
}

Complex& Complex::operator*=(const Complex& right)
{
    x = (x * right.x) - (y * right.y);
    y = (x * right.y) + (right.x * y);
    return (*this);
}

Complex& Complex::operator/=(const Complex& right)
{
    double denominator = (right.x * right.x) + (y * y);
    x = ((x * right.x) + (y * right.y)) / denominator;
    y = ((-x * right.y) + (right.x * y)) / denominator;
    return (*this);
}

ostream& operator<<(ostream& output, const Complex& complex)
{
    output << complex.x << " + " << complex.y << "i";
    return output;
}

const Complex operator+(const Complex& left, const Complex& right)
{
    Complex temp(0.0, 0.0);
    temp.x = left.x + right.x;
    temp.y = left.y + right.y;
    return temp;
}

const Complex operator-(const Complex& left, const Complex& right)
{
    Complex temp(0.0, 0.0);
    temp.x = left.x - right.x;
    temp.y = left.y - right.y;
    return temp;
}

const Complex operator*(const Complex& left, const Complex& right)
{
    Complex temp(0.0, 0.0);
    temp.x = (left.x * right.x - left.y * right.y);
    temp.y = (left.x * right.y + left.y * right.x);
    return temp;
}

const Complex operator/(const Complex& left, const Complex& right)
{
    Complex temp(0.0, 0.0);
    double denominator = ((right.x * right.x) + (left.y * left.y));
    temp.x = ((left.x * right.x) + (left.y * right.y)) / denominator;
    temp.y = ((-left.x * right.y) + (right.x * left.y)) / denominator;
    return temp;
}