/********************************************************************************
 * A program which opens a file, reads its contents, and prints to the monitor  *
********************************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // variable declaration
    char ch;
    // ifstream object instantiation
    ifstream iStream;
    // open file1 and check if it is normally opened
    iStream.open("file1", ios::in);
    if (!iStream.is_open())
    {
        cout << "Cannot open file1." << endl;
        assert(false);
    }
    // read the content of file1 and print it to the monitor
    while (iStream.get(ch))
    {
        cout.put(ch);
    }
    // stream close
    iStream.close();
    return 0;
}