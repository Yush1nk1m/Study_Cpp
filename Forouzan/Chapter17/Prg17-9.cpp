/********************************************************************
 * A program which creates permutation based on the given string    *
********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// function declaration
void permute(string);
void permute(string, string);
void swap(char&, char&);

int main()
{
    // the permutation based on "xy"
    cout << "permute(\"xy\") = ";
    permute("xy");
    cout << endl;
    // the permutation based on "abc"
    cout << "permute(\"abc\") = ";
    permute("abc");
    cout << endl;
    return 0;
}
// permute recursive function definition
void permute(string s)
{
    permute(s, "");
}
// permute helper function definition
void permute(string str, string p)
{
    if (str.length() == 0)
    {
        cout << p << " ";
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            swap(str[0], str[i]);
            permute(str.substr(1, str.length() - 1), p + str.substr(0, 1));
        }
    }
}
// swap function definition
void swap(char& c1, char& c2)
{
    char temp = c1;
    c1 = c2;
    c2 = temp;
}