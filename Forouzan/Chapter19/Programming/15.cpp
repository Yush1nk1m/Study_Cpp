#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void print(int value) { cout << value << " "; }

class Fib
{
    private:
        int n1, n2;
        int count;
    public:
        Fib() : count(0), n1(0), n2(1) {}
        int operator()()
        {
            if (count == 0)
            {
                count++;
                return n1;
            }
            else if (count == 1)
            {
                count++;
                return n2;
            }
            else
            {
                count++;
                int temp = n1 + n2;
                n1 = n2;
                n2 = temp;
                return temp;
            }
        }
};

int main()
{
    vector<int> vec(11);

    generate(vec.begin(), vec.end(), Fib());

    for_each(vec.begin(), vec.end(), print);

    return 0;
}