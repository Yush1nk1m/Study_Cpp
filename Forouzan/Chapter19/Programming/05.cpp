#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
void print(T value)
{
    cout << value << " ";
}

int main()
{
    char array[10] = {'Z', 'B', 'D', 'C', 'G', 'H', 'A', 'Y', 'U', 'I'};

    for_each(array, array + 10, print<char>);
    cout << endl;

    sort(array, array + 10);

    for_each(array, array + 10, print<char>);
    cout << endl;
}