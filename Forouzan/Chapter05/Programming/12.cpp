#include <iostream>
using namespace std;

int main()
{
    cout << "Leap years between 2000 and 2099" << endl;
    for (int i = 2000; i < 2100; i++)
    {
        if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
        {
            cout << i << endl;
        }
    }

    return 0;
}