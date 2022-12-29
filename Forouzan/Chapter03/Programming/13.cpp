#include <iostream>
using namespace std;

int main() {
    double payPerWeek, payPerTime;
    int extraTime;
    double totalPay;

    cout << "Enter a pay per week : ";
    cin >> payPerWeek;
    cout << "Enter an extra labor time in this week : ";
    cin >> extraTime;

    payPerTime = payPerWeek / static_cast<double>(40);
    totalPay = payPerWeek + (payPerTime * static_cast<double>(extraTime) * 1.6);
}