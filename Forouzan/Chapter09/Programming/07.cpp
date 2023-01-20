#include "07.h"

Pascal::Pascal(int degree)
: degree(degree)
{
    table = new int*[degree + 1];
    for (int i = 1; i <= degree; i++)
    {
        table[i] = new int[i];
    }

    for (int i = 1; i <= degree; i++)
    {
        for (int j = 0; j <= degree; j++)
        {
            if (j == 0 || i == j)
            {
                table[i][j] = 1;
            }
            else
            {
                table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
            }
        }
    }
}

Pascal::~Pascal()
{
    for (int i = 1; i <= degree; i++)
    {
        delete[] table[i];
    }
    delete[] table;
}

void Pascal::print() const
{
    cout << "The binomial coefficient of (x + y)^" << degree << " : ";
    for (int i = 0; i <= degree; i++)
    {
        cout << setw(5) << left << table[degree][i];
    }
    cout << endl;
}