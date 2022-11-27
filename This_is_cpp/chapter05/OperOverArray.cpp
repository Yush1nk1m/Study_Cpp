#include <tchar.h>
#include <string.h>
#include <iostream>
using namespace std;

// maker's code
class CIntArray
{
public :
    CIntArray(int nSize)
    {
        // secure memory enough to store integer type data with passed number
        m_pnData = new int[nSize];
        memset(m_pnData, 0, sizeof(int) * nSize);
    }

    ~CIntArray() { delete m_pnData; }

    // array operator with the case of constant type reference
    int operator[](int nIndex) const
    {
        cout << "operator[] const" << endl;
        return m_pnData[nIndex];
    }

    // general array operator
    int& operator[](int nIndex)
    {
        cout << "operator[]" << endl;
        return m_pnData[nIndex];
    }

private :
    // array memory
    int *m_pnData;

    // the number of array elements
    int m_nSize;
};

// user's code
void TestFunc(const CIntArray &arParam)
{
    cout << "TestFunc()" << endl;

    // call 'operator[](int nIndex) const' because of constant reference
    cout << arParam[3] << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    CIntArray arr(5);
    for (int i = 0; i < 5; i++)
        arr[i] = i * 10;
    
    TestFunc(arr);

    return 0;
}