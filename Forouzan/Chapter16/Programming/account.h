#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

class Account
{
    private:
        int id;
        double amount;
    public:
        Account();
        Account(int id);
        Account(int id, double amonut);
        ~Account();
        int getId() const;
        double getAmount() const;
        void setAmount(double amount);
};