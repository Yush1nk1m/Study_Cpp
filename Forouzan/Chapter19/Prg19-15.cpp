/************************************************
 * A program which sorts integers with a set    *
************************************************/
#include <set>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // create a empty integer set
    set<int> Set;
    // insert integers with duplication to the set
    Set.insert(47);
    Set.insert(18);
    Set.insert(12);
    Set.insert(24);
    Set.insert(52);
    Set.insert(20);
    Set.insert(24);
    Set.insert(92);
    Set.insert(53);
    Set.insert(77);
    Set.insert(98);
    Set.insert(87);
    // print set elements in ascending order
    cout << "Print set elements in ascending order" << endl;
    set<int>::iterator iter;
    for (iter = Set.begin(); iter != Set.end(); iter++)
    {
        cout << setw(4) << (*iter);
    }
    cout << endl << endl;
    // print set elements in descending order
    cout << "Print set elements in descending order" << endl;
    set<int>::reverse_iterator rIter;
    for (rIter = Set.rbegin(); rIter != Set.rend(); rIter++)
    {
        cout << setw(4) << (*rIter);
    }
    cout << endl << endl;
    // print an element after 52
    set<int>::iterator iter1 = Set.find(52);
    iter1++;
    cout << "An element after 52 : " << (*iter1) << endl;
    // print an element before 20
    set<int>::iterator iter2 = Set.find(20);
    iter2--;
    cout << "An element before 20 : " << (*iter2) << endl;
    return 0;
}