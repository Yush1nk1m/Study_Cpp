#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, minimum;
    
    cout << "Enter the first number : ";
    cin >> num1;
    minimum = num1;
    
    cout << "Enter the second number : ";
    cin >> num2;
    if (num2 < minimum) minimum = num2;

    cout << "Enter the third number : ";
    cin >> num3;
    if (num3 < minimum) minimum = num3;

    cout << "The minimum number among three numbers : " << minimum << endl;

    return 0;
}