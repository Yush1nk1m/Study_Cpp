#include "03.h"

DivByZero::DivByZero(const char* message)
: invalid_argument(message)
{
    this->message = message;
}

const char* DivByZero::what() const throw()
{
    return message;
}