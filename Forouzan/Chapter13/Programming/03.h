#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
    private:
        double x;       // real number
        double y;       // imaginary number
    public:
        Complex(double x, double y);
        Complex(const Complex& complex);
        ~Complex();
        Complex& operator+=(const Complex& right);
        Complex& operator-=(const Complex& right);
        Complex& operator*=(const Complex& right);
        Complex& operator/=(const Complex& right);
        friend ostream& operator<<(ostream& output, const Complex& complex);
        /* Question 03 */
        friend const Complex operator+(const Complex& left, const Complex& right);
        friend const Complex operator-(const Complex& left, const Complex& right);
        friend const Complex operator*(const Complex& left, const Complex& right);
        friend const Complex operator/(const Complex& left, const Complex& right);
};
#endif