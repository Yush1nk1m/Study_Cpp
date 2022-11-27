#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTest
{
public :
    // declaration and definition of initializer function of CTest class
    CTest()
    {
        // automatically initialize the member data when the instance is generated
        m_nData = 10;
    }

    // declaration of member data
    int m_nData;

    // declaration and definition of member function
    void PrintData(void)
    {
        // access to the member data and print the value
        cout << m_nData << endl;
    }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CTest t;
    t.PrintData();

    return 0;
}