#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    string filename;
    fstream fs;

    cout << "Enter the name of file : ";
    cin >> filename;
    fs.open(filename.c_str(), ios::in | ios::ate | ios::out);
    if (!fs.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    int index;
    do
    {
        cout << "Enter the index to delete : ";
        cin >> index;
    } while (index < 0 || index > 25);
    
    char c;
    int end = fs.tellg();
    for (int i = 0; i < end - 1; i++)
    {
        fs.seekg(i + 1);
        fs >> c;
        fs.seekg(i);
        fs << c;
    }
    fs << '\0';
    fs.close();

    return 0;
}