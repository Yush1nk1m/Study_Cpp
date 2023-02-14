#include <iostream>
#include <cstring>
using namespace std;

int charnum(const char*);
int charnum(const char*, int);

int charnum(const char* str)
{
    if (str[0] == 0)
    {
        return 0;
    }
    else
    {
        return 1 + charnum(str, 1);
    }
}

int charnum(const char* str, int index)
{
    if (str[index] == 0)
    {
        return 0;
    }
    else
    {
        return 1 + charnum(str, index + 1);
    }
}

int main()
{
    const char* str1 = "";
    const char* str2 = "Hello";

    cout << charnum(str1) << endl;
    cout << charnum(str2) << endl;

    return 0;
}