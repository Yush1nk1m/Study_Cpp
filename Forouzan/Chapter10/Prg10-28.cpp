/********************************************************************
 * A program which converts a decimal number into the binary string *
********************************************************************/
#include <string>
#include "customized.h"
#include <iostream>
using namespace std;

/************************************************************
 * A functino which converts an integer into a character    *
************************************************************/
char findChar(int digit)
{
    return char(digit + 48);
}

int main()
{
    // variable declaration
    int decimal;
    int base = 2;
    string strg;
    // decimal input data validation
    do
    {
        cout << "Enter a decimal integer : ";
        cin >> decimal;
    } while (decimal <= 0);
    // convert into binary
    while (decimal > 0)
    {
        int digit = decimal % base;
        char ch = findChar(digit);
        pushFront(strg, ch);
        decimal /= base;
    }
    // binary output
    cout << "Binary : " << strg << endl;
    return 0;
}