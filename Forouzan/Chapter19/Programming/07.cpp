#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <ctime>
using namespace std;

void print(int value)
{
    cout << value << " ";
}

int main()
{
    srand(time(0));
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(rand() % 100);
    }

    int sum = accumulate(vec.begin(), vec.end(), 0);
    
    for_each(vec.begin(), vec.end(), print);
    cout << endl;

    cout << "The sum : " << sum << endl;

    return 0;
}