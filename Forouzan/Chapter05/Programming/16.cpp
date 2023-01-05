#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout << "C      F" << endl;
    for (int C = 0; C < 100; C++)
    {
        cout << left << setw(7) << C;
        cout << (static_cast<double>(C) * 1.8 + 32) << endl;
    }

    return 0;
}