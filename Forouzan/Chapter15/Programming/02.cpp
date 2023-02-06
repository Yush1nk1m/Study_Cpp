#include <iostream>
#include <limits>
using namespace std;

template<typename T, int N>
void selectionSort(T(&array)[N])
{
    for (int i = 0; i < N - 1; i++)
    {
        int minIdx = i;
        for (int j = i; j < N; j++)
        {
            if (array[minIdx] > array[j])
            {
                minIdx = j;
            }
        }
        T temp = array[minIdx];
        array[minIdx] = array[i];
        array[i] = temp;
    }
}

int main()
{
    int iArray[5] = {2, 4, 1, 5, 3};
    double dArray[5] = {1.1, 3.3, 2.2, 5.5, 4.4};
    char cArray[5] = {'c', 'b', 'd', 'e', 'a'};

    cout << "iArray : ";
    for (int i = 0; i < 5; i++)
    {
        cout << iArray[i] << " ";
    }
    cout << endl;

    selectionSort<int>(iArray);
    cout << "Sort(iArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << iArray[i] << " ";
    }
    cout << endl;

    cout << "dArray : ";
    for (int i = 0; i < 5; i++)
    {
        cout << dArray[i] << " ";
    }
    cout << endl;

    selectionSort<double>(dArray);
    cout << "Sort(dArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << dArray[i] << " ";
    }
    cout << endl;

    cout << "cArray : ";
    for (int i = 0; i < 5; i++)
    {
        cout << cArray[i] << " ";
    }
    cout << endl;

    selectionSort<char>(cArray);
    cout << "Sort(cArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << cArray[i] << " ";
    }
    cout << endl;

    return 0;
}