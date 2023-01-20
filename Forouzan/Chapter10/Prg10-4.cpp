/****************************************************************************
 * A program which reads and prints a line entirely with getline function   *
****************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // string array declaration
    char lines[3][80];
    // receive input of 3 lines
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a line : ";
        cin.getline(lines[i], 80);
    }
    // print 3 lines
    cout << endl;
    cout << "Output : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << lines[i] << endl;
    }
    return 0;
}