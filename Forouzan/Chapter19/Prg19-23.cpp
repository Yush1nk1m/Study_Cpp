/************************************************
 * Using a function object which prnits values  *
************************************************/
#include <iostream>
using namespace std;

class Print
{
    public:
        void operator()(int value) { cout << value; }
};

int main()
{
    Print print;        // create a Print object
    print(45);          // operator() call
    return 0;
}