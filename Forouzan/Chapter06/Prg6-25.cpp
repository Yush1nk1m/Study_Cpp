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
/*********************************************************************
 * process function calculates multiplier with findMultiplier        *
 * function and calculates the future value and returns the values   *
 * which are passed by reference                                     *
*********************************************************************/
void process(double invest, double rate, double term, double& multiplier, double& futureValue)
{
    multiplier = findMultiplier(rate, term);
    futureValue = multiplier * invest;
}
/*********************************************************************
 * output function prints three values calling printData function    *
 * and prints the result calling printResult function                *
*********************************************************************/
void output(double invest, double rate, double term, double multiplier, double futureValue)
{
    printData(invest, rate, term);
    printResult(multiplier, futureValue);
}
/*********************************************************************
 * getInput function receives input from an user                     *
 * parameter means a message - what data is required from an user    *
 * the function receives a message as a string type object           *
 * and checks whether the input is positive number or not            *
 * finally return the input value to input function                  *
*********************************************************************/
double getInput(string message)
{
    double input;
    do
    {
        cout << message;
        cin >> input;
    } while (input < 0.0);
    return input;    
}
/*********************************************************************
 * findMultiplier function uses pass-by-value mechanism,             *
 * receives a term, and calculates a factor, square it by term       *
 * to finds out and returns a multiplier                             *
*********************************************************************/
double findMultiplier(double rate, double term)
{
    double factor = 1 + rate / 100;
    return pow(factor, term);
}
/*********************************************************************
 * printData function prints user inputs of invest, rate, term       *
 * this is a void function which simply prints on a screen           *
*********************************************************************/
void printData(double invest, double rate, double term)
{
    cout << endl << "Invest information" << endl;
    cout << "INVEST : " << fixed << setprecision(2) << invest << endl;
    cout << "INTEREST RATE : " << fixed << setprecision(2) << rate;
    cout << "\% per year" << endl;
    cout << "TERM : " << term << " years" << endl << endl;
}
/*********************************************************************
 * printResult pritns the final result of multiplier, futureValue    *
 * this is a void function which simply prints on a screen           *
*********************************************************************/
void printResult(double multiplier, double futureValue)
{
    cout << "The multiplier of an invest = " << fixed << setprecision(8);
    cout << multiplier << endl;
    cout << "The future value = " << fixed << setprecision(2);
    cout << futureValue << endl;
}