#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

char charAt(const char* filename, int index)
{
    ifstream is;
    is.open(filename);
    if (!is.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }
    is.seekg(index);
    char c = is.get();
    is.close();
    return c;
}

// test
int main()
{
    cout << charAt("test.txt", 9) << endl;
    return 0;
}