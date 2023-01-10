/************************************************************
 * A program which declares, defines, uses Account class    *
************************************************************/
#include <iostream>
#include <cassert>
using namespace std;

/****************************************
 * Class definition(member declaration) *
****************************************/
class Account
{
    private:
        long accNumber;
        double balance;
        static int base;                // static data member
    public:
        Account(double bal);            // constructor
        ~Account();                     // destructor
        void checkBalance() const;      // getter
        void deposit(double amount);    // setter
        void withdraw(double amount);   // setter
};
// static data member initialization
int Account::base = 0;
/****************************************
 * Every member function's definition   *
****************************************/
// parameter constructor
Account::Account(double bal)
: balance(bal)
{
    if (bal < 0.0)
    {
        cout << "The balance cannot be negative. The program will be terminated." << endl;
        assert(false);
    }
    base++;
    accNumber = 100000 + base;

    cout << "Account_#" << accNumber << " has been created." << endl;
    cout << "Balance $" << balance << endl << endl;
}
// destructor
Account::~Account()
{
    cout << "Account_#" << accNumber << " has been closed." << endl;
    cout << "$" << balance << " sent to the client." << endl << endl;
}
// getter member function
void Account::checkBalance() const
{
    cout << "Account_#" << accNumber << endl;
    cout << "Transaction - check the balance" << endl;
    cout << "Balance : $" << balance << endl << endl;
}
// setter member function
void Account::deposit(double amount)
{
    if (amount > 0.0)
    {
        balance += amount;
        cout << "Account_#" << accNumber << endl;
        cout << "Transaction : deposit of $" << amount << endl;
        cout << "Changed balance : $" << balance << endl << endl;
    }
    else
    {
        cout << "Transaction has been stopped." << endl;
    }
}
// setter member function
void Account::withdraw(double amount)
{
    if (amount > balance)
    {
        amount = balance;
    }
    balance -= amount;
    cout << "Account_#" << accNumber << endl;
    cout << "Transaction - withdraw of $" << amount << endl;
    cout << "Changed balance : $" << balance << endl << endl;
}
/************************************************************
 * An application which uses Account class(main function)   *
************************************************************/
int main()
{
    // create 3 accounts
    Account acc1(2000);
    Account acc2(5000);
    Account acc3(1000);
    // transaction
    acc1.deposit(150);
    acc2.checkBalance();
    acc1.checkBalance();
    acc3.withdraw(800);
    acc1.withdraw(1000);
    acc2.deposit(120);
    return 0;
}