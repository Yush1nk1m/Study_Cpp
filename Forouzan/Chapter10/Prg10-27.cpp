/****************************************************************
 * A program which converts binary string into decimal number   *
****************************************************************/
#include "customized.h"
#include <string>
#include <iostream>
using namespace std;
/********************************************
 * A function which converts a character    *
 * into the corresponding decimal number    *
********************************************/
int findValue(char ch)
{
    return static_cast<int>(ch) - 48;
}
int main()
{
    // declaration, input, data validation
    string binary;
    do
    {
        cout << "Enter a binary number : ";
        getline(cin, binary);
    } while (binary.find_first_not_of("01") < binary.size());
    // convert into decimal number and output
    int base = 2;
    int decimal = 0;
    while (!binary.empty())
    {
        decimal *= base;
        char ch = popFront(binary);
        decimal += findValue(ch);
    }
    cout << "The decimal value : " << decimal;
    return 0;
}