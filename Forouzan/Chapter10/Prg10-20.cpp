/****************************************************
 * A program which compares strings with functions  *
****************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string declaration
    string strg1("Hello my friends");
    string strg2("Hello friends");
    // comparison among C++ strings
    cout << "Comparision " << strg1 << " and " << strg2 << " : ";
    cout << strg1.compare(strg2) << endl;
    // comparison among part of C++ strings
    cout << "Comparison Hello and Hello : ";
    cout << strg1.compare(0, 5, strg2, 0, 5) << endl;
    // comparision C++ string and C string(it is possible that the values are different according to the compiler)
    cout << "Comparison Hello and Hello : ";
    cout << strg1.compare(0, 5, strg2) << endl;
    // comparison part of C++ string and C string
    cout << "Comparison Hel and Hell : ";
    cout << strg2.compare(0, 3, "Hello", 4);
    return 0;
}