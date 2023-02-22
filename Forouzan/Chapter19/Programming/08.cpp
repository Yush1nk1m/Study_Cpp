#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int randGen()
{
    return (rand() % 101 + 100);
}

void print(int value)
{
    cout << value << " ";
}

int main()
{
    vector<int> vec(10);
    generate(vec.begin(), vec.end(), randGen);
    for_each(vec.begin(), vec.end(), print);
    return 0;
}