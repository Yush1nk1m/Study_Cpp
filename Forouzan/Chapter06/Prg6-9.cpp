/*****************************************************
 * A program which prints pattern                    *
 * with void function that has parameter             *
*****************************************************/
#include <iostream>
using namespace std;

/*******************************************************
 * A definition of pattern function                    *
 * pattern function is a void function with parameter  *
 * it receives the size of pattern as a argument       *
*******************************************************/
void pattern(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

int main()
{
    // declaration
    int patternSize;        // A value to pass to the function
    do
    {
        cout << "Enter the size of pattern : ";
        cin >> patternSize;
    } while (patternSize <= 0);
    // function call
    pattern(patternSize);   // patternSize is an argument in this procedure
    return 0;
}