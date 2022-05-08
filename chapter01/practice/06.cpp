/* 배열이 이미 오름차순으로 정렬돼 있으므로, 주어진 배열을 내림차순으로 바꾸는 프로그램을 작성한다. */
#include <tchar.h>
#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
    int tmp(a);
    a = b;
    b = tmp;
}

int _tmain(int argc, _TCHAR* argv[]) {
    int aList[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 3; i++)
        Swap(aList[i], aList[4 - i]);
    
    for (auto n : aList)
        cout << n << ' ';
    cout << endl;

    return 0;
}