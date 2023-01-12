#include <iostream>
using namespace std;

class Address
{
    private:
        string houseNo;
        string streetName;
        string cityName;
        string stateName;
        string zipcode;
    public:
        Address(string houseNo, string streetName, string cityName, string stateName, string zipcode);
        ~Address();
        void print() const;
};