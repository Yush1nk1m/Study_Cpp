#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTest
{
public :
    // declaration and definition of CTest class's initializer function
    CTest()
    {
        // automatically initiallize the member data when the instance is generated
        cout << "CTest() : Initializer function" << endl;
        m_nData = 10;
    }

    // declaration of the member data
    int m_nData;

    // declaration and definition of the member function
    void PrintData(void)
    {
        // access to the member data and print the data
        cout << m_nData << endl;
    }
};

// user code
int _tmain(int argc, _TCHAR* argv[])
{
    cout << "start of _tmain() function" << endl;

    CTest t;
    t.PrintData();

    cout << "finish of _tmain() function" << endl;

    return 0;
}