/****************************************************************
 * A program which extracts characters as lvalue and rvalue     *
 * and converts them into upper characters                      *
****************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string line;

    cout << "Enter a line : ";
    getline(cin, line);

    for (int i = 0; i < line.size(); i++)
    {
        line[i] = toupper(line[i]);
    }
    cout << line;

    return 0;
}