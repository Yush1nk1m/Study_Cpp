#include "tchar.h"
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData() { cout << "CMyData()" << endl; }
    CMyData(int nParam) { cout << "CMyData(int)" << endl; }
    CMyData(double dParam) { cout << "CMyData(double)" << endl; }
};

class CMyDataEx : public CMyData
{
public :
    CMyDataEx() { cout << "CMyDataEx()" << endl; }

    // select a constructor with integer variable among three constructors of basic class
    CMyDataEx(int nParam) : CMyData(nParam)
    {
        cout << "CMyDataEx(int)" << endl;
    }

    // select default constructor of basic class
    CMyDataEx(double dParam) : CMyData()
    {
        cout << "CMyDataEx(double)" << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[]) {
    CMyDataEx a;
    cout << "**********" << endl;
    CMyDataEx b(5);
    cout << "**********" << endl;
    CMyDataEx c(3.3);
    
    return 0;
}