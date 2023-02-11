/************************************************
 * A program which combines, sorts, and prints  *
 * the integers in two files                    *
************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
#include <limits>
using namespace std;

int main()
{
    // declaration and initialization
    int first, second;
    int sentinel = numeric_limits<int>::max();
    // stream instantiation and file open
    ifstream stream1("infile1");
    ifstream stream2("infile2");
    ofstream stream3("outfile");
    if (!stream1.is_open())
    {
        cout << "Cannot open infile1." << endl;
        assert(false);
    }
    if (!stream2.is_open())
    {
        cout << "Cannot open infile2." << endl;
        assert(false);
    }
    if (!stream3.is_open())
    {
        cout << "Cannot open outfile." << endl;
        assert(false);
    }
    // process
    stream1 >> first;
    stream2 >> second;
    while (stream1 || stream2)
    {
        if (first <= second)
        {
            stream3 << first << " ";
            stream1 >> first;
            if (!stream1)
            {
                first = sentinel;
            }
        }
        else
        {
            stream3 << second << " ";
            stream2 >> second;
            if (!stream2)
            {
                second = sentinel;
            }
        }
    }
    // file close
    stream1.close();
    stream2.close();
    stream3.close();
    return 0;
}