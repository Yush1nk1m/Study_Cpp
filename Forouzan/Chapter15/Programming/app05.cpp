#include "05.cpp"

int main()
{
    Array<int> iArray(3);
    iArray.add(1);
    iArray.add(2);
    iArray.add(3);

    Array<double> dArray(3);
    dArray.add(3.3);
    dArray.add(2.2);
    dArray.add(1.1);

    Array<char> cArray(3);
    cArray.add('A');
    cArray.add('B');
    cArray.add('C');

    iArray.print();
    dArray.print();
    cArray.print();

    return 0;
}