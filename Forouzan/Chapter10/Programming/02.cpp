#include <string>
#include <iostream>
using namespace std;

void toUpper(string&);

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    toUpper(str);
    cout << "After applying toUpper function : " << str << endl;

    return 0;
}

void toUpper(string& str)
{
    int size = str.size();

    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}