/****************************************
 * A program which reverses a string    *
****************************************/
#include <string>
#include <iostream>
using namespace std;

void reverse(string& strg);     // function declaration

int main()
{
    // string object declaration
    string strg;
    // receive string input and print it
    cout << "Enter a string : ";
    getline(cin, strg);
    cout << "Original string : " << strg << endl;
    // reverse the string and print
    reverse(strg);
    cout << "Reversed string : " << strg;
    return 0;
}
/************************************************************
 * A function which reverses a string passed by reference   *
************************************************************/
void reverse(string& strg)
{
    string temp(strg);
    int size = strg.size();
    for (int i = 0; i < size; i++)
    {
        strg[i] = temp[size - 1 - i];
    }
}