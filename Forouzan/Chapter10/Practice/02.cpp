#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    const char* str1 = "This is a string.";
    const char* str2 = "This is another one.";
    cout << strcmp(str1, str2) << endl;

    string str3("This is a string.");
    string str4("This is another one.");
    cout << str3.compare(str4) << endl;

    return 0;   
}