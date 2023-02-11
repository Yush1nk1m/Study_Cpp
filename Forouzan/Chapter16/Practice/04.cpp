#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void replaceAt(const char* filename, int index, char repl)
{
    fstream fs;
    fs.open(filename, ios::in | ios::out);
    if (!fs.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }
    fs.seekg(index);
    fs.put(repl);
    fs.close();
}

// test
int main()
{
    replaceAt("test.txt", 9, '0');
    return 0;
}