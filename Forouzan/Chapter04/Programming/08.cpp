#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter a coordinate of x : ";
    cin >> x;
    cout << "Enter a coordinate of y : ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "The first quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The second quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The third quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The fourth quadrant" << endl;
    }
    else
    {
        cout << "On the line" << endl;
    }

    return 0;
}