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
    
    int temp = vec[2];
    vec[2] = vec[3];
    vec[3] = temp;

    // test code
    cout << "The swapped array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl << endl;

    return 0;
}