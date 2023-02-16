/********************************************
 * An interface file for BigInteger class   *
********************************************/
#ifndef BIGINTEGER_H
#define BIGINTEGER_H
#include <string>
#include <list>
#include <iomanip>
#include <iostream>
using namespace std;

class BigInteger
{
    private:
        list<int> List;
    public:
        BigInteger();
        BigInteger(string str);
        ~BigInteger();
        string toString();
        friend BigInteger operator+(BigInteger first, BigInteger second);
};
#endif