#include <list>
#include <iostream>
using namespace std;

template<typename T>
void printList(const list<T>& List)
{
    for (auto iter = List.begin(); iter != List.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;
}

int main()
{
    list<int> List;
    for (int i = 1; i <= 10; i++)
    {
        List.push_back(i);
    }

    printList(List);

    return 0;
}