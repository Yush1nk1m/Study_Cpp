#include <iostream>
using namespace std;

template<typename T, int N>
int search(T(&array)[N], const T& element)
{
    for (int i = 0; i < N; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int iArray[5] = {1, 3, 5, 7, 9};
    char cArray[5] = {'a', 'c', 'e', 'g', 'h'};
    
    cout << "search(iArray, 3) = " << search<int>(iArray, 3) << endl;
    cout << "search(cArray, 'e') = " << search<char>(cArray, 'e') << endl;

    return 0;
}