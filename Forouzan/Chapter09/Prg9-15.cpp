/************************************************************************
 * A program which dynamically allocates an ragged array in the heap    *
 * and finds out the binomial coefficient with it                       *
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declaration
    int maxPower = 10;
    int n;
    // input data validation
    do
    {
        cout << "Enter the value of n of '(x + y)^n' : ";
        cin >> n;
    } while (n < 0 || n > maxPower);
    // dynamic allocation at the heap
    int** pascal = new int*[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        pascal[i] = new int[i];
    }
    // find out binomial coefficient
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }
    // print binomial coefficient
    cout << "The binomial coefficient of '(x + y)^" << n << "' : ";
    for (int j = 0; j <= n; j++)
    {
        cout << setw(5) << left << pascal[n][j];
    }
    cout << endl;
    // delete from the heap
    for (int i = 0; i < n + 1; i++)
    {
        delete pascal[i];
    }
    delete[] pascal;
    return 0;
}