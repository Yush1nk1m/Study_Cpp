#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    const char* str = "This is a long string.";
    char* p = strstr(str, "is");
    cout << *p << endl;

    string str2("This is a long string.");
    cout << str2[str2.find_first_of("is", 0)] << endl;

    return 0;
}