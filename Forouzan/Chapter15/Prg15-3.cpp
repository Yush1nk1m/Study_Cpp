/************************************************************************
 * A program which uses a template function that does swap two values   *
************************************************************************/
#include <iostream>
using namespace std;

// template function definition
template<typename T>
void exchange(T& first, T& second)
{
    T temp = first;
    first = second;
    second = temp;
}

int main()
{
    // int data type swap
    int integer1 = 5;
    int integer2 = 70;
    exchange(integer1, integer2);
    cout << "swap(5, 70) = " << integer1 << " " << integer2 << endl;
    // double data type swap
    double double1 = 101.5;
    double double2 = 402.7;
    exchange(double1, double2);
    cout << "swap(101.5, 402.7) = " << double1 << " " << double2 << endl;
    return 0;
}