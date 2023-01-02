#include <iostream>
using namespace std;

int main()
{
    double price, totalPrice;
    int quantity;

    cout << "Enter the price of a stuff : ";
    cin >> price;
    cout << "Enter a quantity you will buy : ";
    cin >> quantity;
    totalPrice = price * quantity;

    if (quantity >= 100)
    {
        totalPrice -= (0.1 * totalPrice);    
    }
    else if (quantity >= 50)
    {
        totalPrice -= (0.05 * totalPrice);
    }
    else if (quantity >= 10)
    {
        totalPrice -= (0.03 * totalPrice);
    }

    cout << "The total price you have to pay is $" << totalPrice << endl;

    return 0;
}