#include "05.h"

Address::Address(string houseNo, string streetName, string cityName, string stateName, string zipcode)
: houseNo(houseNo), streetName(streetName), cityName(cityName), stateName(stateName), zipcode(zipcode)
{
}

Address::~Address()
{
}

void Address::print() const
{
    cout << "Address" << endl;
    cout << houseNo << ", " << streetName << ", " << cityName << ", " << stateName << ", " << zipcode << endl;
}