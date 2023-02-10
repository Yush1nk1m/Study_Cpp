/************************************************************************
 * A program which prints the characters in a file and their locations  *
************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // variable declaration
    char ch;
    int n;
    // stream instantiation and file open
    ifstream ifStream;
    ifStream.open("sample", ios::in);
    // print characters and their locations
    n = ifStream.tellg();
    while (ifStream.get(ch))
    {
        cout << n << " " << ch << endl;
        n = ifStream.tellg();
    }
    // file close
    ifStream.close();
    return 0;
}