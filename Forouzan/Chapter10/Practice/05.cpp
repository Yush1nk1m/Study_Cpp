#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char str1[40] = "The time has come. ";
    const char* str2 = "Are you ready?";
    strcat(str1, str2);
    cout << str1 << endl;

    string str3("The time has come. ");
    string str4("Are you ready?");
    str3 += str4;
    cout << str3 << endl;

    return 0;
}