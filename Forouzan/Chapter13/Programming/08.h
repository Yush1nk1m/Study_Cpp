#ifndef BIGINTEGER_H
#define BIGINTEGER_H
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class BigInteger
{
    private:
        string number;
    public:
        BigInteger();
        BigInteger(string number);
        BigInteger(const BigInteger& bigInteger);
        ~BigInteger();
        friend ostream& operator<<(ostream& output, const BigInteger& bigInteger);
        friend const BigInteger operator+(const BigInteger& left, const BigInteger& right);
        friend const BigInteger operator-(const BigInteger& left, const BigInteger& right);
};
#endif