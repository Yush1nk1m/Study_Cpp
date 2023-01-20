/********************************************************
 * A program which copies a string to another string    *
 * with strcpy and strncpy functions                    *
********************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // copy entire str2 to str1, remove content of str1
    char str1[] = "This is the first string.";
    char str2[] = "This is the second string.";
    strcpy(str1, str2);
    cout << "str1 : " << str1 << endl;
    // copy part of str4 to str3, remove some part of content of str3
    char str3[] = "abcdefghijk.";
    const char* str4 = "ABCDEFGHIJK";
    strncpy(str3, str4, 4);
    cout << "str3 : " << str3 << endl;
    return 0;
}