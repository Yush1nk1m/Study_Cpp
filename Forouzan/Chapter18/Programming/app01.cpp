#include "01.cpp"

int main()
{
    DoublyList<string> dl;
    dl.insert(0, "one");
    dl.insert(1, "two");
    dl.insert(2, "three");
    dl.insert(3, "four");
    dl.insert(4, "five");

    dl.print();
    cout << endl;
    dl.reversePrint();
    cout << endl;

    return 0;
}