/********************************************************
 * A program which finds out and prints                 *
 * the very first character and the very last character *
********************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // string declaration
    char str[] = "Hello friends.";
    // change the first 'e' into its upper alphabet
    char* cPtr = strchr(str, 'e');
    *cPtr = 'E';
    cout << "str after the first change : " << str << endl;
    // change the last 'e' into its upper alphabet
    cPtr = strrchr(str, 'e');
    *cPtr = 'E';
    cout << "str after the second change : " << str << endl;
    return 0;
}