#include <tchar.h>
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData(int nParam) : m_nData(nParam) { };
    void PrintData()
    {
        // print the value of m_nData
        cout << m_nData << endl;

        // print the value of m_nData which is the member of the class CMyData
        cout << CMyData::m_nData << endl;

        // print the value of m_nData which is the member of the instance which called the method
        cout << this->m_nData << endl;

        // print the value of m_nData which is the member of the class CMyData of instance which called the method
        cout << this->CMyData::m_nData << endl;
    }

private :
    int m_nData;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(5), b(10);
    a.PrintData();
    b.PrintData();

    return 0;
}