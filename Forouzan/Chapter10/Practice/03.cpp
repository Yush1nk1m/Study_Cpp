#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char str1[] = "This is the first string.";
    const char* str2 = "Here is another one.";
    strcpy(str1, str2);
    cout << str1 << endl;

    string str3("This is the first string");
    string str4("Here is another one.");
    str3 = str4;
    cout << str3 << endl;

    return 0;   
}