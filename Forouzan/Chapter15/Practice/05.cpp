#include <iostream>
using namespace std;

template<typename T1, typename T2>
struct Pair
{
    T1 data1;
    T2 data2;
};

int main()
{
    Pair<int, double> pair1;
    Pair<double, char> pair2;

    pair1.data1 = 3;
    pair1.data2 = 3.3;

    pair2.data1 = 5.5;
    pair2.data2 = 'C';

    cout << "pair1 = (" << pair1.data1 << ", " << pair1.data2 << ")" << endl;
    cout << "pair2 = (" << pair2.data1 << ", " << pair2.data2 << ")" << endl;
    return 0;
}