#include "07.h"

int main()
{
    int degree;
    cout << "Enter the degree n of a binomial coefficient expression (x + y)^n : ";
    cin >> degree;

    Pascal pascal(degree);
    pascal.print();

    return 0;
}