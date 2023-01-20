#include "06.h"

MultiTable::MultiTable(int size)
: size(size)
{
    if (size >= 10)
    {
        assert(true);
    }
    table = new int*[size];
    for (int i = 0; i < size; i++)
    {
        table[i] = new int[size];
    }

    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            table[r][c] = (r + 1) * (c + 1);
        }
    }
}

MultiTable::~MultiTable()
{
    for (int i = 0; i < size; i++)
    {
        delete[] table[i];
    }
    delete[] table;
}

void MultiTable::print() const
{
    cout << "   ";
    for (int i = 0; i < size; i++)
    {
        cout << setw(3) << left << (i + 1);
    }
    cout << endl;
    cout << "---";
    for (int i = 0; i < size; i++)
    {
        cout << "---";
    }
    cout << endl;

    for (int r = 0; r < size; r++)
    {
        cout << setw(2) << (r + 1) << "|";
        for (int c = 0; c < size; c++)
        {
            cout << setw(3) << left << table[r][c];
        }
        cout << endl;
    }
    cout << endl;
}