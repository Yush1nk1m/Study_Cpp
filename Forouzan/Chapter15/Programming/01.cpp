#include <iostream>
#include <limits>
using namespace std;

template<typename T, int N>
int Min(T(&array)[N])
{
    if (N > 0)
    {
        int minIdx = 0;
        for (int i = 1; i < N; i++)
        {
            if (array[minIdx] > array[i])
            {
                minIdx = i;
            }
        }
        return minIdx;
    }
    return -1;
}

int main()
{
    int iArray[5] = {1, 2, 3, 4, 5};
    double dArray[5] = {5.0, 4.0, 3.0, 2.0, 1.0};
    char cArray[5] = {'B', 'A', 'C', 'E', 'D'};

    cout << "Min(iArray) = " << Min(iArray) << endl;
    cout << "Min(dArray) = " << Min(dArray) << endl;
    cout << "Min(cArray) = " << Min(cArray) << endl;

    return 0;
}