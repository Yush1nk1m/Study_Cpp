/************************************************
 * A program which adds lines after each words  *
************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fStream;
    fStream.open("file3", ios::in | ios::out);

    char ch;
    while (fStream.get(ch))
    {
        if (isspace(ch))
        {
            fStream.seekp(-1, ios::cur);
            fStream.put('\r');
        }
    }
    fStream.close();
    return 0;
}