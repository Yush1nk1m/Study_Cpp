#include <tchar.h>
#include <iostream>
using namespace std;

class CMyPoint
{
public :
    CMyPoint(int x)
    {
        cout << "CMyPoint(int)" << endl;
        // examine whether the value of x is above 100 and if so, fix it as 100
        if (x > 100)
            x = 100;

        m_x = 100;
    }

    CMyPoint(int x, int y)
        // the code to examine the value of x already exists, so reuse it
        : CMyPoint(x)
    {
        cout << "CMyPoint(int, int)" << endl;

        // examine whether the value of y is above 200 and if so, fix it as 200
        if (y > 200)
            y = 200;
        
        m_y = 200;
    }

    void Print()
    {
        cout << "X : " << m_x << endl;
        cout << "Y : " << m_y << endl;
    }

private :
    int m_x = 0;
    int m_y = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    // call only one constructor with one parameter
    CMyPoint ptBegin(110);
    ptBegin.Print();

    // call two constructors
    CMyPoint ptEnd(50, 250);
    ptEnd.Print();

    return 0;
}