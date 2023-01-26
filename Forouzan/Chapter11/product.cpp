/********************************************
 * An implementation file for Product class *
********************************************/
#include "product.h"

// constructor
Product::Product(string name, double unitPrice)
: name(name), unitPrice(unitPrice)
{
}
// destructor
Product::~Product()
{
}
// getPrice member function
double Product::getPrice() const
{
    return unitPrice;
}