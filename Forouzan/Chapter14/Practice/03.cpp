#include <iostream>
using namespace std;

void fun(int x)
{
    if (x < 10) throw 10.0;     // is double data casted into int type?
}
int main()
{
    try
    {
        fun(5);
    }
    catch (int value)
    {
        cout << value << endl;
    }
    return 0;
}