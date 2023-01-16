#include <iostream>
#include <iomanip>
#include <limits>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    int minimum = numeric_limits<int>::max();
    int maximum = numeric_limits<int>::min();

    cout << "Elements of the array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10 + 1;
        cout << setw(3) << left << arr[i];
    }
    cout << endl;

    for (int i = 0; i < 10; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
            if (arr[i + 1] < minimum)
            {
                minimum = arr[i + 1];
            }
        }
        else
        {
            if (arr[i] < minimum)
            {
                minimum = arr[i];
            }
            if (arr[i + 1] > maximum)
            {
                maximum = arr[i + 1];
            }
        }
    }
    cout << "The minimum value : " << minimum << endl;
    cout << "The maximum value : " << maximum << endl;
    return 0;
}