#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void openInput(const char* filename)
{
    ifstream is;
    is.open(filename);
    if (!is.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }
    is.close();
}