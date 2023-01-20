#include <iostream>
using namespace std;

int& max2(int&, int&);

int& max3(int&, int&, int&);

int main()
{
    int n1, n2, n3;
    cout << "Enter the first number : ";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;
    cout << "Enter the third number : ";
    cin >> n3;

    int& maximum = max3(n1, n2, n3);
    cout << "The maximum number among three numbers : " << maximum << endl;

    return 0;
}

int& max2(int& n1, int& n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    return n2;
}

int& max3(int& n1, int& n2, int& n3)
{
    int& tempMax = max2(n1, n2);
    if (tempMax > n3)
    {
        return tempMax;
    }
    return n3;
}