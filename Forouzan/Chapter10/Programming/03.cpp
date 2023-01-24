#include <string>
#include <iostream>
using namespace std;

void charDel(string&, char);

int main()
{
    string str;
    char c;
    
    cout << "Enter a string : ";
    getline(cin, str);

    cout << "Enter a character to remove from the input string : ";
    cin >> c;

    charDel(str, c);

    cout << "The input string after removing character '" << c << "' : " << str << endl;

    return 0;
}

void charDel(string& str, char c)
{
    int size = str.size();

    for (int i = 0; i < size; i++)
    {
        if (str[i] == c)
        {
            str = str.substr(0, i) + str.substr(i + 1);
            size--;
            i--;
        }
    }
}