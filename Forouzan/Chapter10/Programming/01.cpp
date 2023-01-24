#include <string>
#include <iostream>
using namespace std;

int charNum(string&, char);

int main()
{
    string str;
    char c;

    cout << "Enter a string : ";
    getline(cin, str);

    cout << "Enter a character to search : ";
    cin >> c;

    cout << "The number of character '" << c << "' in the input string : " << charNum(str, c) << endl;

    return 0;
}

int charNum(string& str, char c)
{
    int size = str.size(), count = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}