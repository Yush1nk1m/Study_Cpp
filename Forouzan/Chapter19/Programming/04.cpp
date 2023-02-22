#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

void print(int value)
{
    cout << value << " ";
}

int main()
{
    list<int> List;
    List.push_back(3);
    List.push_back(4);
    List.push_back(2);
    List.push_back(5);
    List.push_back(1);

    for_each(List.begin(), List.end(), print);
    cout << endl;

    List.sort();

    for_each(List.begin(), List.end(), print);
    cout << endl;
    
    return 0;
}