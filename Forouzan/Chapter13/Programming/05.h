#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <cassert>
using namespace std;

class Money
{
    private:
        long dollar;
        long cent;
    public:
        Money();
        Money(long dollar, long cent);
        Money(const Money& money);
        ~Money();
        friend const Money operator+(const Money& left, const Money& right);
        friend const Money operator-(const Money& left, const Money& right);
        Money& operator*=(int number);
        Money& operator/=(int number);
};
#endif