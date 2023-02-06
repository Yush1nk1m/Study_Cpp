/********************************************************************
 * A program which uses the specialization of the template function *
********************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// template function definition
template<typename T>
T smaller(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
// template function specialization
template<>
const char* smaller(const char* const &first, const char* const &second)
{
    if (strcmp(first, second) < 0)
    {
        return first;
    }
    return second;
}

int main()
{
    // template function call with string
    string str1 = "Hello";
    string str2 = "Hi";
    cout << "smaller(Hello, Hi) = " << smaller(str1, str2) << endl;
    // template function call with cstring
    const char* s1 = "Bye";
    const char* s2 = "Bye Bye";
    cout << "smaller(Bye, Bye Bye) = " << smaller(s1, s2) << endl;
    return 0;
}