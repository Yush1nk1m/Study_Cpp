/**************************************************************
 * Find out the sum of progression with while loop statement  *
**************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration and initialization
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n;
    // receive variable n's input
    cout << "Enter the value of n : ";
    cin >> n;
    // while loop statement
    int counter = 1;        // counter initialization
    while (counter <= n)
    {
        sum1 += counter;
        sum2 += (counter * counter);
        sum3 += (counter * counter * counter);
        counter++;      // increment counter
    }
    // print result
    cout << "The value of n : " << n << endl;
    cout << "The value of sum1 : " << sum1 << endl;
    cout << "The value of sum2 : " << sum2 << endl;
    cout << "The value of sum3 : " << sum3 << endl;
    return 0;
}