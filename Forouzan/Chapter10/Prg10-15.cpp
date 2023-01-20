/****************************************************************
 * A program which extracts and prints a character in a string  *
****************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string creation
    string strg("A short string");
    // extract 5th, 8th index's character
    cout << "The character of index 5 : " << strg[5] << endl;
    cout << "The character of index 8 : " << strg.at(8) << endl;
    return 0;
}