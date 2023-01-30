/********************************************
 * An implementation file for Poly class    *
********************************************/
#include "poly.h"

// default constructor
Poly::Poly()
: degree(0)
{
    ptr = 0;
}
// parameter constructor
Poly::Poly(int degree)
: degree(degree)
{
    ptr = new double[degree + 1];
    for (int i = degree; i >= 0; i--)
    {
        ptr[i] = 0.0;
    }
}
// constructor which makes one term polynomial expression
Poly::Poly(int degree, double coef)
: degree(degree)
{
    ptr = new double[degree + 1];
    for (int i = degree; i >= 0; i--)
    {
        ptr[i] = 0.0;
    }
    ptr[degree] = coef;
}
// destructor
Poly::~Poly()
{
    delete[] ptr;
}
// copy constructor
Poly::Poly(const Poly& origin)
: degree(origin.degree)
{
    ptr = new double[degree + 1];
    for (int i = origin.degree; i >= 0; i--)
    {
        ptr[i] = origin.ptr[i];
    }
}
// assignment operator
Poly& Poly::operator=(const Poly& right)
{
    this->degree = right.degree;
    this->ptr = new double[degree + 1];
    for (int i = degree; i >= 0; i--)
    {
        (this->ptr)[i] = right.ptr[i];
    }
    return (*this);
}
// + operator
const Poly operator+(const Poly& left, const Poly& right)
{
    Poly result(max(left.degree, right.degree));
    for (int i = result.degree; i >= 0; i--)
    {
        if (i <= left.degree && i <= right.degree)
        {
            result.ptr[i] = left.ptr[i] + right.ptr[i];
        }
        else if (i <= left.degree && i > right.degree)
        {
            result.ptr[i] = left.ptr[i];
        }
        else
        {
            result.ptr[i] = right.ptr[i];
        }
    }
    return result;
}
// - operator
const Poly operator-(const Poly& left, const Poly& right)
{
    Poly result(max(left.degree, right.degree));
    for (int i = result.degree; i >= 0; i--)
    {
        if (i <= left.degree && i <= right.degree)
        {
            result.ptr[i] = left.ptr[i] - right.ptr[i];
        }
        else if (i <= left.degree && i > right.degree)
        {
            result.ptr[i] = left.ptr[i];
        }
        else
        {
            result.ptr[i] = -right.ptr[i];
        }
    }
    return result;
}
// * operator
const Poly operator*(const Poly& left, const Poly& right)
{
    int degree = left.degree + right.degree;
    Poly result(degree);
    for (int i = result.degree; i >= 0; i--)
    {
        result.ptr[i] = 0.0;
    }
    for (int i = left.degree; i >= 0; i--)
    {
        for (int j = right.degree; j >= 0; j--)
        {
            result.ptr[i + j] += (left.ptr[i] * right.ptr[j]);
        }
    }
    return result;
}
// / operator
const Poly operator/(const Poly& left, const Poly& right)
{
    Poly result(left.degree - right.degree);
    Poly temp(left);
    int i = temp.degree;
    int j = right.degree;
    int k = i - j;
    while (i >= 1)
    {
        double coef = temp.ptr[i] / right.ptr[j];
        Poly poly(k, coef);
        temp = temp - (poly * right);
        result = result + poly;
        i--;
        k = i - j;
    }
    return result;
}
// % operator
const Poly operator%(const Poly& left, const Poly& right)
{
    Poly result(left.degree - right.degree - 1);
    Poly temp(left);
    result = temp - (temp / right) * right;
    return result;
}
// << operator
ostream& operator<<(ostream& output, const Poly& poly)
{
    string sign;
    for (int i = poly.degree; i >= 0; i--)
    {
        if (poly.ptr[i] > 0.0 || poly.ptr[i] < 0.0)
        {
            output << fixed << showpos << setprecision(2) << poly.ptr[i];
            output << noshowpos;
            if (i != 0)
            {
                output << "x^" << i;
            }
            output << " ";
        }
    }
    return output;
}
// helper function
int max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    return y;
}
// a function which receives polynomial expression input
void Poly::fill()
{
    for (int i = degree; i > 0; i--)
    {
        cout << "Enter the coefficient of degree " << i << " : ";
        cin >> ptr[i];
    }
    cout << endl;
}