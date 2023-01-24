#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    const char* str = "ABCDEFGH";
    str += strlen(str) - 1;
    cout << str << endl;

    string str2("ABCDEFGH");
    cout << str2.substr(str2.size() - 1) << endl;
    return 0;
}