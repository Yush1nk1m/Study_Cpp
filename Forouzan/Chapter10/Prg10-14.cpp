/****************************************
 * Read string with getline function    *
****************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // empty string creation
    string strg;
    // read a line
    cout << "Enter a line : ";
    getline(cin, strg);
    cout << strg << endl << endl;
    // receive input of several lines
    cout << "Enter the several lines(enter '$' to exit) : ";
    getline(cin, strg, '$');
    cout << strg;
    return 0;
}