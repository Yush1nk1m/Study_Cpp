/****************************************************************
 * A program which throws and processes divide-by-0 exception   *
 * with invalid_argument object                                 *
****************************************************************/
#include <stdexcept>
#include <iostream>
using namespace std;

// function declaration
int quotient(int first, int second);

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer : ";
        cin >> num1;
        cout << "Enter the another integer : ";
        cin >> num2;
        // try-catch block
        try
        {
            cout << "result = " << quotient(num1, num2) << endl;
        }
        catch (invalid_argument ex)
        {
            cout << ex.what() << endl;
        }
    }
    return 0;
}
// function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw invalid_argument("Error : cannot divide by 0.");
    }
    return (first / second);
}