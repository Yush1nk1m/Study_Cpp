#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void openInput(const char* filename)
{
    ofstream os;
    os.open(filename);
    if (!os.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }
}