/****************************************************************************
 * A program which opens a file and prints a date at the end of the file    *
****************************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // ostream object instantiation
    ofstream oStream;
    // open file1
    oStream.open("file1", ios::out | ios::app);
    if (!oStream.is_open())
    {
        cout << "Cannot open file1." << endl;
        assert(false);
    }
    // append C string at the end of the file
    oStream << "\nFebruary 10, 2023.";
    // close the file
    oStream.close();
    return 0;
}