#include <vector>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    vector<int> vec(5);

    cout << "The origin array : ";
    for (int i = 0; i < 5; i++)
    {
        vec.at(i) = rand() % 100;
        cout << vec.at(i) << " ";
    }
    cout << endl << endl;
    
    vector<int>::iterator iter = vec.begin();
    ++iter; ++iter;
    int temp = *iter;
    *iter = *(++iter);
    *iter = temp;

    // test code
    cout << "The swapped array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl << endl;

    return 0;
}