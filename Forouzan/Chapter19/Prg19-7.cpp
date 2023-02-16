/************************************************
 * The form of [Prg19-2.cpp] decribed by list   *
************************************************/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // create a list and iterators
    list<int> List;
    list<int>::iterator iter;
    list<int>::reverse_iterator rIter;
    // input 10 elements into the list
    for (int i = 0; i < 10; i++)
    {
        List.push_back(i * 10);
    }
    // output with iter
    cout << "Print 20 after printing 40" << endl;
    iter = List.begin();
    iter++; iter++; iter++; iter++;
    cout << *iter << " ";
    iter--; iter--;
    cout << *iter << endl;
    // output with rIter
    cout << "Print 70 after printing 50" << endl;
    rIter = List.rbegin();
    rIter++; rIter++; rIter++; rIter++;
    cout << *rIter << " ";
    rIter--; rIter--;
    cout << *rIter << endl;
    return 0;
}