/****************************************************************
 * A program which extracts and prints a substring in a string  *
****************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string creation
    string strg("The C++ language is fun to work with.");
    // substring extraction
    cout << strg.substr(8) << endl;
    cout << strg.substr(4, 12) << endl;
    return 0;
}