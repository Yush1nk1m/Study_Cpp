#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    fstream fs;
    string filename;

    cout << "Enter the file name to open : ";
    cin >> filename;
    fs.open(filename.c_str(), ios::in | ios::out);
    if (!fs.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    char c;
    while (fs >> c)
    {
        if (c >= 'a' && c <= 'z')
        {
            fs.unget();
            fs.put(toupper(c));
        }
    }
    fs.close();

    return 0;
}