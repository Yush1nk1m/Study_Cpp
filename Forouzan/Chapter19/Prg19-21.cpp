/****************************************************
 * Using a function which calls another function    *
****************************************************/
#include <iostream>
using namespace std;

// print function definition
void print(int value)
{
    cout << value << endl;
}
// fun function definition
void fun(int x, void(*f)(int))
{
    f(x);
}

int main()
{
    fun(24, print);     // fun function call
    fun(88, print);     // fun function call
    return 0;
}