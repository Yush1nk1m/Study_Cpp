#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    string filename;
    ifstream is;
    
    cout << "Enter the name of the file : ";
    cin >> filename;
    is.open(filename.c_str());
    if (!is.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    int num, search;
    
    cout << "Enter the number to search : ";
    cin >> search;

    bool isin = false;
    while (is >> num)
    {
        if (num == search)
        {
            isin = true;
            break;
        }
    }

    if (isin)
    {
        cout << search << " is in the file." << endl;
    }
    else
    {
        cout << search << " is not in the file." << endl;
    }
    is.close();
    return 0;
}