/********************************************************************************************
 * A program which finds out the location of the specific character with strpbrk function   *
********************************************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // string creation
    char str[] = "Hello friends of mine.";
    // search the first character in the string set
    char* pPtr = strpbrk(str, "pfmd");
    cout << "Found character : " << *pPtr << endl;
    cout << "That character's index : " << pPtr - str;
    return 0;
}