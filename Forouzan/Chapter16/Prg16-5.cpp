/********************************************************
 * A program which creates an output file and writes    *
********************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // instantiation of an ofstream object
    ofstream outStream;
    // file open
    outStream.open("integerFile");
    if (!outStream.is_open())
    {
        cout << "Cannot open integerFile." << endl;
        assert(false);
    }
    // write to the file with the insertion operator overload function
    for (int i = 1; i <= 10; i++)
    {
        outStream << i * 10 << " ";
    }
    // file close
    outStream.close();
    // delete the ofstream object after return
    return 0;
}