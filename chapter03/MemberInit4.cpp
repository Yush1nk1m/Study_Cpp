#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTest
{
public :
    // member initializing using generator initialize category
    CTest()
        : m_nData1(10), m_nData2(20)
    {}

    // declaration of two member data
    int m_nData1;
    int m_nData2;

    // declaration and definition of the member function
    void PrintData(void)
    {
        // access to the two member data and print their values
        cout << m_nData1 << endl;
        cout << m_nData2 << endl;
    }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CTest t;
    t.PrintData();

    return 0;
}