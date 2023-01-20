/************************************************************
 * A program which finds out the location of a substring    *
 * in a string with strstr member function                  *
************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // string creation
    char str[] = "Hello friends of mine.";
    // search the location of a substring
    char* sPtr = strstr(str, "friends");
    cout << "The beginning index of the substring \"friends\" : " << sPtr - str;
    return 0;
}