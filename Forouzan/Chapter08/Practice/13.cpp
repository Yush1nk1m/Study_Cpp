#include <iostream>
using namespace std;

int main()
{
    const int CAPACITY = 10;
    string names[CAPACITY] = { 0 };
    int salaries[CAPACITY] = { 0 };

    for (int i = 0; i < CAPACITY; i++)
    {
        cout << "Enter the name of " << i + 1 << "th employee : ";
        cin >> names[i];
        cout << "Enter the salary of " << i + 1 << "th employee : ";
        cin >> salaries[i];
    }
    return 0;
}