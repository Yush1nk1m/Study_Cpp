#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        cout << (rand() % 5 + 1) * 2 << endl;
    }
    return 0;
}