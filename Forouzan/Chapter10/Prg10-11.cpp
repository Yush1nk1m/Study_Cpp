/****************************************************************
 * A program which extracts date format with strtok function    *
****************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // declare a string and a pointer
    char str[] = "2020 12 09";
    char* p;
    // extract words
    p = strtok(str, " ");       // the first call
    while (p)
    {
        cout << p << endl;
        p = strtok(0, " ");     // the rest call
    }
    return 0;
}