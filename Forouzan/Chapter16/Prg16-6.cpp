/****************************************************************************
 * A program which reads an existing file and prints datum to the monitor   *
****************************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int data;
    // ifstream object instantiation
    ifstream inStream;
    // connect a file and an ifstream object
    inStream.open("integerFile");
    if (!inStream.is_open())
    {
        cout << "Cannot open integerFile." << endl;
        assert(false);
    }
    // read the file with ifstream object and print it to the monitor
    for (int i = 1; i <= 10; i++)
    {
        inStream >> data;
        cout << data << " ";
    }
    // file close
    inStream.close();
    // delete ifstream object after return
    return 0;
}