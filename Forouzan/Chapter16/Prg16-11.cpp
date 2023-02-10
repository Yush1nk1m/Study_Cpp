/************************************************
 * A program which only extracts integers in a  *
 * file with various characters                 *
************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // ifstream object instantiation and connection with the file
    ifstream ifStream;
    ifStream.open("mixedFile", ios::in);
    if (!ifStream.is_open())
    {
        cout << "Cannot open mixedFile." << endl;
        assert(false);
    }
    // read the integer part and print
    char ch;
    int n;
    while (ifStream.get(ch))
    {
        if (ch >= '0' && ch <= '9')
        {
            ifStream.unget();
            ifStream >> n;
            cout << n << " ";
        }
    }
    // close the file
    ifStream.close();
    return 0;
}