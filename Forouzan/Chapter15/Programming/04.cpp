#include <iostream>
using namespace std;

template<typename T>
void Swap(T& T1, T& T2)
{
    T temp = T1;
    T1 = T2;
    T2 = temp;
}

template<typename T, int N>
void reverse(T(&array)[N])
{
    for (int i = 0; i < N / 2; i++)
    {
        Swap<T>(array[i], array[N - 1 - i]);
    }
}

int main()
{
    int iArray[5] = {1, 2, 3, 4, 5};
    double dArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char cArray[5] = {'a', 'b', 'c', 'd', 'e'};
    string sArray[5] = {"AB", "CD", "EF", "GH", "IJ"};

    cout << "iArray : ";
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

    cout << "cArray : ";
    for (int i = 0; i < 5; i++)
    {
        cout << cArray[i] << " ";
    }
    cout << endl;

    cout << "sArray : ";
    for (int i = 0; i < 5; i++)
    {
        cout << sArray[i] << " ";
    }
    cout << endl << endl;

    reverse<int>(iArray);
    reverse<double>(dArray);
    reverse<char>(cArray);
    reverse<string>(sArray);

    cout << "reverse(iArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << iArray[i] << " ";
    }
    cout << endl;

    cout << "reverse(dArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << dArray[i] << " ";
    }
    cout << endl;

    cout << "reverse(cArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << cArray[i] << " ";
    }
    cout << endl;

    cout << "reverse(sArray) : ";
    for (int i = 0; i < 5; i++)
    {
        cout << sArray[i] << " ";
    }
    cout << endl;

    return 0;
}