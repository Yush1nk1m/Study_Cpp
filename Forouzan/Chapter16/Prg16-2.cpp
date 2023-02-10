/********************************************************************
 * A program which reads characters and prints their ASCII value    *
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter 5 characters without any space : ";
    for (int i = 0; i < 5; i++)
    {
        x = cin.get();
        cout << x << " ";
    }
    return 0;
}