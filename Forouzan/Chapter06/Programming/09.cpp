#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed << setprecision(8);
    for (int i = 1; i <= 10; i++)
    {
        cout << "sqrt(" << i << ") = " << sqrt(i) << endl;
    }
    return 0;
}