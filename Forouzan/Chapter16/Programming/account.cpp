#include "account.h"

Account::Account()
{
}

Account::Account(int id)
: id(id), amount(0)
{
    assert(id >= 0 && id <= 100);
}

Account::Account(int id, double amount)
: id(id), amount(amount)
{
}

Account::~Account()
{
}

int Account::getId() const
{
    return id;
}

double Account::getAmount() const
{
    return amount;
}

void Account::setAmount(double amount)
{
    this->amount = amount;
}