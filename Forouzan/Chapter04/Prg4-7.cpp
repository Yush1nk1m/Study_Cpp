/***********************************************************
 * A program check age if it is able to rent a car or not  *
***********************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int age;
    bool eligible;
    // receive input
    cout << "Enter an age : ";
    cin >> age;
    // set condition
    eligible = (age >= 25) && (age <= 100);
    // print based on condition
    if (eligible)
    {
        cout << "You can rent a car." << endl;
    }
    else
    {
        cout << "You cannot rent a car." << endl;
    }
    return 0;
}