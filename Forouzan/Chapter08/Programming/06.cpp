#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10], revArr[10];
    
    cout << "Original array : ";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << setw(4) << left << arr[i];
    }
    cout << endl;

    cout << "Reversed array : ";
    for (int i = 0; i < 10; i++)
    {
        revArr[9 - i] = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << setw(4) << left << revArr[i];
    }
    cout << endl;

    return 0;
}