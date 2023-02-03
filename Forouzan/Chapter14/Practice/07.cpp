#include <iostream>
using namespace std;

int main()
{
    int value = 30;
    if (value > 20) throw value;
    cout << value;
    return 0;
}