#include "08.h"

BigInteger::BigInteger()
: number("0")
{
}

BigInteger::BigInteger(string number)
: number(number)
{
    int size = number.size();
    for (int i = 0; i < size; i++)
    {
        assert(number[i] >= 48 && number[i] <= 57);
    }
}

BigInteger::BigInteger(const BigInteger& bigInteger)
: number(bigInteger.number)
{
}

BigInteger::~BigInteger()
{
}

ostream& operator<<(ostream& output, const BigInteger& bigInteger)
{
    output << bigInteger.number;
    return output;
}

const BigInteger operator+(const BigInteger& left, const BigInteger& right)
{
    int lSize = left.number.size();
    int rSize = right.number.size();
    string leftNumber = left.number;
    string rightNumber = right.number;
    if (lSize >= rSize)
    {
        for (int i = 0; i < lSize - rSize; i++)
        {
            rightNumber = "0" + rightNumber;
        }
        rSize = lSize;
    }
    else
    {
        for (int i = 0; i < rSize - lSize; i++)
        {
            leftNumber = "0" + leftNumber;
        }
        lSize = rSize;
    }
    BigInteger temp;
    temp.number.resize(lSize);
    bool carry = false;
    for (int i = lSize - 1, char add = '0'; i >= 0; i--, add = '0')
    {
        add += carry;
        carry = false;
        add += (leftNumber[i] + rightNumber[i] - 96);
        if (add > 57)
        {
            carry = true;
            add -= 10;
        }
        (temp.number)[i] = add;
    }
    if (carry)
    {
        temp.number = "1" + temp.number;
    }
    return temp;
}

const BigInteger operator-(const BigInteger& left, const BigInteger& right)
{
    BigInteger temp;
    int lSize = left.number.size();
    int rSize = right.number.size();
    bool negative = false;
    if (lSize < rSize)
    {
        negative = true;
    }
    else if (lSize == rSize)
    {
        int i = 0;
        while ((left.number)[i] == (right.number)[i] && i < lSize)
        {
            i++;
        }
        if (i == lSize)
        {
            return temp;
        }
        if ((left.number)[i] < right.number[i])
        {
            negative = true;
        }
    }
    string leftNumber = left.number;
    string rightNumber = right.number;
    if (lSize >= rSize)
    {
        for (int i = 0; i < lSize - rSize; i++)
        {
            rightNumber = "0" + rightNumber;
        }
        rSize = lSize;
    }
    else
    {
        for (int i = 0; i < rSize - lSize; i++)
        {
            leftNumber = "0" + leftNumber;
        }
        lSize = rSize;
    }
    temp.number.resize(lSize);
    for (int i = lSize - 1; i >= 0; i--)
    {
        int diff = (leftNumber[i] - rightNumber[i]);
        if (diff < 0)
        {
            (temp.number)[i] = 57 + diff;
            if (i != 0)
            {
                leftNumber[i - 1]--;
            }
        }
        else
        {
            (temp.number)[i] = 48 + diff;
        }
    }
    return temp;
}