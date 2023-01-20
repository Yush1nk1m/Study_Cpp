/********************************************************************
 * A program which finds out the length of C string and prints it   *
********************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // string declaration
    const char* str1 = "Hello my friends.";
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // print the length of the strings
    cout << "The length of str1 : " << strlen(str1) << endl;
    cout << "The length of str2 : " << strlen(str2) << endl;
    return 0;
}