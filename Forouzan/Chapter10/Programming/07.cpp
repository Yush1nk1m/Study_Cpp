#include <string>
#include <iostream>
using namespace std;

void midInsert(string&, string);

int main()
{
    string str1, str2;

    cout << "Enter a string : ";
    getline(cin, str1);

    cout << "Enter a string to insert in the middle of the first string : ";
    getline(cin, str2);

    midInsert(str1, str2);
    cout << "The string after insertion : " << str1 << endl;

    return 0;
}

void midInsert(string& str, string pat)
{
    int size = str.size();
    if (size % 2 != 0)
    {
        string temp = "";
        temp += str.substr(0, size / 2);
        temp += str[size - 1];
        temp += str.substr(size / 2);
        size++;
        str = temp;
    }
    str = str.substr(0, size / 2) + pat + str.substr(size / 2);
}