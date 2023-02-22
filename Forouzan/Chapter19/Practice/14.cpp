#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<int, int> mp;
    
    mp[15] = 10;
    mp[16] = 10;
    mp[6] = 16;
    mp[12] = 8;

    cout << mp[10] << endl;

    return 0;
}