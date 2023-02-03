#include <iostream>
#include <stdexcept>
using namespace std;

class DivByZero : public invalid_argument
{
    private:
        const char* message;
    public:
        DivByZero(const char* message);
        const char* what() const throw();
};