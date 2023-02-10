/********************************************************************************
 * A program which converts the first character of a word into the upper case   *
********************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the several lines of characters(enter eof to exit) : ";
    char pre = '\n';
    while (cin.get(c))
    {
        if (pre == ' ' || pre == '\n')
        {
            cout.put(toupper(c));
        }
        else
        {
            cout.put(c);
        }
        pre = c;
    }
    return 0;
}