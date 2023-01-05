#include <iostream>
using namespace std;

int main()
{
    int type, size, i, j;

    cout << "Enter the size of the pattern(1, 2) : ";
    cin >> type;
    cout << "Enter the size of the pattern : ";
    cin >> size;

    if (type == 1)
    {
        for (i = size; i >= 1; i--)
        {
            for (j = i; j < size; j++)
            {
                cout << " ";
            }
            for (j = i * 2 - 1; j >= 1; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for (i = 1; i <= size; i++)
        {
            for (j = i; j < size; j++)
            {
                cout << " ";
            }
            for (j = 1; j <= i * 2 - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}