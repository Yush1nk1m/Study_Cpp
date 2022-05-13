#include <tchar.h>
#include <iostream>
using namespace std;

void TestFunc(const int& nParam)
{
    // commit type casting the constant type reference into the general reference
    int &nNewParam = const_cast<int &>(nParam);

    // hence, it can become l-value
    nNewParam = 20;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nData = 10;
    cout << "nData : " << nData << endl;

    // pass as the constant type reference but the value is changed
    TestFunc(nData);
    
    // print the changed value
    cout << "nData : " << nData << endl;

    return 0;
}