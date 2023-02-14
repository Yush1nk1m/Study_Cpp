#include <iostream>
using namespace std;

int fun(int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 1;
    }
    else
    {
        return fun(n, m - 1) + fun(n - 1, m);
    }
}

int main()
{
    cout << fun(3, 4) << endl;
    return 0;
}