#include <iostream>
using namespace std;

int main() {
    const double tax = 0.09;
    double salePrice;
    double price;

    cout << "Sale price : ";
    cin >> salePrice;
    cout << "Consumption tax : " << tax << endl;
    price = salePrice + (salePrice * tax);
    cout << "Total price : " << price << endl;

    return 0;
}