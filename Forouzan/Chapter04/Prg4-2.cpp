/*******************************************************************
 * Calculate pay with overtime hours using if condition statement  *
*******************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // variable declaration
    double hours;
    double rate;
    double regularPay;
    double overPay;
    double totalPay;
    // receive input
    cout << "Enter a work hours : ";
    cin >> hours;
    cout << "Enter a pay per hour : ";
    cin >> rate;
    // regular pay calculation
    regularPay = hours * rate;
    overPay = 0.0;
    // pay calculation when one has been worked over 40 hours
    if (hours > 40.0)
    {
        overPay = (hours - 40.0) * rate * 0.30;
    }   // end of if statement
    // total pay calculation
    totalPay = regularPay + overPay;
    // print
    cout << fixed << showpoint;
    cout << "The regular pay : " << setprecision(2) << regularPay << endl;
    cout << "The pay for overtime hours : " << setprecision(2) << overPay << endl;
    cout << "The total pay : " << setprecision(2) << totalPay << endl;
    return 0;
}