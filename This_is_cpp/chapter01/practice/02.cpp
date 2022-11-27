// auto 예약어는 r-value의 data type에 따라서 컴파일러가 data type을 자동적으로 정의해주는 것이다.
#include <tchar.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int v1 = 10;
    auto v2(v1);
    cout << "v1 : " << v1 << endl;
    cout << "v2 : " << v2 << endl;
    cout << "v1 + v2 : " << v1 + v2 << endl;

    return 0;
}