/****************************************************
 * A program which finds out the length of a file   *
****************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // stream instantiation and file connection
    ifstream ifStream;
    ifStream.open("file4", ios::in | ios::ate);
    // find the location of the marker and print
    cout << "The entire length : " << ifStream.tellg();
    // file close
    ifStream.close();
    return 0;
}