#include <tchar.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int nInput = 0;
    cout << "Enter a integer number above 10" << endl;
    cin >> nInput;

    if (nInput > 10)
    {
        cout << nInput << endl;
    }

    else
        cout << "Error" << endl;
    
    return 0;
}