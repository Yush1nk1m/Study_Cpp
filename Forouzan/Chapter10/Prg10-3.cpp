/****************************************
 * A program which creates C string,    *
 * uses input/output operator           *
****************************************/
#include <iostream>
using namespace std;

int main()
{
    // create a non-constant string and a constant string
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    const char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // create constant strings with string literal
    const char* str3 = "Goodbye";
    const char* str4 = "Goodbye\0 my friend";
    // print string
    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;
    cout << "str3 : " << str3 << endl;
    cout << "str4 : " << str4 << endl << endl;
    // create 5th string and receive input, print it
    char str5[20];
    cout << "Enter the value of str5 : ";
    cin >> str5;
    cout << "str5 : " << str5;
    return 0;
}