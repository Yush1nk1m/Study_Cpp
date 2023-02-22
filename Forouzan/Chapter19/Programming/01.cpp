#include <iostream>
#include <algorithm>
using namespace std;

void print(int value)
{
    cout << value << " ";
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    for_each(array, array + 5, print);

    return 0;
}