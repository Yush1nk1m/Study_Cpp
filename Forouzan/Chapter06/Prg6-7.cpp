/***************************************
 * A guessing game with random number  *
***************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // declaration and initialization
    const int low = 5;
    const int high = 15;
    const int tryLimit = 5;
    int guess;
    // random number generation
    srand(time(0));
    int temp = rand();
    int num = temp % (high - low + 1) + low;
    // loop for guessing
    int counter = 1;
    bool found = false;
    while (counter <= tryLimit && !found)
    {
        do
        {
            cout << "Enter an integer between 5 and 15 : ";
            cin >> guess;
        } while (guess < 5 || guess > 15);
        
        if (guess == num)
        {
            found = true;
        }
        else if (guess > num)
        {
            cout << "SMALLER" << endl;
        }
        else
        {
            cout << "LARGER" << endl;
        }
        counter++;
    }
    // the case when the guessing was correct
    if (found)
    {
        cout << "Congratulations. You have been succeeded to guess." << endl;
        cout << "The answer : " << num << endl;
    }
    // the case when the guessing was incorrect
    else
    {
        cout << "You have been failed to guess." << endl;
        cout << "The answer : " << num << endl;
    }
    return 0;
}