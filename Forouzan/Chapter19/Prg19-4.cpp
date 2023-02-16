/********************************************
 * A program which creates Pascal Triangle  *
********************************************/
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declaration
    const int POWER = 5;
    vector<vector<int>> pascal(POWER + 1, vector<int>());
    // create a regid vector
    for (int i = 0; i <= POWER; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            pascal[i].push_back(0);
        }
    }
    // fill the regid vector with pascal's triangle
    for (int i = 0; i <= POWER; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
    // output
    for (int i = 0; i <= POWER; i++)
    {
        cout << "Binomial coefficient of (x + y)^" << i << " : ";
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(4) << pascal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}