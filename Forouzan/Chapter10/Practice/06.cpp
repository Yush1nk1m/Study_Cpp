#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char str1[40] = "The time has changed. ";
    const char* str2 = "Do you know? My dear friend.";
    strncat(str1, str2, 12);
    cout << str1 << endl;

    string str3("The time has changed. ");
    string str4("Do you know? My dear friend.");
    str3 += str4.substr(0, 12);
    cout << str3 << endl;

    return 0;
}