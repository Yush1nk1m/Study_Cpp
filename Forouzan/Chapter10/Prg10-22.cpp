/************************************
 * Compare strings with palindrome  *
************************************/
#include <string>
#include <iostream>
using namespace std;

// function declaration
void reverse(string& strg);
bool isPalindrome(string& strg);

int main()
{
    // empty string creation
    string strg;
    // receive input
    cout << "Enter a string : ";
    getline(cin, strg);
    // check if it is a palindrome
    if (isPalindrome(strg))
    {
        cout << strg << " is a palindrome." << endl;
    }
    else
    {
        cout << strg << " is not a palindrome." << endl;
    }
    return 0;
}
/********************************************************
 * isPalindrome function copies and reverses a string   *
 * and check if it is equal to the original string      *
********************************************************/
bool isPalindrome(string& strg)
{
    string temp(strg);
    reverse(temp);
    return (temp == strg);
}
/****************************************************************
 * reverse function reverses a string given as a parameter      *
****************************************************************/
void reverse(string& strg)
{
    string temp(strg);
    int size = strg.size();
    for (int i = 0; i < size; i++)
    {
        strg[i] = temp[size - 1 - i];
    }
}