/****************************************************
 * A program which accesses to the data variable    *
 * directly or indirectly and prints it             *
****************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration and initialization
    int score = 92;
    int* pScore = &score;
    // access to the value of the data variable directly or indirectly
    cout << "Direct access to score : " << score << endl;
    cout << "Indirect access to score : " << *pScore << endl;
    return 0;
}