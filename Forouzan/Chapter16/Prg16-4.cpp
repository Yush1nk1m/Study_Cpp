/********************************************
 * A program which uses getline function    *
********************************************/
#include <iostream>
using namespace std;

int main()
{
    char str2[80];
    cin.getline(str2, 80, '\n');
    cout << str2;
    return 0;
}