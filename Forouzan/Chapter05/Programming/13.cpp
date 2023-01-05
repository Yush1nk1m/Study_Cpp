#include <iostream>
using namespace std;

int main()
{
    int number, digitSum = 0;

    cout << "Enter an integer : ";
    cin >> number;

    do
    {
        digitSum += (number % 10);
        number /= 10;
    } while (number > 0);
    
    cout << "The sum of digits in the given integer : " << digitSum << endl;

    return 0;
}