#include "06.h"

int main()
{
    int size;
    cout << "Enter the size of a multitable : ";
    cin >> size;

    MultiTable mt(size);
    mt.print();

    return 0;
}