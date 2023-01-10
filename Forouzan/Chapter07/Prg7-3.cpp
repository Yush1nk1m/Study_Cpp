/********************************************************
 * A program which declares, defines, uses a class      *
 * that generates random numbers in a given range       *
********************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/************************************************************
 * RandomInteger class definition                           *
 * (data member declaration and member function definition) *
************************************************************/
class RandomInteger
{
    private:
        int low;    // data member
        int high;   // data member
        int value;  // data member
    public:
        RandomInteger(int low, int high);   // constructor
        ~RandomInteger();                   // destructor
        // prevent synthetic copy constructor's call
        RandomInteger(const RandomInteger& random) = delete;
        void print() const;                 // accessor member function
};
/****************************************************************
 * RandomInteger class'                                         *
 * constructor, destructor, accessor member function definition *
****************************************************************/
// constructor
RandomInteger::RandomInteger(int lw, int hh)
: low(lw), high(hh)
{
    srand(time(0));
    int temp = rand();
    value = temp % (high - low + 1) + low;
}
// destructor
RandomInteger::~RandomInteger()
{
}
// accessor member function
void RandomInteger::print() const
{
    cout << value << endl;
}
/************************************************************
 * An application which instantiates RandomInteger object   *
 * and prints the value(random integer)                     *
************************************************************/
int main()
{
    // generate a random integer in range between 100 and 200
    RandomInteger r1(100, 200);
    cout << "Random integer in range between 100 and 200 : ";
    r1.print();
    // generate a random integer in range between 400 and 600
    RandomInteger r2(400, 600);
    cout << "Random integer in range between 400 and 600 : ";
    r2.print();
    // generate a random integer in range between 1500 and 2000
    RandomInteger r3(1500, 2000);
    cout << "Random integer in range between 1500 and 2000 : ";
    r3.print();
    return 0;
}