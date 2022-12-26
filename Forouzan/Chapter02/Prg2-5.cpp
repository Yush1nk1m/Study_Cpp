/*******************************************************************
 * A program which finds the balance after 3 times of transactions *
*******************************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration of variables
    int balance = 0;
    int transaction;
    // adjustment of balance after the first transaction
    cout << "Enter the amount of the first transaction : ";
    cin >> transaction;
    balance += transaction;
    // adjustment of balance after the second transaction
    cout << "Enter the amount of the second transaction : ";
    cin >> transaction;
    balance += transaction;
    // adjustment of balance after the third transaction
    cout << "Enter the amount of the third transaction : ";
    cin >> transaction;
    balance += transaction;
    // print the final amount of balance
    cout << "The final balance is " << balance << " dollars.";
    return 0;
}