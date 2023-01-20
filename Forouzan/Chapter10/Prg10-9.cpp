/************************************************************************
 * A program which compares two strings with strcmp, strncmp function   *
************************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // C string creation
    const char* str1 = "Hello Alice.";
    const char* str2 = "Hello John.";
    const char* str3 = "Hello Betsy.";
    // entire string comparison
    cout << "Comparison str1 and str2 : ";
    cout << strcmp(str1, str2) << endl;         // it is possible to be printed different value according to compiler
    cout << "Comparison str2 and str3 : ";
    cout << strcmp(str2, str3) << endl;         // check if it is 0 or positive or negative
    // Comparison the front 5 characters
    cout << "Comparison the front 5 characters of str1 and str2 : ";
    cout << strncmp(str1, str2, 5);
    return 0;

}