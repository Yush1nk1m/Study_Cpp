/****************************************************************************************
 * A program which opens a file, reads its contents, and prints it to the another file  *
****************************************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // variable declaration
    char ch;
    // instantiation of ifstream object and ofstream object
    ifstream iStream;
    ofstream oStream;
    // open file1 and file2 and check if they are normally opened
    iStream.open("file1", ios::in);
    if (!iStream.is_open())
    {
        cout << "Cannot open file1." << endl;
        assert(false);
    }
    oStream.open("file2", ios::out);
    if (!oStream.is_open())
    {
        cout << "Cannot open file2." << endl;
        assert(false);
    }
    // read the content of file1 and write to file2
    while (iStream.get(ch))
    {
        oStream.put(ch);
    }
    // close two files
    iStream.close();
    oStream.close();
    return 0;
}