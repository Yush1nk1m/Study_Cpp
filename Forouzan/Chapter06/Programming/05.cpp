#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    for (int counter = 1; counter <= 5; counter++)
    {
        int sum = 0;
        for (int t = 1; t <= 10; t++)
        {
            int num = rand() % 90 + 10;
            cout << "SET " << counter << " | " << t << "th number : " << num << endl;
            sum += num;
        }
        cout << "-----------------------------------------" << endl;
        cout << "The sum of SET " << counter << " : " << sum << endl;
        cout << "-----------------------------------------" << endl;
    }
    return 0;
}