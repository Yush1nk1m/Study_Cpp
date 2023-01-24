#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char str[] = "This is a long string.";
    *strchr(str, 's') = 'S';
    *strrchr(str, 's') = 'S';
    cout << str << endl;

    string str2 = "This is a long string.";
    str2[str2.find_first_of("s", 0)] = 'S';
    str2[str2.find_last_of("s", 0)] = 'S';
    cout << str2 << endl;

    return 0;
}