/****************************************************************
 * A program which checks if a string is a palindrome or not    *
****************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// recursive function declaration
bool isPalindrome(string str);

int main()
{
    // string instantiation
    string str1("");
    string str2("rotor");
    string str3("hello");
    // palindrome check
    cout << boolalpha;
    cout << "isPalindrome(\"\") = " << isPalindrome(str1) << endl;
    cout << "isPalindrome(\"rotor\") = " << isPalindrome(str2) << endl;
    cout << "isPalindrome(\"hello\") = " << isPalindrome(str3) << endl;
    return 0;
}

// recursive function definition
bool isPalindrome(string str)
{
    if (str.size() <= 1)
    {
        return true;
    }
    else if (str[0] != str[str.size() - 1])
    {
        return false;
    }
    return isPalindrome(str.substr(1, str.size() - 2));
}