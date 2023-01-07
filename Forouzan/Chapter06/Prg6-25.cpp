/****************************************************************
 * A program which finds out the future value of time deposit   *
 * with functions                                               *
****************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// primary functions' declaration
void input(double& invest, double& rate, double& term);
void process(double invest, double rate, double term, double& multiplier, double& futureValue);
void output(double invest, double rate, double term, double multiplier, double futureValue);
// extra functions' declaration
double getInput(string message);
double findMultiplier(double rate, double period);
void printData(double invest, double rate, double term);
void printResult(double multiplier, double value);

int main()
{
    // variable declaration
    double invest, rate, term;          // input variables
    double multiplier, futureValue;     // output variables
    // primary functions call
    input(invest, rate, term);
    process(invest, rate, term, multiplier, futureValue);
    output(invest, rate, term, multiplier, futureValue);
    return 0;
}

/*********************************************************************
 * input function calls getInput function and receives three inputs, *
 * passes the value to main function with pass-by-reference          *
 * when the function has been terminated, inputs are                 *
 * stored in invest, rate, term                                      *
*********************************************************************/
void input(double& invest, double& rate, double& term)
{
    invest = getInput("Enter the amount of invest : ");
    rate = getInput("Enter an annual interest rate : ");
    term = getInput("Enter the number of year you make a deposit : ");
}