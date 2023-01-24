#include <string>
#include <iostream>
using namespace std;

void replace(string&, string, string);

int main()
{
    string str, pat, rep;

    cout << "Enter a string : ";
    getline(cin, str);

    cout << "Enter a pattern to search : ";
    getline(cin, pat);
    
    cout << "Enter a string to replace input pattern : ";
    getline(cin, rep);

    replace(str, pat, rep);

    cout << "The replaced string : " << str << endl;

    return 0;
}

void replace(string& str, string pat, string rep)
{
    int strSize = str.size(), patSize = pat.size();

    for (int i = 0; i <= strSize - patSize; i++)
    {
        if (str.substr(i, patSize) == pat)
        {
            str = str.substr(0, i) + rep + str.substr(i + patSize);
            break;
        }
    }
}