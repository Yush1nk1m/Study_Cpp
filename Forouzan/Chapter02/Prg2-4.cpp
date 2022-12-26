/***********************************************************
 * A program which calculates the sum of pennies and bucks *
***********************************************************/
#include <iostream>
using namespace std;

int main() {
    // definition of constants
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dolloarValue = 100;
    // definition of variables (the number of each coin)
    unsigned int pennies;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;
    // declaration of a variable which represents the total value
    unsigned long totalValue;
    cout << "The number of penny : ";
    cin >> pennies;
    cout << "The number of nickel : ";
    cin >> nickels;
    cout << "The number of dime : ";
    cin >> dimes;
    cout << "The number of quarter : ";
    cin >> quarters;
    cout << "The number of dollar : ";
    cin >> dollars;
    // calculation of the total sum of money
    totalValue = pennies * pennyValue + nickels * nickelValue +
    dimes * dimeValue + quarters * quarterValue + dollars * dolloarValue;
    // print the result
    cout << "Total sum of money is " << totalValue << " pennies.";
    return 0;
}