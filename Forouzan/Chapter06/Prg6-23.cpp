/***********************************************
 * A program which checks the static variable  *
***********************************************/
#include <iostream>
using namespace std;

void fun();

int main()
{
    fun();
    fun();
    fun();
    return 0;
}

/*****************************************************
 * A function which has static local variable count  *
 * count is initialized when it is initially called  *
 * afterwards, its value is remained                 *
*****************************************************/
void fun()
{
    static int count = 0;   // explicit static variable
    count++;
    cout << "count = " << count << endl;
}