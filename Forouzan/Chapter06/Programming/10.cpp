#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    for (int i = 1; i <= 10; i++)
    {
        cout << "log2(" << i << ") = " << log(i) / log(2) << endl;
    }
    return 0;
}