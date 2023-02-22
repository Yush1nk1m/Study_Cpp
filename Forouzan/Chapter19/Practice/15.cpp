#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<int, int> Map;

    Map.insert(pair<int, int>(3, 10));
    Map.insert(pair<int, int>(5, 12));
    Map.insert(pair<int, int>(7, 8));

    return 0;
}