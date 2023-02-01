#include "06.h"

Money::Money()
: dollar(0), cent(0)
{
}

Money::Money(long dollar, long cent)
: dollar(dollar), cent(cent)
{
    assert(dollar >= 0 && cent >= 0);
    dollar += (cent / 100);
    cent %= 100;
}

Money::Money(const Money& money)
: dollar(money.dollar), cent(money.cent)
{
}

Money::~Money()
{
}

const Money operator+(const Money& left, const Money& right)
{
    Money temp(left.dollar + right.dollar, left.cent + right.cent);
    temp.dollar += (temp.cent / 100);
    temp.cent %= 100;
    return temp;
}

const Money operator-(const Money& left, const Money& right)
{
    Money temp(left.dollar - right.dollar, left.cent - right.cent);
    if (temp.cent < 0)
    {
        temp.dollar--;
        temp.cent += 100;
    }
    if (temp.dollar < 0)
    {
        temp.dollar = 0;
        temp.cent = 0;
    }
    return temp;
}

Money& Money::operator*=(int number)
{
    dollar *= number;
    cent *= number;
    dollar += (cent / 100);
    cent %= 100;
    return (*this);
}

Money& Money::operator/=(int number)
{
    int totalCent = dollar * 100 + cent;
    totalCent /= number;
    dollar = totalCent / 100;
    cent = totalCent % 100;
    return (*this);
}

const bool operator<(const Money& left, const Money& right)
{
    if (left.dollar > right.dollar || ((left.dollar == right.dollar) && (left.cent >= right.cent)))
    {
        return false;
    }
    return true;
}

const bool operator>(const Money& left, const Money& right)
{
    if (left.dollar > right.dollar || ((left.dollar == right.dollar) && (left.cent > right.cent)))
    {
        return true;
    }
    return false;
}

const bool operator==(const Money& left, const Money& right)
{
    return ((left.dollar == right.dollar) && (left.cent == right.cent));
}

const bool operator!=(const Money& left, const Money& right)
{
    return ((left.dollar != right.dollar) || (left.cent != right.cent));
}