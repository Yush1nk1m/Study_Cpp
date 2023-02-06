/********************************************************
 * A program which overloads smaller template function  *
********************************************************/
#include <iostream>
using namespace std;

// template function definition
template<typename T>
T smallest(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
// template function definition
template<typename T>
T smallest(const T& first, const T& second, const T& third)
{
    return smallest(smallest(first, second), third);
}

int main()
{
    // 3-parameters form call(int data type)
    cout << "smallest(17, 12, 27) = " << smallest(17, 12, 27) << endl;
    // 3-parameters form call(double data type)
    cout << "smallest(8.5, 4.1, 19.75) = " << smallest(8.5, 4.1, 19.75) << endl;
    return 0;
}