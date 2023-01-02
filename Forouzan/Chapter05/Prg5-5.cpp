/***********************************************
 * Find out the sum of numbers                 *
 * with sentinel control while loop statement  *
***********************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int sum = 0;
    int num;
    // receive an input and run the loop
    cout << "Enter an integer(enter '-1' to exit) : ";
    cin >> num;
    while (num != -1)
    {
        sum += num;
        cout << "Enter an integer(enter '-1' to exit) : ";
        cin >> num;     // change the sentinel
    }
    // print result
    cout << "The sum : " << sum << endl;
    return 0;
}