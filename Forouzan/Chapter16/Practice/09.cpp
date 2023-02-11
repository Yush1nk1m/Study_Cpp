#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void appendNumber(const char* filename)
{
    fstream fs;
    fs.open(filename, ios::in | ios::out | ios::ate);
    int n = fs.tellg();
    fs << " " << n;
    fs.close();
}

int main()
{
    appendNumber("test.txt");
    return 0;
}