/************************************************
 * A simple program which checks random-access  *
 * basic iterator and reverse iterator          *
************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // instantiation vector and iterator
    vector<int> vec;
    vector<int>::iterator iter;
    vector<int>::reverse_iterator rIter;
    // fill the vector with 10 elements
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i * 10);
    }
    // print 40 and 20 with basic iterator
    cout << "Print 20 after printing 40" << endl;
    iter = vec.begin();
    iter += 4;
    cout << *iter << " ";
    iter -= 2;
    cout << *iter << endl;
    // print 50 and 70 with reverse iterator
    cout << "Print 70 after printing 50" << endl;
    rIter = vec.rbegin();
    rIter += 4;
    cout << *rIter << " ";
    rIter -= 2;
    cout << *rIter << endl;
    return 0;
}