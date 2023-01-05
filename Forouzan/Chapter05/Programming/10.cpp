#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter an integer : ";
    cin >> m;
    cout << "Enter an integer : ";
    cin >> n;

    if (m < n)
    {
        int temp = m;
        m = n;
        n = temp;
    }

    while (n > 0)
    {
        m -= n;
        if (m < n)
        {
            int temp = m;
            m = n;
            n = temp;
        }    
    }

    cout << "The greatest common factor of two numbers : " << m << endl;

    return 0;
}