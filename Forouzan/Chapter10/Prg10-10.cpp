/****************************************************************************
 * A program which concatenates two strings with strcat, strncat functions  *
****************************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // use strcat function
    char str1[20] = "This is ";
    const char* str2 = "a string.";
    strcat(str1, str2);
    cout << "str1 : " << str1 << endl;
    // use strncat function
    char str3[20] = "abcdefghijk";
    const char* str4 = "ABCDEFGHIJK";
    strncat(str3, str4, 4);
    cout << "str3 : " << str3 << endl;
    return 0;
}