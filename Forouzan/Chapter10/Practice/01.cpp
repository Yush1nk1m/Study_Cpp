#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    const char* str = "This is a string.";
    cout << strlen(str) << endl;

    string str2("This is a string.");
    cout << str2.size() << endl;

    return 0;
}