/********************************************************
 * A program which shows how to access to the value     *
 * after declaring and initializing original variable   *
 * and reference variable                               *
********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // create reference relation
    int score = 92;
    int& rScore = score;
    // access with data variable
    cout << "Access to the value with a data variable" << endl;
    cout << "score : " << score << endl;
    // access with reference variable
    cout << "Access to the value with a reference variable" << endl;
    cout << "rScore : " << rScore;
    return 0;
}