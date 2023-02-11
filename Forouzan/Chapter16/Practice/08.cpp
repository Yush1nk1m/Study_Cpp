#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void splitCopy(const char* source, const char* oddDestination, const char* evenDestination)
{
    ifstream is;
    ofstream oddOs, evenOs;
    
    is.open(source);
    if (!is.is_open())
    {
        cout << "Cannot open the source file." << endl;
        assert(false);
    }

    oddOs.open(oddDestination);
    if (!oddOs.is_open())
    {
        cout << "Cannot open the odd destination file." << endl;
        assert(false);
    }

    evenOs.open(evenDestination);
    if (!evenOs.is_open())
    {
        cout << "Cannot open the even destination file." << endl;
        assert(false);
    }

    char c;
    bool isOdd = false;
    while (is >> c)
    {
        if (isOdd)
        {
            oddOs << c;
        }
        else
        {
            evenOs << c;
        }
        isOdd = !isOdd;
    }
    is.close();
    oddOs.close();
    evenOs.close();
}

// test
int main()
{
    splitCopy("test.txt", "testOdd.txt", "testEven.txt");
    return 0;
}