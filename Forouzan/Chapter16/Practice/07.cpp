#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void appending(const char* source, const char* destination)
{
    ifstream is;
    ofstream os;
    
    is.open(source);
    if (!is.is_open())
    {
        cout << "Cannot open the source file." << endl;
        assert(false);
    }

    os.open(destination, ios::app);
    if (!os.is_open())
    {
        cout << "Cannot open the destination file." << endl;
        assert(false);
    }

    char c;
    while (is >> c)
    {
        os << c;
    }
    is.close();
    os.close();
}

// test
int main()
{
    appending("test2.txt", "test.txt");
    return 0;
}