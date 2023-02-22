#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

void print(int value) { cout << value << " "; }

int main()
{
    srand(time(0));

    vector<int> vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(rand() % 100);
    }
    for_each(vec.begin(), vec.end(), print);
    cout << endl;

    cout << "Min. value : " << *min_element(vec.begin(), vec.end()) << endl;
    cout << "Max. value : " << *max_element(vec.begin(), vec.end()) << endl;

    return 0;
}