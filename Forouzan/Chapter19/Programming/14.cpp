#include <list>
#include <algorithm>
#include <iostream>
#include <ctime>
using namespace std;

class Even
{
    private:
        static int value;
    public:
        int operator()()
        {
            int temp = value;
            value += 2;
            return temp;
        }
};

int Even::value = 0;

void print(int value) { cout << value << " "; }

int main()
{
    list<int> List(10);
    Even even();

    generate(List.begin(), List.end(), Even());

    for_each(List.begin(), List.end(), print);
    
    return 0;
}