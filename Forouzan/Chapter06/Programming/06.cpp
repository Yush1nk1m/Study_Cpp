#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int front = 0, back = 0;
    for (int i = 0; i < 1000000; i++)
    {
        int coin = rand() % 2;
        switch (coin)
        {
            case 0: front++; break;
            case 1: back++; break;
        }
    }
    cout << "The number of front side : " << front << endl;
    cout << "The number of back side : " << back << endl;
    return 0;
}