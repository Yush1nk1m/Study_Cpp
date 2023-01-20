/************************************************************************
 * A program which accesses to a character of a string with indexing    *
************************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // create 2 C strings
    const char* str1 = "Hello my friends.";
    char str2[] = "This is the second string.";
    // print a character placed at the specific index
    cout << "A character placed index 6 of str1 : " << str1[6] << endl;
    // change a character placed at the specific index
    str2[0] = 't';
    cout << "Changed str2 : " << str2 << endl;
    return 0;
}