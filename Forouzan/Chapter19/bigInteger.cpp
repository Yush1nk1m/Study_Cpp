/************************************************
 * An implementation file for BigInteger class  *
************************************************/
#include "bigInteger.h"

// basic constructor
BigInteger::BigInteger()
: List(list<int>())
{
}
// parameter constructor
BigInteger::BigInteger(string str)
: List(list<int>())
{
    for (int i = 0; i < str.length(); i++)
    {
        int num = str[i] - 48;
        List.push_back(num);
    }
}
// destructor
BigInteger::~BigInteger()
{
}
// a function which converts a list to the string
string BigInteger::toString()
{
    string str;
    list<int>::iterator iter;
    iter = List.begin();
    while (iter != List.end())
    {
        str.append(1, (*iter) + 48);
        iter++;
    }
    return str;
}
// operator+ friend function
BigInteger operator+(BigInteger first, BigInteger second)
{
    list<int>::reverse_iterator iter1;
    list<int>::reverse_iterator iter2;
    BigInteger result;
    int num1, num2, sum;
    int carry = 0;
    iter1 = first.List.rbegin();
    iter2 = second.List.rbegin();
    while ((iter1 != first.List.rend()) && (iter2 != second.List.rend()))
    {
        num1 = (*iter1);
        num2 = (*iter2);
        sum = (num1 + num2 + carry) % 10;
        carry = (num1 + num2 + carry) / 10;
        result.List.push_front(sum);
        iter1++;
        iter2++;
    }
    while ((iter1 != first.List.rend()))
    {
        num1 = (*iter1);
        sum = (num1 + carry) % 10;
        carry = (num1 + carry) / 10;
        result.List.push_front(sum);
        iter1++;
    }
    while ((iter2 != second.List.rend()))
    {
        num2 = (*iter2);
        sum = (num2 + carry) % 10;
        carry = (num2 + carry) / 10;
        result.List.push_front(sum);
        iter2++;
    }
    if (carry == 1)
    {
        result.List.push_front(carry);
    }
    return result;
}