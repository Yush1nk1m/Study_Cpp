/********************************************
 * An implementation file for Invoice class *
********************************************/
#include "invoice.h"

// constructor
Invoice::Invoice(int invoiceNumber)
: invoiceNumber(invoiceNumber), invoiceTotal(0.0)
{
}
// destructor
Invoice::~Invoice()
{
}
// add member function
void Invoice::add(int quantity, Product product)
{
    invoiceTotal += quantity * product.getPrice();
}
// print member function
void Invoice::print() const
{
    cout << "Invoice number : " << invoiceNumber << endl;
    cout << "Invoice amount : " << invoiceTotal << endl;
}