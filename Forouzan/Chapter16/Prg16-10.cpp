/************************************************************************
 * A program which reads a file and adds all the integers in the file   *
 * and writes them to the end of the file                               *
************************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // fstream object instantiation
    fstream fStream;
    // open intFile
    fStream.open("intFile", ios::in | ios::out);
    if (!fStream.is_open())
    {
        cout << "Cannot open intFile" << endl;
        assert(false);
    }
    // read the integers in the file and add them
    int num;
    int sum = 0;
    while (fStream >> num)
    {
        sum += num;
    }
    // clear the stream, print the sum at the end of the file
    fStream.clear();
    fStream << "\nThe sum of the integers : " << sum;
    // close the stream
    fStream.close();
    return 0;
}