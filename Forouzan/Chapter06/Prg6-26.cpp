/****************************************************
 * A program which finds out the future value of    *
 * an installment saving with functions             *
****************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

// primary function declaration
void input(double& invest, double& rate, double& term);
void process(double invest, double rate, double term, double& multiplier, double& futureValue);
void output(double invest, double rate, double term, double multiplier, double futureValue);
// extra function declaration
double getInput(string message);
double findMultiplier(double rate, double period);
void printData(double invest, double rate, double term);
void printResult(double multiplier, double value);

int main()
{
    // variable declaration
    double invest, rate, term;          // input variable
    double multiplier, futureValue;     // output variable
    // primary function call
    input(invest, rate, term);
    process(invest, rate, term, multiplier, futureValue);
    output(invest, rate, term, multiplier, futureValue);
    return 0;
}

/****************************************************************************
 * input function receives three inputs by getInput function                *
 * it passes values to main function with pass-by-reference                 *
 * when the function terminates, inputs are stored in invest, rate, term    *
****************************************************************************/
void input(double& invest, double& rate, double& term)
{
    invest = getInput("Enter the amount of money to invest to the installment savings : ");
    rate = getInput("Enter the interest rate per year : ");
    term = getInput("Enter the number of year : ");
}
/****************************************************************************
 * process function calculates a multiplier with findMultiplier function    *
 * and the future value, returns values passed by reference                 *
****************************************************************************/
void process(double invest, double rate, double term, double& multiplier, double& futureValue)
{
    multiplier = findMultiplier(rate, term);
    futureValue = multiplier * invest;
}
/****************************************************************************
 * output function prints three values with printData function              *
 * and the result with printResult function                                 *
****************************************************************************/
void output(double invest, double rate, double term, double multiplier, double futureValue)
{
    printData(invest, rate, term);
    printResult(multiplier, futureValue);
}
/****************************************************************************
 * getInput function receives input from an user                            *
 * it receives parameter by string type object message indicating           *
 * what data is required from the user                                      *
 * and checks whether the input is positive or not                          *
 * finally returns input value to input function                            *
****************************************************************************/
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
/****************************************************************************
 * findMultiplier function calculates a multiplier with a formula           *
 * returns the final value to process function                              *
****************************************************************************/
double findMultiplier(double rate, double term)
{
    double multiplier = 0;
    double factor = 1 + rate / 100;
    for (int i = term; i > 0; i--)
    {
        multiplier += pow(factor, i);
    }
    return multiplier;
}
/****************************************************************************
 * printData function prints inputs of invest, rate, term from an user      *
****************************************************************************/
void printData(double invest, double rate, double term)
{
    cout << endl << "Installment Savings Informaiton" << endl;
    cout << "The amount of money of the installment savings : " << fixed;
    cout << setprecision(2) << invest << endl;
    cout << "The interest rate : " << rate << fixed << setprecision(2);
    cout << "\% per year" << endl;
    cout << "Term : " << term << " years" << endl << endl;
}
/****************************************************************************
 * printResult function prints the multiplier and the future value          *
****************************************************************************/
void printResult(double multiplier, double futureValue)
{
    cout << "The result of the investment" << endl;
    cout << "The multiplier of the investment = " << fixed << setprecision(8);
    cout << multiplier << endl;
    cout << "The future value = " << fixed << setprecision(2);
    cout << futureValue << endl;
}