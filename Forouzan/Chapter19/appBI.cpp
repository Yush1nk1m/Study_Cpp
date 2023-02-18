/****************************************************
 * An application file which uses BigInteger class  *
****************************************************/
#include <iostream>
#include <iomanip>
#include "bigInteger.h"
using namespace std;

int main()
{
    // receive input of string
    string str1, str2;
    cout << "Enter the first big integer : ";
    cin >> str1;
    cout << "Enter the second big integer : ";
    cin >> str2;
    // create 2 BigInteger objects
    BigInteger first(str1);
    BigInteger second(str2);
    // add two integers and assign into result
    BigInteger result = first + second;
    // convert BigInteger object into string
    str1 = first.toString();
    str2 = second.toString();
    string str3 = result.toString();
    string dashes(str3.length(), '-');
    // print result
    cout << "The first integer :  " << setw(str3.length());
    cout << right << str1 << " +" << endl;
    cout << "The second integer : " << setw(str3.length());
    cout << right << str2 << endl;
    cout << "                     " << dashes << endl;
    cout << "Result :             " << setw(str3.length()) << right << str3 << endl;
    return 0;
}