#include <iostream>
using namespace std;

int main() {
    const double tv = 1400.0, dvd = 220.0, remoteCon = 35.20;
    int tvNum, dvdNum, remoteConNum;
    double total;

    cout << "Enter the number of televisions you will purchase : ";
    cin >> tvNum;
    cout << "Enter the number of dvds you will purchase : ";
    cin >> dvdNum;
    cout << "Enter the number of remote controllers you will purchase : ";
    cin >> remoteConNum;

    total = (tv * static_cast<double>(tvNum) + dvd * static_cast<double>(dvdNum) + remoteCon * static_cast<double>(remoteConNum)) * 1.0825;

    cout << "The total amount is $" << total << endl;
    return 0;
}