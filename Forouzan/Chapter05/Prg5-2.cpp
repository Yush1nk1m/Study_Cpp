/****************************************************************
 * A program which calculates the average of a student's score  *
 * with counter controlled while loop statement                 *
****************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declaration
    int score;
    int sum = 0;
    double average;
    // loop statement
    int counter = 0;        // initialize the counter
    while (counter < 4)     // check condition of the counter
    {
        // process(read a number and add to variable 'sum')
        cout << "Enter a score in range from 0 to 100 : ";
        cin >> score;
        sum += score;
        counter++;      // increment the counter
    }
    // print result
    average = static_cast<double>(sum) / 4;
    cout << fixed << setprecision(2) << showpoint;
    cout << "The average score : " << average;
    return 0;
}