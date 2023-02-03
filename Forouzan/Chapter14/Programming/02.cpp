#include "02.h"

DivByZero::DivByZero(const char* message)
{
    this->message = message;
}

const char* DivByZero::what() const
{
    return message;
}