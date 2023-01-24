#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char str1[] = "This is the first string.";
    const char* str2 = "Here is another one.";
    strncpy(str1, str2, 4);
    cout << str1 << endl;

    string str3 = "This is the first string.";
    string str4 = "Here is another one.";
    for (int i = 0; i < 4; i++)
    {
        str3[i] = str4[i];
    }
    cout << str3 << endl;
    
    return 0;
}