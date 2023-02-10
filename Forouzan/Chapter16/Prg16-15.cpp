/********************************************************
 * A program which reads and writes to the binary file  *
********************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int int1 = 12325;
    double double1 = 45.78;
    // open a file as binary output
    ofstream streamOut("sample2", ios::out | ios::binary);
    if (!streamOut.is_open())
    {
        cout << "Cannot write to the file." << endl;
        assert(false);
    }
    streamOut.write(reinterpret_cast<char*>(&int1), sizeof(int));
    streamOut.write(reinterpret_cast<char*>(&double1), sizeof(double));
    streamOut.close();

    int int2;
    double double2;
    // open a file as binary input
    ifstream streamIn("sample2", ios::in | ios::binary);
    if (!streamIn.is_open())
    {
        cout << "Cannot read the file." << endl;
        assert(false);
    }
    streamIn.read(reinterpret_cast<char*>(&int2), sizeof(int));
    streamIn.read(reinterpret_cast<char*>(&double2), sizeof(double));
    streamIn.close();
    // check stored values
    cout << "The value of int2 : " << int2 << endl;
    cout << "The value of double2 : " << double2 << endl;
    return 0;
}