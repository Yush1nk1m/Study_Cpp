#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int size = str.size();
    string sub1 = str.substr(0, size / 2);
    string sub2 = str.substr(size / 2);

    if (size % 2 != 0)
    {
        sub1 += ' ';
    }

    cout << "sub1 : " << sub1 << ", sub2 : " << sub2 << endl;

    return 0;
}